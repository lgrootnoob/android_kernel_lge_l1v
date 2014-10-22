/* generated from cwc4630.osp DO NOT MODIFY */

#ifndef __HEADER_cwc4630_H__
#define __HEADER_cwc4630_H__

static struct dsp_symbol_entry cwc4630_symbols[] = {
  { 0x0000, "BEGINADDRESS",0x00 },
  { 0x8000, "EXECCHILD",0x03 },
  { 0x8001, "EXECCHILD_98",0x03 },
  { 0x8003, "EXECCHILD_PUSH1IND",0x03 },
  { 0x8008, "EXECSIBLING",0x03 },
  { 0x800a, "EXECSIBLING_298",0x03 },
  { 0x800b, "EXECSIBLING_2IND1",0x03 },
  { 0x8010, "TIMINGMASTER",0x03 },
  { 0x804f, "S16_CODECINPUTTASK",0x03 },
  { 0x805e, "PCMSERIALINPUTTASK",0x03 },
  { 0x806d, "S16_MIX_TO_OSTREAM",0x03 },
  { 0x809a, "S16_MIX",0x03 },
  { 0x80bb, "S16_UPSRC",0x03 },
  { 0x813b, "MIX3_EXP",0x03 },
  { 0x8164, "DECIMATEBYPOW2",0x03 },
  { 0x8197, "VARIDECIMATE",0x03 },
  { 0x81f2, "_3DINPUTTASK",0x03 },
  { 0x820a, "_3DPRLGCINPTASK",0x03 },
  { 0x8227, "_3DSTEREOINPUTTASK",0x03 },
  { 0x8242, "_3DOUTPUTTASK",0x03 },
  { 0x82c4, "HRTF_MORPH_TASK",0x03 },
  { 0x82c6, "WAIT4DATA",0x03 },
  { 0x82fa, "PROLOGIC",0x03 },
  { 0x8496, "DECORRELATOR",0x03 },
  { 0x84a4, "STEREO2MONO",0x03 },
  { 0x0070, "SPOSCB",0x02 },
  { 0x0107, "TASKTREETHREAD",0x03 },
  { 0x013c, "TASKTREEHEADERCODE",0x03 },
  { 0x0145, "FGTASKTREEHEADERCODE",0x03 },
  { 0x0169, "NULLALGORITHM",0x03 },
  { 0x016d, "HFGEXECCHILD",0x03 },
  { 0x016e, "HFGEXECCHILD_98",0x03 },
  { 0x0170, "HFGEXECCHILD_PUSH1IND",0x03 },
  { 0x0173, "HFGEXECSIBLING",0x03 },
  { 0x0175, "HFGEXECSIBLING_298",0x03 },
  { 0x0176, "HFGEXECSIBLING_2IND1",0x03 },
  { 0x0179, "S16_CODECOUTPUTTASK",0x03 },
  { 0x0194, "#CODE_END",0x00 },
}; /* cwc4630 symbols */

static u32 cwc4630_code[] = {
/* BEGINADDRESS */
/* 0000 */ 0x00040730,0x00001002,0x000f619e,0x00001003,
/* 0002 */ 0x00001705,0x00001400,0x000a411e,0x00001003,
/* 0004 */ 0x00040730,0x00001002,0x000f619e,0x00001003,
/* 0006 */ 0x00009705,0x00001400,0x000a411e,0x00001003,
/* 0008 */ 0x00040730,0x00001002,0x000f619e,0x00001003,
/* 000A */ 0x00011705,0x00001400,0x000a411e,0x00001003,
/* 000C */ 0x00040730,0x00001002,0x000f619e,0x00001003,
/* 000E */ 0x00019705,0x00001400,0x000a411e,0x00001003,
/* 0010 */ 0x00040730,0x00001002,0x000f619e,0x00001003,
/* 0012 */ 0x00021705,0x00001400,0x000a411e,0x00001003,
/* 0014 */ 0x00040730,0x00001002,0x000f619e,0x00001003,
/* 0016 */ 0x00029705,0x00001400,0x000a411e,0x00001003,
/* 0018 */ 0x00040730,0x00001002,0x000f619e,0x00001003,
/* 001A */ 0x00031705,0x00001400,0x000a411e,0x00001003,
/* 001C */ 0x00040730,0x00001002,0x000f619e,0x00001003,
/* 001E */ 0x00039705,0x00001400,0x000a411e,0x00001003,
/* 0020 */ 0x000fe19e,0x00001003,0x0009c730,0x00001003,
/* 0022 */ 0x0008e19c,0x00001003,0x000083c1,0x00093040,
/* 0024 */ 0x00098730,0x00001002,0x000ee19e,0x00001003,
/* 0026 */ 0x00009705,0x00001400,0x000a211e,0x00001003,
/* 0028 */ 0x00098730,0x00001002,0x000ee19e,0x00001003,
/* 002A */ 0x00011705,0x00001400,0x000a211e,0x00001003,
/* 002C */ 0x00098730,0x00001002,0x000ee19e,0x00001003,
/* 002E */ 0x00019705,0x00001400,0x000a211e,0x00001003,
/* 0030 */ 0x00098730,0x00001002,0x000ee19e,0x00001003,
/* 0032 */ 0x00021705,0x00001400,0x000a211e,0x00001003,
/* 0034 */ 0x00098730,0x00001002,0x000ee19e,0x00001003,
/* 0036 */ 0x00029705,0x00001400,0x000a211e,0x00001003,
/* 0038 */ 0x00098730,0x00001002,0x000ee19e,0x00001003,
/* 003A */ 0x00031705,0x00001400,0x000a211e,0x00001003,
/* 003C */ 0x00098730,0x00001002,0x000ee19e,0x00001003,
/* 003E */ 0x00039705,0x00001400,0x000a211e,0x00001003,
/* 0040 */ 0x0001a730,0x00001008,0x000e2730,0x00001002,
/* 0042 */ 0x0000a731,0x00001002,0x0000a731,0x00001002,
/* 0044 */ 0x0000a731,0x00001002,0x0000a731,0x00001002,
/* 0046 */ 0x0000a731,0x00001002,0x0000a731,0x00001002,
/* 0048 */ 0x00000000,0x00000000,0x000f619c,0x00001003,
/* 004A */ 0x0007f801,0x000c0000,0x00000037,0x00001000,
/* 004C */ 0x00000000,0x00000000,0x00000000,0x00000000,
/* 004E */ 0x00000000,0x00000000,0x00000000,0x00000000,
/* 0050 */ 0x00000000,0x000c0000,0x00000000,0x00000000,
/* 0052 */ 0x0000373c,0x00001000,0x00000000,0x00000000,
/* 0054 */ 0x000ee19c,0x00001003,0x0007f801,0x000c0000,
/* 0056 */ 0x00000037,0x00001000,0x00000000,0x00000000,
/* 0058 */ 0x00000000,0x00000000,0x00000000,0x00000000,
/* 005A */ 0x00000000,0x00000000,0x0000273c,0x00001000,
/* 005C */ 0x00000033,0x00001000,0x000e679e,0x00001003,
/* 005E */ 0x00007705,0x00001400,0x000ac71e,0x00001003,
/* 0060 */ 0x00087fc1,0x000c3be0,0x0007f801,0x000c0000,
/* 0062 */ 0x00000037,0x00001000,0x00000000,0x00000000,
/* 0064 */ 0x00000000,0x00000000,0x00000000,0x00000000,
/* 0066 */ 0x00000000,0x00000000,0x0000a730,0x00001003,
/* 0068 */ 0x00000033,0x00001000,0x0007f801,0x000c0000,
/* 006A */ 0x00000037,0x00001000,0x00000000,0x00000000,
/* 006C */ 0x00000000,0x00000000,0x00000000,0x00000000,
/* 006E */ 0x00000000,0x00000000,0x00000000,0x000c0000,
/* 0070 */ 0x00000032,0x00001000,0x0000273d,0x00001000,
/* 0072 */ 0x0004a730,0x00001003,0x00000f41,0x00097140,
/* 0074 */ 0x0000a841,0x0009b240,0x0000a0c1,0x0009f040,
/* 0076 */ 0x0001c641,0x00093540,0x0001cec1,0x0009b5c0,
/* 0078 */ 0x00000000,0x00000000,0x0001bf05,0x0003fc40,
/* 007A */ 0x00002725,0x000aa400,0x00013705,0x00093a00,
/* 007C */ 0x0000002e,0x0009d6c0,0x0002ef8a,0x00000000,
/* 007E */ 0x00040630,0x00001004,0x0004ef0a,0x000eb785,
/* 0080 */ 0x0003fc8a,0x00000000,0x00000000,0x000c70e0,
/* 0082 */ 0x0007d182,0x0002c640,0x00008630,0x00001004,
/* 0084 */ 0x000799b8,0x0002c6c0,0x00031705,0x00092240,
/* 0086 */ 0x00039f05,0x000932c0,0x0003520a,0x00000000,
/* 0088 */ 0x00070731,0x0000100b,0x00010705,0x000b20c0,
/* 008A */ 0x00000000,0x000eba44,0x00032108,0x000c60c4,
/* 008C */ 0x00065208,0x000c2917,0x000486b0,0x00001007,
/* 008E */ 0x00012f05,0x00036880,0x0002818e,0x000c0000,
/* 0090 */ 0x0004410a,0x00000000,0x00048630,0x00001007,
/* 0092 */ 0x00029705,0x000c0000,0x00000000,0x00000000,
/* 0094 */ 0x00003fc1,0x0003fc40,0x000037c1,0x00091b40,
/* 0096 */ 0x00003fc1,0x000911c0,0x000037c1,0x000957c0,
/* 0098 */ 0x00003fc1,0x000951c0,0x000037c1,0x00000000,
/* 009A */ 0x00003fc1,0x000991c0,0x000037c1,0x00000000,
/* 009C */ 0x00003fc1,0x0009d1c0,0x000037c1,0x00000000,
/* 009E */ 0x0001ccc1,0x000915c0,0x0001c441,0x0009d800,
/* 00A0 */ 0x0009cdc1,0x00091240,0x0001c541,0x00091d00,
/* 00A2 */ 0x0009cfc1,0x00095240,0x0001c741,0x00095c80,
/* 00A4 */ 0x000e8ca9,0x00099240,0x000e85ad,0x00095640,
/* 00A6 */ 0x00069ca9,0x00099d80,0x000e952d,0x00099640,
/* 00A8 */ 0x000eaca9,0x0009d6c0,0x000ea5ad,0x00091a40,
/* 00AA */ 0x0006bca9,0x0009de80,0x000eb52d,0x00095a40,
/* 00AC */ 0x000ecca9,0x00099ac0,0x000ec5ad,0x0009da40,
/* 00AE */ 0x000edca9,0x0009d300,0x000a6e0a,0x00001000,
/* 00B0 */ 0x000ed52d,0x00091e40,0x000eeca9,0x00095ec0,
/* 00B2 */ 0x000ee5ad,0x00099e40,0x0006fca9,0x00002500,
/* 00B4 */ 0x000fb208,0x000c59a0,0x000ef52d,0x0009de40,
/* 00B6 */ 0x00068ca9,0x000912c1,0x000683ad,0x00095241,
/* 00B8 */ 0x00020f05,0x000991c1,0x00000000,0x00000000,
/* 00BA */ 0x00086f88,0x00001000,0x0009cf81,0x000b5340,
/* 00BC */ 0x0009c701,0x000b92c0,0x0009de81,0x000bd300,
/* 00BE */ 0x0009d601,0x000b1700,0x0001fd81,0x000b9d80,
/* 00C0 */ 0x0009f501,0x000b57c0,0x000a0f81,0x000bd740,
/* 00C2 */ 0x00020701,0x000b5c80,0x000a1681,0x000b97c0,
/* 00C4 */ 0x00021601,0x00002500,0x000a0701,0x000b9b40,
/* 00C6 */ 0x000a0f81,0x000b1bc0,0x00021681,0x00002d00,
/* 00C8 */ 0x00020f81,0x000bd800,0x000a0701,0x000b5bc0,
/* 00CA */ 0x00021601,0x00003500,0x000a0f81,0x000b5f40,
/* 00CC */ 0x000a0701,0x000bdbc0,0x00021681,0x00003d00,
/* 00CE */ 0x00020f81,0x000b1d00,0x000a0701,0x000b1fc0,
/* 00D0 */ 0x00021601,0x00020500,0x00020f81,0x000b1341,
/* 00D2 */ 0x000a0701,0x000b9fc0,0x00021681,0x00020d00,
/* 00D4 */ 0x00020f81,0x000bde80,0x000a0701,0x000bdfc0,
/* 00D6 */ 0x00021601,0x00021500,0x00020f81,0x000b9341,
/* 00D8 */ 0x00020701,0x000b53c1,0x00021681,0x00021d00,
/* 00DA */ 0x000a0f81,0x000d0380,0x0000b601,0x000b15c0,
/* 00DC */ 0x00007b01,0x00000000,0x00007b81,0x000bd1c0,
/* 00DE */ 0x00007b01,0x00000000,0x00007b81,0x000b91c0,
/* 00E0 */ 0x00007b01,0x000b57c0,0x00007b81,0x000b51c0,
/* 00E2 */ 0x00007b01,0x000b1b40,0x00007b81,0x000b11c0,
/* 00E4 */ 0x00087b01,0x000c3dc0,0x0007e488,0x000d7e45,
/* 00E6 */ 0x00000000,0x000d7a44,0x0007e48a,0x00000000,
/* 00E8 */ 0x00011f05,0x00084080,0x00000000,0x00000000,
/* 00EA */ 0x00001705,0x000b3540,0x00008a01,0x000bf040,
/* 00EC */ 0x00007081,0x000bb5c0,0x00055488,0x00000000,
/* 00EE */ 0x0000d482,0x0003fc40,0x0003fc88,0x00000000,
/* 00F0 */ 0x0001e401,0x000b3a00,0x0001ec81,0x000bd6c0,
/* 00F2 */ 0x0002ef88,0x000e7784,0x00056f08,0x00000000,
/* 00F4 */ 0x000d86b0,0x00001007,0x00008281,0x000bb240,
/* 00F6 */ 0x0000b801,0x000b7140,0x00007888,0x00000000,
/* 00F8 */ 0x0000073c,0x00001000,0x0007f188,0x000c0000,
/* 00FA */ 0x00000000,0x00000000,0x00055288,0x000c555c,
/* 00FC */ 0x0005528a,0x000c0000,0x0009fa88,0x000c5d00,
/* 00FE */ 0x0000fa88,0x00000000,0x00000032,0x00001000,
/* 0100 */ 0x0000073d,0x00001000,0x0007f188,0x000c0000,
/* 0102 */ 0x00000000,0x00000000,0x0008c01c,0x00001003,
/* 0104 */ 0x00002705,0x00001008,0x0008b201,0x000c1392,
/* 0106 */ 0x0000ba01,0x00000000,
/* TASKTREETHREAD */
/* 0107 */ 0x00008731,0x00001400,0x0004c108,0x000fe0c4,
/* 0109 */ 0x00057488,0x00000000,0x000a6388,0x00001001,
/* 010B */ 0x0008b3.4.1x000bc141,0x0003020e,0x00000000,
/* 010D */ 0x000986b0,0x00001008,0x00003625,0x000c5dfa,
/* 010F */ 0x000a638a,0x00001001,0x0008020e,0x00001002,
/* 0111 */ 0x0009a6b0,0x00001008,0x0007f301,0x00000000,
/* 0113 */ 0x00000000,0x00000000,0x00002725,0x000a8c40,
/* 0115 */ 0x000000ae,0x00000000,0x000e8630,0x00001008,
/* 0117 */ 0x00000000,0x000c74e0,0x0007d182,0x0002d640,
/* 0119 */ 0x000b8630,0x00001008,0x000799b8,0x0002d6c0,
/* 011B */ 0x0000748a,0x000c3ec5,0x0007420a,0x000c0000,
/* 011D */ 0x00062208,0x000c4117,0x000a0630,0x00001009,
/* 011F */ 0x00000000,0x000c0000,0x0001022e,0x00000000,
/* 0121 */ 0x0006a630,0x00001009,0x00000032,0x00001000,
/* 0123 */ 0x000ca21c,0x00001003,0x00005a02,0x00000000,
/* 0125 */ 0x0001a630,0x00001009,0x00000000,0x000c0000,
/* 0127 */ 0x00000036,0x00001000,0x00000000,0x00000000,
/* 0129 */ 0x00000000,0x00000000,0x00000000,0x00000000,
/* 012B */ 0x00000000,0x00000000,0x0003a730,0x00001008,
/* 012D */ 0x0007f801,0x000c0000,0x00000037,0x00001000,
/* 012F */ 0x00000000,0x00000000,0x00000000,0x00000000,
/* 0131 */ 0x00000000,0x00000000,0x00000000,0x00000000,
/* 0133 */ 0x0003a730,0x00001008,0x00000033,0x00001000,
/* 0135 */ 0x0003a705,0x00001008,0x00007a01,0x000c0000,
/* 0137 */ 0x000e6288,0x000d550a,0x0006428a,0x00000000,
/* 0139 */ 0x00090730,0x0000100a,0x00000000,0x000c0000,
/* 013B */ 0x00000000,0x00000000,
/* TASKTREEHEADERCODE */
/* 013C */ 0x0007aab0,0x00034880,0x000a8fb0,0x0000100b,
/* 013E */ 0x00057488,0x00000000,0x00033b94,0x00081140,
/* 0140 */ 0x000183ae,0x00000000,0x000a86b0,0x0000100b,
/* 0142 */ 0x00022f05,0x000c3545,0x0000eb8a,0x00000000,
/* 0144 */ 0x00042731,0x00001003,
/* FGTASKTREEHEADERCODE */
/* 0145 */ 0x0007aab0,0x00034880,0x00078fb0,0x0000100a,
/* 0147 */ 0x00057488,0x00000000,0x00033b94,0x00081140,
/* 0149 */ 0x000183ae,0x00000000,0x000b06b0,0x0000100b,
/* 014B */ 0x00022f05,0x00000000,0x00007401,0x00091140,
/* 014D */ 0x00048f05,0x000951c0,0x00042731,0x00001003,
/* 014F */ 0x0000473d,0x00001000,0x000f19b0,0x000bbc47,
/* 0151 */ 0x00080000,0x000bffc7,0x000fe19e,0x00001003,
/* 0153 */ 0x00000000,0x00000000,0x0008e19c,0x00001003,
/* 0155 */ 0x000083c1,0x00093040,0x00000f41,0x00097140,
/* 0157 */ 0x0000a841,0x0009b240,0x0000a0c1,0x0009f040,
/* 0159 */ 0x0001c641,0x00093540,0x0001cec1,0x0009b5c0,
/* 015B */ 0x00000000,0x000fdc44,0x00055208,0x00000000,
/* 015D */ 0x00010705,0x000a2880,0x0000a23a,0x00093a00,
/* 015F */ 0x0003fc8a,0x000df6c5,0x0004ef0a,0x000c0000,
/* 0161 */ 0x00012f05,0x00036880,0x00065308,0x000c2997,
/* 0163 */ 0x000086b0,0x0000100b,0x0004410a,0x000d40c7,
/* 0165 */ 0x00000000,0x00000000,0x00088730,0x00001004,
/* 0167 */ 0x00056f0a,0x000ea105,0x00000000,0x00000000,
/* NULLALGORITHM */
/* 0169 */ 0x0000473d,0x00001000,0x000f19b0,0x000bbc47,
/* 016B */ 0x00080000,0x000bffc7,0x0000273d,0x00001000,
/* HFGEXECCHILD */
/* 016D */ 0x00000000,0x000eba44,
/* HFGEXECCHILD_98 */
/* 016E */ 0x00048f05,0x0000f440,0x00007401,0x0000f7c0,
/* HFGEXECCHILD_PUSH1IND */
/* 0170 */ 0x00000734,0x00001000,0x00010705,0x000a6880,
/* 0172 */ 0x00006a88,0x000c75c4,
/* HFGEXECSIBLING */
/* 0173 */ 0x00000000,0x000e5084,0x00000000,0x000eba44,
/* HFGEXECSIBLING_298 */
/* 0175 */ 0x00087401,0x000e4782,
/* HFGEXECSIBLING_2IND1 */
/* 0176 */ 0x00000734,0x00001000,0x00010705,0x000a6880,
/* 0178 */ 0x00006a88,0x000c75c4,
/* S16_CODECOUTPUTTASK */
/* 0179 */ 0x0007c108,0x000c0000,0x0007e721,0x000bed40,
/* 017B */ 0x00005f25,0x000badc0,0x0003ba97,0x000beb80,
/* 017D */ 0x00065590,0x000b2e00,0x00033217,0x00003ec0,
/* 017F */ 0x00065590,0x000b8e40,0x0003ed80,0x000491c0,
/* 0181 */ 0x00073fb0,0x00074c80,0x000583a0,0x0000100c,
/* 0183 */ 0x000ee388,0x00042970,0x00008301,0x00021ef2,
/* 0185 */ 0x000b8f14,0x0000000f,0x000c4d8d,0x0000001b,
/* 0187 */ 0x000d6dc2,0x000e06c6,0x000032ac,0x000c3916,
/* 0189 */ 0x0004edc2,0x00074c80,0x00078898,0x00001000,
/* 018B */ 0x00038894,0x00000032,0x000c4d8d,0x00092e1b,
/* 018D */ 0x000d6dc2,0x000e06c6,0x0004edc2,0x000c1956,
/* 018F */ 0x0000722c,0x00034a00,0x00041705,0x0009ed40,
/* 0191 */ 0x00058730,0x00001400,0x000d7488,0x000c3a00,
/* 0193 */ 0x00048f05,0x00000000
};
/* #CODE_END */

static u32 cwc4630_parameter[] = {
/* 0000 */ 0x00000000,0x00000000,0x00000000,0x00000000,
/* 0004 */ 0x00000000,0x00000000,0x00000000,0x00000000,
/* 0008 */ 0x00000000,0x00000000,0x00000000,0x00000000,
/* 000C */ 0x00000000,0x00000000,0x00000000,0x00000000,
/* 0010 */ 0x00000000,0x00000000,0x00000000,0x00000000,
/* 0014 */ 0x00000000,0x00000000,0x00000000,0x00000000,
/* 0018 */ 0x00000000,0x00000000,0x00000000,0x00000000,
/* 001C */ 0x00000000,0x00000000,0x00000000,0x00000000,
/* 0020 */ 0x00000000,0x00000000,0x00000000,0x00000000,
/* 0024 */ 0x00000000,0x00000000,0x00000000,0x00000000,
/* 0028 */ 0x00000000,0x00000000,0x00000000,0x00000000,
/* 002C */ 0x00000000,0x00000000,0x00000000,0x00000000,
/* 0030 */ 0x00000000,0x00000000,0x00000000,0x00000000,
/* 0034 */ 0x00000000,0x00000000,0x00000000,0x00000000,
/* 0038 */ 0x00000000,0x00000000,0x00000000,0x00000000,
/* 003C */ 0x00000000,0x00000000,0x00000000,0x00000000,
/* 0040 */ 0x00000000,0x00000000,0x00000000,0x00000000,
/* 0044 */ 0x00000000,0x00000000,0x00000000,0x00000000,
/* 0048 */ 0x00000000,0x00000000,0x00000000,0x00000000,
/* 004C */ 0x00000000,0x00000000,0x00000000,0x00000000,
/* 0050 */ 0x00000000,0x00000000,0x00000000,0x00000000,
/* 0054 */ 0x00000000,0x00000000,0x00000000,0x00000000,
/* 0058 */ 0x00000000,0x00000000,0x00000000,0x00000000,
/* 005C */ 0x00000000,0x00000000,0x00000000,0x00000000,
/* 0060 */ 0x00000000,0x00000000,0x00000000,0x00000000,
/* 0064 */ 0x00000000,0x00000000,0x00000000,0x00000000,
/* 0068 */ 0x00000000,0x00000000,0x00000000,0x00000000,
/* 006C */ 0x00000000,0x00000000,0x00000000,0x00000000,
/* 0070 */ 0x00000000,0x00000000,0x00000000,0x00000000,
/* 0074 */ 0x00000000,0x00000000,0x00000000,0x00000000,
/* 0078 */ 0x00000000,0x00000000,0x00000000,0x00000000,
/* 007C */ 0x00000000,0x00000000,0x00000000,0x00000000
}; /* #PARAMETER_END */


static struct dsp_segment_desc cwc4630_segments[] = {
  { SEGTYPE_SP_PROGRAM, 0x00000000, 0x00000328, cwc4630_code },
  { SEGTYPE_SP_PARAMETER, 0x00000000, 0x00000080, cwc4630_parameter },
};

static struct dsp_module_desc cwc4630_module = {
  "cwc4630",
  {
    38,
    cwc4630_symbols
  },
  2,
  cwc4630_segments,
};

#endif /* __HEADER_cwc4630_H__ */
