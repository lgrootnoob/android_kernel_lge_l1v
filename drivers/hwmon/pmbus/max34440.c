/*
 * Hardware monitoring driver for Maxim MAX3.4.1/MAX34441
 *
 * Copyright (c) 2011 Ericsson AB.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>
#include <linux/err.h>
#include <linux/i2c.h>
#include "pmbus.h"

enum chips { max3.4.1, max34441, max34446 };

#define MAX3.4.1_MFR_VOUT_PEAK		0xd4
#define MAX3.4.1_MFR_IOUT_PEAK		0xd5
#define MAX3.4.1_MFR_TEMPERATURE_PEAK	0xd6
#define MAX3.4.1_MFR_VOUT_MIN		0xd7

#define MAX34446_MFR_POUT_PEAK		0xe0
#define MAX34446_MFR_POUT_AVG		0xe1
#define MAX34446_MFR_IOUT_AVG		0xe2
#define MAX34446_MFR_TEMPERATURE_AVG	0xe3

#define MAX3.4.1_STATUS_OC_WARN		(1 << 0)
#define MAX3.4.1_STATUS_OC_FAULT	(1 << 1)
#define MAX3.4.1_STATUS_OT_FAULT	(1 << 5)
#define MAX3.4.1_STATUS_OT_WARN		(1 << 6)

struct max3.4.1_data {
	int id;
	struct pmbus_driver_info info;
};

#define to_max3.4.1_data(x)  container_of(x, struct max3.4.1_data, info)

static int max3.4.1_read_word_data(struct i2c_client *client, int page, int reg)
{
	int ret;
	const struct pmbus_driver_info *info = pmbus_get_driver_info(client);
	const struct max3.4.1_data *data = to_max3.4.1_data(info);

	switch (reg) {
	case PMBUS_VIRT_READ_VOUT_MIN:
		ret = pmbus_read_word_data(client, page,
					   MAX3.4.1_MFR_VOUT_MIN);
		break;
	case PMBUS_VIRT_READ_VOUT_MAX:
		ret = pmbus_read_word_data(client, page,
					   MAX3.4.1_MFR_VOUT_PEAK);
		break;
	case PMBUS_VIRT_READ_IOUT_AVG:
		if (data->id != max34446)
			return -ENXIO;
		ret = pmbus_read_word_data(client, page,
					   MAX34446_MFR_IOUT_AVG);
		break;
	case PMBUS_VIRT_READ_IOUT_MAX:
		ret = pmbus_read_word_data(client, page,
					   MAX3.4.1_MFR_IOUT_PEAK);
		break;
	case PMBUS_VIRT_READ_POUT_AVG:
		if (data->id != max34446)
			return -ENXIO;
		ret = pmbus_read_word_data(client, page,
					   MAX34446_MFR_POUT_AVG);
		break;
	case PMBUS_VIRT_READ_POUT_MAX:
		if (data->id != max34446)
			return -ENXIO;
		ret = pmbus_read_word_data(client, page,
					   MAX34446_MFR_POUT_PEAK);
		break;
	case PMBUS_VIRT_READ_TEMP_AVG:
		if (data->id != max34446)
			return -ENXIO;
		ret = pmbus_read_word_data(client, page,
					   MAX34446_MFR_TEMPERATURE_AVG);
		break;
	case PMBUS_VIRT_READ_TEMP_MAX:
		ret = pmbus_read_word_data(client, page,
					   MAX3.4.1_MFR_TEMPERATURE_PEAK);
		break;
	case PMBUS_VIRT_RESET_POUT_HISTORY:
		if (data->id != max34446)
			return -ENXIO;
		ret = 0;
		break;
	case PMBUS_VIRT_RESET_VOUT_HISTORY:
	case PMBUS_VIRT_RESET_IOUT_HISTORY:
	case PMBUS_VIRT_RESET_TEMP_HISTORY:
		ret = 0;
		break;
	default:
		ret = -ENODATA;
		break;
	}
	return ret;
}

static int max3.4.1_write_word_data(struct i2c_client *client, int page,
				    int reg, u16 word)
{
	const struct pmbus_driver_info *info = pmbus_get_driver_info(client);
	const struct max3.4.1_data *data = to_max3.4.1_data(info);
	int ret;

	switch (reg) {
	case PMBUS_VIRT_RESET_POUT_HISTORY:
		ret = pmbus_write_word_data(client, page,
					    MAX34446_MFR_POUT_PEAK, 0);
		if (ret)
			break;
		ret = pmbus_write_word_data(client, page,
					    MAX34446_MFR_POUT_AVG, 0);
		break;
	case PMBUS_VIRT_RESET_VOUT_HISTORY:
		ret = pmbus_write_word_data(client, page,
					    MAX3.4.1_MFR_VOUT_MIN, 0x7fff);
		if (ret)
			break;
		ret = pmbus_write_word_data(client, page,
					    MAX3.4.1_MFR_VOUT_PEAK, 0);
		break;
	case PMBUS_VIRT_RESET_IOUT_HISTORY:
		ret = pmbus_write_word_data(client, page,
					    MAX3.4.1_MFR_IOUT_PEAK, 0);
		if (!ret && data->id == max34446)
			ret = pmbus_write_word_data(client, page,
					MAX34446_MFR_IOUT_AVG, 0);

		break;
	case PMBUS_VIRT_RESET_TEMP_HISTORY:
		ret = pmbus_write_word_data(client, page,
					    MAX3.4.1_MFR_TEMPERATURE_PEAK,
					    0x8000);
		if (!ret && data->id == max34446)
			ret = pmbus_write_word_data(client, page,
					MAX34446_MFR_TEMPERATURE_AVG, 0);
		break;
	default:
		ret = -ENODATA;
		break;
	}
	return ret;
}

static int max3.4.1_read_byte_data(struct i2c_client *client, int page, int reg)
{
	int ret = 0;
	int mfg_status;

	if (page >= 0) {
		ret = pmbus_set_page(client, page);
		if (ret < 0)
			return ret;
	}

	switch (reg) {
	case PMBUS_STATUS_IOUT:
		mfg_status = pmbus_read_word_data(client, 0,
						  PMBUS_STATUS_MFR_SPECIFIC);
		if (mfg_status < 0)
			return mfg_status;
		if (mfg_status & MAX3.4.1_STATUS_OC_WARN)
			ret |= PB_IOUT_OC_WARNING;
		if (mfg_status & MAX3.4.1_STATUS_OC_FAULT)
			ret |= PB_IOUT_OC_FAULT;
		break;
	case PMBUS_STATUS_TEMPERATURE:
		mfg_status = pmbus_read_word_data(client, 0,
						  PMBUS_STATUS_MFR_SPECIFIC);
		if (mfg_status < 0)
			return mfg_status;
		if (mfg_status & MAX3.4.1_STATUS_OT_WARN)
			ret |= PB_TEMP_OT_WARNING;
		if (mfg_status & MAX3.4.1_STATUS_OT_FAULT)
			ret |= PB_TEMP_OT_FAULT;
		break;
	default:
		ret = -ENODATA;
		break;
	}
	return ret;
}

static struct pmbus_driver_info max3.4.1_info[] = {
	[max3.4.1] = {
		.pages = 14,
		.format[PSC_VOLTAGE_IN] = direct,
		.format[PSC_VOLTAGE_OUT] = direct,
		.format[PSC_TEMPERATURE] = direct,
		.format[PSC_CURRENT_OUT] = direct,
		.m[PSC_VOLTAGE_IN] = 1,
		.b[PSC_VOLTAGE_IN] = 0,
		.R[PSC_VOLTAGE_IN] = 3,	    /* R = 0 in datasheet reflects mV */
		.m[PSC_VOLTAGE_OUT] = 1,
		.b[PSC_VOLTAGE_OUT] = 0,
		.R[PSC_VOLTAGE_OUT] = 3,    /* R = 0 in datasheet reflects mV */
		.m[PSC_CURRENT_OUT] = 1,
		.b[PSC_CURRENT_OUT] = 0,
		.R[PSC_CURRENT_OUT] = 3,    /* R = 0 in datasheet reflects mA */
		.m[PSC_TEMPERATURE] = 1,
		.b[PSC_TEMPERATURE] = 0,
		.R[PSC_TEMPERATURE] = 2,
		.func[0] = PMBUS_HAVE_VOUT | PMBUS_HAVE_STATUS_VOUT
		  | PMBUS_HAVE_IOUT | PMBUS_HAVE_STATUS_IOUT,
		.func[1] = PMBUS_HAVE_VOUT | PMBUS_HAVE_STATUS_VOUT
		  | PMBUS_HAVE_IOUT | PMBUS_HAVE_STATUS_IOUT,
		.func[2] = PMBUS_HAVE_VOUT | PMBUS_HAVE_STATUS_VOUT
		  | PMBUS_HAVE_IOUT | PMBUS_HAVE_STATUS_IOUT,
		.func[3] = PMBUS_HAVE_VOUT | PMBUS_HAVE_STATUS_VOUT
		  | PMBUS_HAVE_IOUT | PMBUS_HAVE_STATUS_IOUT,
		.func[4] = PMBUS_HAVE_VOUT | PMBUS_HAVE_STATUS_VOUT
		  | PMBUS_HAVE_IOUT | PMBUS_HAVE_STATUS_IOUT,
		.func[5] = PMBUS_HAVE_VOUT | PMBUS_HAVE_STATUS_VOUT
		  | PMBUS_HAVE_IOUT | PMBUS_HAVE_STATUS_IOUT,
		.func[6] = PMBUS_HAVE_TEMP | PMBUS_HAVE_STATUS_TEMP,
		.func[7] = PMBUS_HAVE_TEMP | PMBUS_HAVE_STATUS_TEMP,
		.func[8] = PMBUS_HAVE_TEMP | PMBUS_HAVE_STATUS_TEMP,
		.func[9] = PMBUS_HAVE_TEMP | PMBUS_HAVE_STATUS_TEMP,
		.func[10] = PMBUS_HAVE_TEMP | PMBUS_HAVE_STATUS_TEMP,
		.func[11] = PMBUS_HAVE_TEMP | PMBUS_HAVE_STATUS_TEMP,
		.func[12] = PMBUS_HAVE_TEMP | PMBUS_HAVE_STATUS_TEMP,
		.func[13] = PMBUS_HAVE_TEMP | PMBUS_HAVE_STATUS_TEMP,
		.read_byte_data = max3.4.1_read_byte_data,
		.read_word_data = max3.4.1_read_word_data,
		.write_word_data = max3.4.1_write_word_data,
	},
	[max34441] = {
		.pages = 12,
		.format[PSC_VOLTAGE_IN] = direct,
		.format[PSC_VOLTAGE_OUT] = direct,
		.format[PSC_TEMPERATURE] = direct,
		.format[PSC_CURRENT_OUT] = direct,
		.format[PSC_FAN] = direct,
		.m[PSC_VOLTAGE_IN] = 1,
		.b[PSC_VOLTAGE_IN] = 0,
		.R[PSC_VOLTAGE_IN] = 3,
		.m[PSC_VOLTAGE_OUT] = 1,
		.b[PSC_VOLTAGE_OUT] = 0,
		.R[PSC_VOLTAGE_OUT] = 3,
		.m[PSC_CURRENT_OUT] = 1,
		.b[PSC_CURRENT_OUT] = 0,
		.R[PSC_CURRENT_OUT] = 3,
		.m[PSC_TEMPERATURE] = 1,
		.b[PSC_TEMPERATURE] = 0,
		.R[PSC_TEMPERATURE] = 2,
		.m[PSC_FAN] = 1,
		.b[PSC_FAN] = 0,
		.R[PSC_FAN] = 0,
		.func[0] = PMBUS_HAVE_VOUT | PMBUS_HAVE_STATUS_VOUT
		  | PMBUS_HAVE_IOUT | PMBUS_HAVE_STATUS_IOUT,
		.func[1] = PMBUS_HAVE_VOUT | PMBUS_HAVE_STATUS_VOUT
		  | PMBUS_HAVE_IOUT | PMBUS_HAVE_STATUS_IOUT,
		.func[2] = PMBUS_HAVE_VOUT | PMBUS_HAVE_STATUS_VOUT
		  | PMBUS_HAVE_IOUT | PMBUS_HAVE_STATUS_IOUT,
		.func[3] = PMBUS_HAVE_VOUT | PMBUS_HAVE_STATUS_VOUT
		  | PMBUS_HAVE_IOUT | PMBUS_HAVE_STATUS_IOUT,
		.func[4] = PMBUS_HAVE_VOUT | PMBUS_HAVE_STATUS_VOUT
		  | PMBUS_HAVE_IOUT | PMBUS_HAVE_STATUS_IOUT,
		.func[5] = PMBUS_HAVE_FAN12 | PMBUS_HAVE_STATUS_FAN12,
		.func[6] = PMBUS_HAVE_TEMP | PMBUS_HAVE_STATUS_TEMP,
		.func[7] = PMBUS_HAVE_TEMP | PMBUS_HAVE_STATUS_TEMP,
		.func[8] = PMBUS_HAVE_TEMP | PMBUS_HAVE_STATUS_TEMP,
		.func[9] = PMBUS_HAVE_TEMP | PMBUS_HAVE_STATUS_TEMP,
		.func[10] = PMBUS_HAVE_TEMP | PMBUS_HAVE_STATUS_TEMP,
		.func[11] = PMBUS_HAVE_TEMP | PMBUS_HAVE_STATUS_TEMP,
		.read_byte_data = max3.4.1_read_byte_data,
		.read_word_data = max3.4.1_read_word_data,
		.write_word_data = max3.4.1_write_word_data,
	},
	[max34446] = {
		.pages = 7,
		.format[PSC_VOLTAGE_IN] = direct,
		.format[PSC_VOLTAGE_OUT] = direct,
		.format[PSC_TEMPERATURE] = direct,
		.format[PSC_CURRENT_OUT] = direct,
		.format[PSC_POWER] = direct,
		.m[PSC_VOLTAGE_IN] = 1,
		.b[PSC_VOLTAGE_IN] = 0,
		.R[PSC_VOLTAGE_IN] = 3,
		.m[PSC_VOLTAGE_OUT] = 1,
		.b[PSC_VOLTAGE_OUT] = 0,
		.R[PSC_VOLTAGE_OUT] = 3,
		.m[PSC_CURRENT_OUT] = 1,
		.b[PSC_CURRENT_OUT] = 0,
		.R[PSC_CURRENT_OUT] = 3,
		.m[PSC_POWER] = 1,
		.b[PSC_POWER] = 0,
		.R[PSC_POWER] = 3,
		.m[PSC_TEMPERATURE] = 1,
		.b[PSC_TEMPERATURE] = 0,
		.R[PSC_TEMPERATURE] = 2,
		.func[0] = PMBUS_HAVE_VOUT | PMBUS_HAVE_STATUS_VOUT
		  | PMBUS_HAVE_IOUT | PMBUS_HAVE_STATUS_IOUT | PMBUS_HAVE_POUT,
		.func[1] = PMBUS_HAVE_VOUT | PMBUS_HAVE_STATUS_VOUT
		  | PMBUS_HAVE_IOUT | PMBUS_HAVE_STATUS_IOUT,
		.func[2] = PMBUS_HAVE_VOUT | PMBUS_HAVE_STATUS_VOUT
		  | PMBUS_HAVE_IOUT | PMBUS_HAVE_STATUS_IOUT | PMBUS_HAVE_POUT,
		.func[3] = PMBUS_HAVE_VOUT | PMBUS_HAVE_STATUS_VOUT
		  | PMBUS_HAVE_IOUT | PMBUS_HAVE_STATUS_IOUT,
		.func[4] = PMBUS_HAVE_TEMP | PMBUS_HAVE_STATUS_TEMP,
		.func[5] = PMBUS_HAVE_TEMP | PMBUS_HAVE_STATUS_TEMP,
		.func[6] = PMBUS_HAVE_TEMP | PMBUS_HAVE_STATUS_TEMP,
		.read_byte_data = max3.4.1_read_byte_data,
		.read_word_data = max3.4.1_read_word_data,
		.write_word_data = max3.4.1_write_word_data,
	},
};

static int max3.4.1_probe(struct i2c_client *client,
			  const struct i2c_device_id *id)
{
	struct max3.4.1_data *data;

	data = devm_kzalloc(&client->dev, sizeof(struct max3.4.1_data),
			    GFP_KERNEL);
	if (!data)
		return -ENOMEM;
	data->id = id->driver_data;
	data->info = max3.4.1_info[id->driver_data];

	return pmbus_do_probe(client, id, &data->info);
}

static const struct i2c_device_id max3.4.1_id[] = {
	{"max3.4.1", max3.4.1},
	{"max34441", max34441},
	{"max34446", max34446},
	{}
};
MODULE_DEVICE_TABLE(i2c, max3.4.1_id);

/* This is the driver that will be inserted */
static struct i2c_driver max3.4.1_driver = {
	.driver = {
		   .name = "max3.4.1",
		   },
	.probe = max3.4.1_probe,
	.remove = pmbus_do_remove,
	.id_table = max3.4.1_id,
};

module_i2c_driver(max3.4.1_driver);

MODULE_AUTHOR("Guenter Roeck");
MODULE_DESCRIPTION("PMBus driver for Maxim MAX3.4.1/MAX34441");
MODULE_LICENSE("GPL");
