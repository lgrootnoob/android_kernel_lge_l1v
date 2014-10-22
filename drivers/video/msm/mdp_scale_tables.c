/* drivers/video/msm_fb/mdp_scale_tables.c
 *
 * Copyright (C) 2007 QUALCOMM Incorporated
 * Copyright (C) 2007 Google Incorporated
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include "mdp_scale_tables.h"
#include "mdp_hw.h"

struct mdp_table_entry mdp_upscale_table[] = {
	{ 0x5fffc, 0x0 },
	{ 0x50200, 0x7fc00000 },
	{ 0x5fffc, 0xff80000d },
	{ 0x50204, 0x7ec003f9 },
	{ 0x5fffc, 0xfec0001c },
	{ 0x50208, 0x7d4003f3 },
	{ 0x5fffc, 0xfe40002b },
	{ 0x5020c, 0x7b8003ed },
	{ 0x5fffc, 0xfd80003c },
	{ 0x50210, 0x794003e8 },
	{ 0x5fffc, 0xfcc0004d },
	{ 0x50214, 0x76c003e4 },
	{ 0x5fffc, 0xfc40005f },
	{ 0x50218, 0x73c003e0 },
	{ 0x5fffc, 0xfb800071 },
	{ 0x5021c, 0x708003de },
	{ 0x5fffc, 0xfac00085 },
	{ 0x50220, 0x6d0003db },
	{ 0x5fffc, 0xfa000098 },
	{ 0x50224, 0x698003d9 },
	{ 0x5fffc, 0xf98000ac },
	{ 0x50228, 0x654003d8 },
	{ 0x5fffc, 0xf8c000c1 },
	{ 0x5022c, 0x610003d7 },
	{ 0x5fffc, 0xf84000d5 },
	{ 0x50230, 0x5c8003d7 },
	{ 0x5fffc, 0xf7c000e9 },
	{ 0x50234, 0x580003d7 },
	{ 0x5fffc, 0xf74000fd },
	{ 0x50238, 0x534003d8 },
	{ 0x5fffc, 0xf6c00112 },
	{ 0x5023c, 0x4e8003d8 },
	{ 0x5fffc, 0xf6800126 },
	{ 0x50240, 0x494003da },
	{ 0x5fffc, 0xf600013a },
	{ 0x50244, 0x448003db },
	{ 0x5fffc, 0xf600014d },
	{ 0x50248, 0x3.4.13dd },
	{ 0x5fffc, 0xf5c00160 },
	{ 0x5024c, 0x3.4.13df },
	{ 0x5fffc, 0xf5c00172 },
	{ 0x50250, 0x3.4.13e1 },
	{ 0x5fffc, 0xf5c00184 },
	{ 0x50254, 0x3.4.13e3 },
	{ 0x5fffc, 0xf6000195 },
	{ 0x50258, 0x2b0003e6 },
	{ 0x5fffc, 0xf64001a6 },
	{ 0x5025c, 0x260003e8 },
	{ 0x5fffc, 0xf6c001b4 },
	{ 0x50260, 0x214003eb },
	{ 0x5fffc, 0xf78001c2 },
	{ 0x50264, 0x1c4003ee },
	{ 0x5fffc, 0xf80001cf },
	{ 0x50268, 0x17c003f1 },
	{ 0x5fffc, 0xf90001db },
	{ 0x5026c, 0x134003f3 },
	{ 0x5fffc, 0xfa0001e5 },
	{ 0x50270, 0xf0003f6 },
	{ 0x5fffc, 0xfb4001ee },
	{ 0x50274, 0xac003f9 },
	{ 0x5fffc, 0xfcc001f5 },
	{ 0x50278, 0x70003fb },
	{ 0x5fffc, 0xfe4001fb },
	{ 0x5027c, 0x34003fe },
};

static struct mdp_table_entry mdp_downscale_x_table_PT2TOPT4[] = {
	{ 0x5fffc, 0x740008c },
	{ 0x50280, 0x33800088 },
	{ 0x5fffc, 0x800008e },
	{ 0x50284, 0x3.4.1084 },
	{ 0x5fffc, 0x8400092 },
	{ 0x50288, 0x33000080 },
	{ 0x5fffc, 0x9000094 },
	{ 0x5028c, 0x3300007b },
	{ 0x5fffc, 0x9c00098 },
	{ 0x50290, 0x3.4.1077 },
	{ 0x5fffc, 0xa40009b },
	{ 0x50294, 0x32000073 },
	{ 0x5fffc, 0xb00009d },
	{ 0x50298,  0x31c0006f },
	{ 0x5fffc,  0xbc000a0 },
	{ 0x5029c,  0x3.4.106b },
	{ 0x5fffc,  0xc8000a2 },
	{ 0x502a0,  0x31000067 },
	{ 0x5fffc,  0xd8000a5 },
	{ 0x502a4,  0x30800062 },
	{ 0x5fffc,  0xe4000a8 },
	{ 0x502a8,  0x2fc0005f },
	{ 0x5fffc,  0xec000aa },
	{ 0x502ac,  0x2fc0005b },
	{ 0x5fffc,  0xf8000ad },
	{ 0x502b0,  0x2f400057 },
	{ 0x5fffc,  0x108000b0 },
	{ 0x502b4,  0x2e400054 },
	{ 0x5fffc,  0x114000b2 },
	{ 0x502b8,  0x2e000050 },
	{ 0x5fffc,  0x124000b4 },
	{ 0x502bc,  0x2d80004c },
	{ 0x5fffc,  0x130000b6 },
	{ 0x502c0,  0x2d000049 },
	{ 0x5fffc,  0x140000b8 },
	{ 0x502c4,  0x2c800045 },
	{ 0x5fffc,  0x150000b9 },
	{ 0x502c8,  0x2c000042 },
	{ 0x5fffc,  0x15c000bd },
	{ 0x502cc,  0x2b40003e },
	{ 0x5fffc,  0x16c000bf },
	{ 0x502d0,  0x2a80003b },
	{ 0x5fffc,  0x17c000bf },
	{ 0x502d4,  0x2a000039 },
	{ 0x5fffc,  0x188000c2 },
	{ 0x502d8,  0x29400036 },
	{ 0x5fffc,  0x19c000c4 },
	{ 0x502dc,  0x28800032 },
	{ 0x5fffc,  0x1ac000c5 },
	{ 0x502e0,  0x2800002f },
	{ 0x5fffc,  0x1bc000c7 },
	{ 0x502e4,  0x2740002c },
	{ 0x5fffc,  0x1cc000c8 },
	{ 0x502e8,  0x26c00029 },
	{ 0x5fffc,  0x1dc000c9 },
	{ 0x502ec,  0x26000027 },
	{ 0x5fffc,  0x1ec000cc },
	{ 0x502f0,  0x25000024 },
	{ 0x5fffc,  0x200000cc },
	{ 0x502f4,  0x24800021 },
	{ 0x5fffc,  0x210000cd },
	{ 0x502f8,  0x23800020 },
	{ 0x5fffc,  0x220000ce },
	{ 0x502fc,  0x2300001d },
};

static struct mdp_table_entry mdp_downscale_x_table_PT4TOPT6[] = {
	{ 0x5fffc,  0x740008c },
	{ 0x50280,  0x33800088 },
	{ 0x5fffc,  0x800008e },
	{ 0x50284,  0x3.4.1084 },
	{ 0x5fffc,  0x8400092 },
	{ 0x50288,  0x33000080 },
	{ 0x5fffc,  0x9000094 },
	{ 0x5028c,  0x3300007b },
	{ 0x5fffc,  0x9c00098 },
	{ 0x50290,  0x3.4.1077 },
	{ 0x5fffc,  0xa40009b },
	{ 0x50294,  0x32000073 },
	{ 0x5fffc,  0xb00009d },
	{ 0x50298,  0x31c0006f },
	{ 0x5fffc,  0xbc000a0 },
	{ 0x5029c,  0x3.4.106b },
	{ 0x5fffc,  0xc8000a2 },
	{ 0x502a0,  0x31000067 },
	{ 0x5fffc,  0xd8000a5 },
	{ 0x502a4,  0x30800062 },
	{ 0x5fffc,  0xe4000a8 },
	{ 0x502a8,  0x2fc0005f },
	{ 0x5fffc,  0xec000aa },
	{ 0x502ac,  0x2fc0005b },
	{ 0x5fffc,  0xf8000ad },
	{ 0x502b0,  0x2f400057 },
	{ 0x5fffc,  0x108000b0 },
	{ 0x502b4,  0x2e400054 },
	{ 0x5fffc,  0x114000b2 },
	{ 0x502b8,  0x2e000050 },
	{ 0x5fffc,  0x124000b4 },
	{ 0x502bc,  0x2d80004c },
	{ 0x5fffc,  0x130000b6 },
	{ 0x502c0,  0x2d000049 },
	{ 0x5fffc,  0x140000b8 },
	{ 0x502c4,  0x2c800045 },
	{ 0x5fffc,  0x150000b9 },
	{ 0x502c8,  0x2c000042 },
	{ 0x5fffc,  0x15c000bd },
	{ 0x502cc,  0x2b40003e },
	{ 0x5fffc,  0x16c000bf },
	{ 0x502d0,  0x2a80003b },
	{ 0x5fffc,  0x17c000bf },
	{ 0x502d4,  0x2a000039 },
	{ 0x5fffc,  0x188000c2 },
	{ 0x502d8,  0x29400036 },
	{ 0x5fffc,  0x19c000c4 },
	{ 0x502dc,  0x28800032 },
	{ 0x5fffc,  0x1ac000c5 },
	{ 0x502e0,  0x2800002f },
	{ 0x5fffc,  0x1bc000c7 },
	{ 0x502e4,  0x2740002c },
	{ 0x5fffc,  0x1cc000c8 },
	{ 0x502e8,  0x26c00029 },
	{ 0x5fffc,  0x1dc000c9 },
	{ 0x502ec,  0x26000027 },
	{ 0x5fffc,  0x1ec000cc },
	{ 0x502f0,  0x25000024 },
	{ 0x5fffc,  0x200000cc },
	{ 0x502f4,  0x24800021 },
	{ 0x5fffc,  0x210000cd },
	{ 0x502f8,  0x23800020 },
	{ 0x5fffc,  0x220000ce },
	{ 0x502fc,  0x2300001d },
};

static struct mdp_table_entry mdp_downscale_x_table_PT6TOPT8[] = {
	{ 0x5fffc,  0xfe000070 },
	{ 0x50280,  0x4bc00068 },
	{ 0x5fffc,  0xfe000078 },
	{ 0x50284,  0x4bc00060 },
	{ 0x5fffc,  0xfe000080 },
	{ 0x50288,  0x4b800059 },
	{ 0x5fffc,  0xfe000089 },
	{ 0x5028c,  0x4b000052 },
	{ 0x5fffc,  0xfe400091 },
	{ 0x50290,  0x4a80004b },
	{ 0x5fffc,  0xfe40009a },
	{ 0x50294,  0x4a000044 },
	{ 0x5fffc,  0xfe8000a3 },
	{ 0x50298,  0x4940003d },
	{ 0x5fffc,  0xfec000ac },
	{ 0x5029c,  0x48400037 },
	{ 0x5fffc,  0xff0000b4 },
	{ 0x502a0,  0x47800031 },
	{ 0x5fffc,  0xff8000bd },
	{ 0x502a4,  0x4640002b },
	{ 0x5fffc,  0xc5 },
	{ 0x502a8,  0x45000026 },
	{ 0x5fffc,  0x8000ce },
	{ 0x502ac,  0x43800021 },
	{ 0x5fffc,  0x10000d6 },
	{ 0x502b0,  0x4240001c },
	{ 0x5fffc,  0x18000df },
	{ 0x502b4,  0x40800018 },
	{ 0x5fffc,  0x24000e6 },
	{ 0x502b8,  0x3f000014 },
	{ 0x5fffc,  0x30000ee },
	{ 0x502bc,  0x3.4.1010 },
	{ 0x5fffc,  0x40000f5 },
	{ 0x502c0,  0x3b80000c },
	{ 0x5fffc,  0x50000fc },
	{ 0x502c4,  0x39800009 },
	{ 0x5fffc,  0x6000102 },
	{ 0x502c8,  0x37c00006 },
	{ 0x5fffc,  0x7000109 },
	{ 0x502cc,  0x35800004 },
	{ 0x5fffc,  0x840010e },
	{ 0x502d0,  0x33800002 },
	{ 0x5fffc,  0x9800114 },
	{ 0x502d4,  0x3.4.1000 },
	{ 0x5fffc,  0xac00119 },
	{ 0x502d8,  0x2f4003fe },
	{ 0x5fffc,  0xc40011e },
	{ 0x502dc,  0x2d0003fc },
	{ 0x5fffc,  0xdc00121 },
	{ 0x502e0,  0x2b0003fb },
	{ 0x5fffc,  0xf400125 },
	{ 0x502e4,  0x28c003fa },
	{ 0x5fffc,  0x11000128 },
	{ 0x502e8,  0x268003f9 },
	{ 0x5fffc,  0x12c0012a },
	{ 0x502ec,  0x244003f9 },
	{ 0x5fffc,  0x1480012c },
	{ 0x502f0,  0x224003f8 },
	{ 0x5fffc,  0x1640012e },
	{ 0x502f4,  0x200003f8 },
	{ 0x5fffc,  0x1800012f },
	{ 0x502f8,  0x1e0003f8 },
	{ 0x5fffc,  0x1a00012f },
	{ 0x502fc,  0x1c0003f8 },
};

static struct mdp_table_entry mdp_downscale_x_table_PT8TO1[] = {
	{ 0x5fffc,  0x0 },
	{ 0x50280,  0x7fc00000 },
	{ 0x5fffc,  0xff80000d },
	{ 0x50284,  0x7ec003f9 },
	{ 0x5fffc,  0xfec0001c },
	{ 0x50288,  0x7d4003f3 },
	{ 0x5fffc,  0xfe40002b },
	{ 0x5028c,  0x7b8003ed },
	{ 0x5fffc,  0xfd80003c },
	{ 0x50290,  0x794003e8 },
	{ 0x5fffc,  0xfcc0004d },
	{ 0x50294,  0x76c003e4 },
	{ 0x5fffc,  0xfc40005f },
	{ 0x50298,  0x73c003e0 },
	{ 0x5fffc,  0xfb800071 },
	{ 0x5029c,  0x708003de },
	{ 0x5fffc,  0xfac00085 },
	{ 0x502a0,  0x6d0003db },
	{ 0x5fffc,  0xfa000098 },
	{ 0x502a4,  0x698003d9 },
	{ 0x5fffc,  0xf98000ac },
	{ 0x502a8,  0x654003d8 },
	{ 0x5fffc,  0xf8c000c1 },
	{ 0x502ac,  0x610003d7 },
	{ 0x5fffc,  0xf84000d5 },
	{ 0x502b0,  0x5c8003d7 },
	{ 0x5fffc,  0xf7c000e9 },
	{ 0x502b4,  0x580003d7 },
	{ 0x5fffc,  0xf74000fd },
	{ 0x502b8,  0x534003d8 },
	{ 0x5fffc,  0xf6c00112 },
	{ 0x502bc,  0x4e8003d8 },
	{ 0x5fffc,  0xf6800126 },
	{ 0x502c0,  0x494003da },
	{ 0x5fffc,  0xf600013a },
	{ 0x502c4,  0x448003db },
	{ 0x5fffc,  0xf600014d },
	{ 0x502c8,  0x3.4.13dd },
	{ 0x5fffc,  0xf5c00160 },
	{ 0x502cc,  0x3.4.13df },
	{ 0x5fffc,  0xf5c00172 },
	{ 0x502d0,  0x3.4.13e1 },
	{ 0x5fffc,  0xf5c00184 },
	{ 0x502d4,  0x3.4.13e3 },
	{ 0x5fffc,  0xf6000195 },
	{ 0x502d8,  0x2b0003e6 },
	{ 0x5fffc,  0xf64001a6 },
	{ 0x502dc,  0x260003e8 },
	{ 0x5fffc,  0xf6c001b4 },
	{ 0x502e0,  0x214003eb },
	{ 0x5fffc,  0xf78001c2 },
	{ 0x502e4,  0x1c4003ee },
	{ 0x5fffc,  0xf80001cf },
	{ 0x502e8,  0x17c003f1 },
	{ 0x5fffc,  0xf90001db },
	{ 0x502ec,  0x134003f3 },
	{ 0x5fffc,  0xfa0001e5 },
	{ 0x502f0,  0xf0003f6 },
	{ 0x5fffc,  0xfb4001ee },
	{ 0x502f4,  0xac003f9 },
	{ 0x5fffc,  0xfcc001f5 },
	{ 0x502f8,  0x70003fb },
	{ 0x5fffc,  0xfe4001fb },
	{ 0x502fc,  0x34003fe },
};

struct mdp_table_entry *mdp_downscale_x_table[MDP_DOWNSCALE_MAX] = {
	[MDP_DOWNSCALE_PT2TOPT4] = mdp_downscale_x_table_PT2TOPT4,
	[MDP_DOWNSCALE_PT4TOPT6] = mdp_downscale_x_table_PT4TOPT6,
	[MDP_DOWNSCALE_PT6TOPT8] = mdp_downscale_x_table_PT6TOPT8,
	[MDP_DOWNSCALE_PT8TO1]  = mdp_downscale_x_table_PT8TO1,
};

static struct mdp_table_entry mdp_downscale_y_table_PT2TOPT4[] = {
	{ 0x5fffc,  0x740008c },
	{ 0x50300,  0x33800088 },
	{ 0x5fffc,  0x800008e },
	{ 0x50304,  0x3.4.1084 },
	{ 0x5fffc,  0x8400092 },
	{ 0x50308,  0x33000080 },
	{ 0x5fffc,  0x9000094 },
	{ 0x5030c,  0x3300007b },
	{ 0x5fffc,  0x9c00098 },
	{ 0x50310,  0x3.4.1077 },
	{ 0x5fffc,  0xa40009b },
	{ 0x50314,  0x32000073 },
	{ 0x5fffc,  0xb00009d },
	{ 0x50318,  0x31c0006f },
	{ 0x5fffc,  0xbc000a0 },
	{ 0x5031c,  0x3.4.106b },
	{ 0x5fffc,  0xc8000a2 },
	{ 0x50320,  0x31000067 },
	{ 0x5fffc,  0xd8000a5 },
	{ 0x50324,  0x30800062 },
	{ 0x5fffc,  0xe4000a8 },
	{ 0x50328,  0x2fc0005f },
	{ 0x5fffc,  0xec000aa },
	{ 0x5032c,  0x2fc0005b },
	{ 0x5fffc,  0xf8000ad },
	{ 0x50330,  0x2f400057 },
	{ 0x5fffc,  0x108000b0 },
	{ 0x50334,  0x2e400054 },
	{ 0x5fffc,  0x114000b2 },
	{ 0x50338,  0x2e000050 },
	{ 0x5fffc,  0x124000b4 },
	{ 0x5033c,  0x2d80004c },
	{ 0x5fffc,  0x130000b6 },
	{ 0x50340,  0x2d000049 },
	{ 0x5fffc,  0x140000b8 },
	{ 0x50344,  0x2c800045 },
	{ 0x5fffc,  0x150000b9 },
	{ 0x50348,  0x2c000042 },
	{ 0x5fffc,  0x15c000bd },
	{ 0x5034c,  0x2b40003e },
	{ 0x5fffc,  0x16c000bf },
	{ 0x50350,  0x2a80003b },
	{ 0x5fffc,  0x17c000bf },
	{ 0x50354,  0x2a000039 },
	{ 0x5fffc,  0x188000c2 },
	{ 0x50358,  0x29400036 },
	{ 0x5fffc,  0x19c000c4 },
	{ 0x5035c,  0x28800032 },
	{ 0x5fffc,  0x1ac000c5 },
	{ 0x50360,  0x2800002f },
	{ 0x5fffc,  0x1bc000c7 },
	{ 0x50364,  0x2740002c },
	{ 0x5fffc,  0x1cc000c8 },
	{ 0x50368,  0x26c00029 },
	{ 0x5fffc,  0x1dc000c9 },
	{ 0x5036c,  0x26000027 },
	{ 0x5fffc,  0x1ec000cc },
	{ 0x50370,  0x25000024 },
	{ 0x5fffc,  0x200000cc },
	{ 0x50374,  0x24800021 },
	{ 0x5fffc,  0x210000cd },
	{ 0x50378,  0x23800020 },
	{ 0x5fffc,  0x220000ce },
	{ 0x5037c,  0x2300001d },
};

static struct mdp_table_entry mdp_downscale_y_table_PT4TOPT6[] = {
	{ 0x5fffc,  0x740008c },
	{ 0x50300,  0x33800088 },
	{ 0x5fffc,  0x800008e },
	{ 0x50304,  0x3.4.1084 },
	{ 0x5fffc,  0x8400092 },
	{ 0x50308,  0x33000080 },
	{ 0x5fffc,  0x9000094 },
	{ 0x5030c,  0x3300007b },
	{ 0x5fffc,  0x9c00098 },
	{ 0x50310,  0x3.4.1077 },
	{ 0x5fffc,  0xa40009b },
	{ 0x50314,  0x32000073 },
	{ 0x5fffc,  0xb00009d },
	{ 0x50318,  0x31c0006f },
	{ 0x5fffc,  0xbc000a0 },
	{ 0x5031c,  0x3.4.106b },
	{ 0x5fffc,  0xc8000a2 },
	{ 0x50320,  0x31000067 },
	{ 0x5fffc,  0xd8000a5 },
	{ 0x50324,  0x30800062 },
	{ 0x5fffc,  0xe4000a8 },
	{ 0x50328,  0x2fc0005f },
	{ 0x5fffc,  0xec000aa },
	{ 0x5032c,  0x2fc0005b },
	{ 0x5fffc,  0xf8000ad },
	{ 0x50330,  0x2f400057 },
	{ 0x5fffc,  0x108000b0 },
	{ 0x50334,  0x2e400054 },
	{ 0x5fffc,  0x114000b2 },
	{ 0x50338,  0x2e000050 },
	{ 0x5fffc,  0x124000b4 },
	{ 0x5033c,  0x2d80004c },
	{ 0x5fffc,  0x130000b6 },
	{ 0x50340,  0x2d000049 },
	{ 0x5fffc,  0x140000b8 },
	{ 0x50344,  0x2c800045 },
	{ 0x5fffc,  0x150000b9 },
	{ 0x50348,  0x2c000042 },
	{ 0x5fffc,  0x15c000bd },
	{ 0x5034c,  0x2b40003e },
	{ 0x5fffc,  0x16c000bf },
	{ 0x50350,  0x2a80003b },
	{ 0x5fffc,  0x17c000bf },
	{ 0x50354,  0x2a000039 },
	{ 0x5fffc,  0x188000c2 },
	{ 0x50358,  0x29400036 },
	{ 0x5fffc,  0x19c000c4 },
	{ 0x5035c,  0x28800032 },
	{ 0x5fffc,  0x1ac000c5 },
	{ 0x50360,  0x2800002f },
	{ 0x5fffc,  0x1bc000c7 },
	{ 0x50364,  0x2740002c },
	{ 0x5fffc,  0x1cc000c8 },
	{ 0x50368,  0x26c00029 },
	{ 0x5fffc,  0x1dc000c9 },
	{ 0x5036c,  0x26000027 },
	{ 0x5fffc,  0x1ec000cc },
	{ 0x50370,  0x25000024 },
	{ 0x5fffc,  0x200000cc },
	{ 0x50374,  0x24800021 },
	{ 0x5fffc,  0x210000cd },
	{ 0x50378,  0x23800020 },
	{ 0x5fffc,  0x220000ce },
	{ 0x5037c,  0x2300001d },
};

static struct mdp_table_entry mdp_downscale_y_table_PT6TOPT8[] = {
	{ 0x5fffc,  0xfe000070 },
	{ 0x50300,  0x4bc00068 },
	{ 0x5fffc,  0xfe000078 },
	{ 0x50304,  0x4bc00060 },
	{ 0x5fffc,  0xfe000080 },
	{ 0x50308,  0x4b800059 },
	{ 0x5fffc,  0xfe000089 },
	{ 0x5030c,  0x4b000052 },
	{ 0x5fffc,  0xfe400091 },
	{ 0x50310,  0x4a80004b },
	{ 0x5fffc,  0xfe40009a },
	{ 0x50314,  0x4a000044 },
	{ 0x5fffc,  0xfe8000a3 },
	{ 0x50318,  0x4940003d },
	{ 0x5fffc,  0xfec000ac },
	{ 0x5031c,  0x48400037 },
	{ 0x5fffc,  0xff0000b4 },
	{ 0x50320,  0x47800031 },
	{ 0x5fffc,  0xff8000bd },
	{ 0x50324,  0x4640002b },
	{ 0x5fffc,  0xc5 },
	{ 0x50328,  0x45000026 },
	{ 0x5fffc,  0x8000ce },
	{ 0x5032c,  0x43800021 },
	{ 0x5fffc,  0x10000d6 },
	{ 0x50330,  0x4240001c },
	{ 0x5fffc,  0x18000df },
	{ 0x50334,  0x40800018 },
	{ 0x5fffc,  0x24000e6 },
	{ 0x50338,  0x3f000014 },
	{ 0x5fffc,  0x30000ee },
	{ 0x5033c,  0x3.4.1010 },
	{ 0x5fffc,  0x40000f5 },
	{ 0x50340,  0x3b80000c },
	{ 0x5fffc,  0x50000fc },
	{ 0x50344,  0x39800009 },
	{ 0x5fffc,  0x6000102 },
	{ 0x50348,  0x37c00006 },
	{ 0x5fffc,  0x7000109 },
	{ 0x5034c,  0x35800004 },
	{ 0x5fffc,  0x840010e },
	{ 0x50350,  0x33800002 },
	{ 0x5fffc,  0x9800114 },
	{ 0x50354,  0x3.4.1000 },
	{ 0x5fffc,  0xac00119 },
	{ 0x50358,  0x2f4003fe },
	{ 0x5fffc,  0xc40011e },
	{ 0x5035c,  0x2d0003fc },
	{ 0x5fffc,  0xdc00121 },
	{ 0x50360,  0x2b0003fb },
	{ 0x5fffc,  0xf400125 },
	{ 0x50364,  0x28c003fa },
	{ 0x5fffc,  0x11000128 },
	{ 0x50368,  0x268003f9 },
	{ 0x5fffc,  0x12c0012a },
	{ 0x5036c,  0x244003f9 },
	{ 0x5fffc,  0x1480012c },
	{ 0x50370,  0x224003f8 },
	{ 0x5fffc,  0x1640012e },
	{ 0x50374,  0x200003f8 },
	{ 0x5fffc,  0x1800012f },
	{ 0x50378,  0x1e0003f8 },
	{ 0x5fffc,  0x1a00012f },
	{ 0x5037c,  0x1c0003f8 },
};

static struct mdp_table_entry mdp_downscale_y_table_PT8TO1[] = {
	{ 0x5fffc,  0x0 },
	{ 0x50300,  0x7fc00000 },
	{ 0x5fffc,  0xff80000d },
	{ 0x50304,  0x7ec003f9 },
	{ 0x5fffc,  0xfec0001c },
	{ 0x50308,  0x7d4003f3 },
	{ 0x5fffc,  0xfe40002b },
	{ 0x5030c,  0x7b8003ed },
	{ 0x5fffc,  0xfd80003c },
	{ 0x50310,  0x794003e8 },
	{ 0x5fffc,  0xfcc0004d },
	{ 0x50314,  0x76c003e4 },
	{ 0x5fffc,  0xfc40005f },
	{ 0x50318,  0x73c003e0 },
	{ 0x5fffc,  0xfb800071 },
	{ 0x5031c,  0x708003de },
	{ 0x5fffc,  0xfac00085 },
	{ 0x50320,  0x6d0003db },
	{ 0x5fffc,  0xfa000098 },
	{ 0x50324,  0x698003d9 },
	{ 0x5fffc,  0xf98000ac },
	{ 0x50328,  0x654003d8 },
	{ 0x5fffc,  0xf8c000c1 },
	{ 0x5032c,  0x610003d7 },
	{ 0x5fffc,  0xf84000d5 },
	{ 0x50330,  0x5c8003d7 },
	{ 0x5fffc,  0xf7c000e9 },
	{ 0x50334,  0x580003d7 },
	{ 0x5fffc,  0xf74000fd },
	{ 0x50338,  0x534003d8 },
	{ 0x5fffc,  0xf6c00112 },
	{ 0x5033c,  0x4e8003d8 },
	{ 0x5fffc,  0xf6800126 },
	{ 0x50340,  0x494003da },
	{ 0x5fffc,  0xf600013a },
	{ 0x50344,  0x448003db },
	{ 0x5fffc,  0xf600014d },
	{ 0x50348,  0x3.4.13dd },
	{ 0x5fffc,  0xf5c00160 },
	{ 0x5034c,  0x3.4.13df },
	{ 0x5fffc,  0xf5c00172 },
	{ 0x50350,  0x3.4.13e1 },
	{ 0x5fffc,  0xf5c00184 },
	{ 0x50354,  0x3.4.13e3 },
	{ 0x5fffc,  0xf6000195 },
	{ 0x50358,  0x2b0003e6 },
	{ 0x5fffc,  0xf64001a6 },
	{ 0x5035c,  0x260003e8 },
	{ 0x5fffc,  0xf6c001b4 },
	{ 0x50360,  0x214003eb },
	{ 0x5fffc,  0xf78001c2 },
	{ 0x50364,  0x1c4003ee },
	{ 0x5fffc,  0xf80001cf },
	{ 0x50368,  0x17c003f1 },
	{ 0x5fffc,  0xf90001db },
	{ 0x5036c,  0x134003f3 },
	{ 0x5fffc,  0xfa0001e5 },
	{ 0x50370,  0xf0003f6 },
	{ 0x5fffc,  0xfb4001ee },
	{ 0x50374,  0xac003f9 },
	{ 0x5fffc,  0xfcc001f5 },
	{ 0x50378,  0x70003fb },
	{ 0x5fffc,  0xfe4001fb },
	{ 0x5037c,  0x34003fe },
};

struct mdp_table_entry *mdp_downscale_y_table[MDP_DOWNSCALE_MAX] = {
	[MDP_DOWNSCALE_PT2TOPT4] = mdp_downscale_y_table_PT2TOPT4,
	[MDP_DOWNSCALE_PT4TOPT6] = mdp_downscale_y_table_PT4TOPT6,
	[MDP_DOWNSCALE_PT6TOPT8] = mdp_downscale_y_table_PT6TOPT8,
	[MDP_DOWNSCALE_PT8TO1]  = mdp_downscale_y_table_PT8TO1,
};

struct mdp_table_entry mdp_gaussian_blur_table[] = {
	/* max variance */
	{ 0x5fffc, 0x20000080 },
	{ 0x50280, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x50284, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x50288, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x5028c, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x50290, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x50294, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x50298, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x5029c, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x502a0, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x502a4, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x502a8, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x502ac, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x502b0, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x502b4, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x502b8, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x502bc, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x502c0, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x502c4, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x502c8, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x502cc, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x502d0, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x502d4, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x502d8, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x502dc, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x502e0, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x502e4, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x502e8, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x502ec, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x502f0, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x502f4, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x502f8, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x502fc, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x50300, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x50304, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x50308, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x5030c, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x50310, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x50314, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x50318, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x5031c, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x50320, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x50324, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x50328, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x5032c, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x50330, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x50334, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x50338, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x5033c, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x50340, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x50344, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x50348, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x5034c, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x50350, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x50354, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x50358, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x5035c, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x50360, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x50364, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x50368, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x5036c, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x50370, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x50374, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x50378, 0x20000080 },
	{ 0x5fffc, 0x20000080 },
	{ 0x5037c, 0x20000080 },
};
