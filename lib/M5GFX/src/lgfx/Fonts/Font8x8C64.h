/*
 *
 * original source : https://github.com/hugovangalen/C64_Font8x8
 *
 * modify by lovyan03
 *
 */

#ifndef FONT8x8_C64_H
#define FONT8x8_C64_H

/* C64 font */
const uint8_t font8x8_c64 [] PROGMEM =
{
/*   */ 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/* ! */ 0x00,0x00,0x00,0x00,0x4f,0x4f,0x00,0x00,
/* " */ 0x00,0x00,0x07,0x07,0x00,0x00,0x07,0x07,
/* # */ 0x00,0x14,0x7f,0x7f,0x14,0x14,0x7f,0x7f,
/* $ */ 0x00,0x00,0x24,0x2e,0x6b,0x6b,0x3a,0x12,
/* % */ 0x00,0x00,0x63,0x33,0x18,0x0c,0x66,0x63,
/* & */ 0x00,0x00,0x32,0x7f,0x4d,0x4d,0x77,0x72,

/* flipped backtick! */ 0x00,0x00,0x00,0x00,0x04,0x06,0x03,0x01,

/* ( */ 0x00,0x00,0x00,0x1c,0x3e,0x63,0x41,0x00,
/* ) */ 0x00,0x00,0x00,0x41,0x63,0x3e,0x1c,0x00,
/* * */ 0x00,0x08,0x2a,0x3e,0x1c,0x1c,0x3e,0x2a,
/* + */ 0x00,0x00,0x08,0x08,0x3e,0x3e,0x08,0x08,
/* , */ 0x00,0x00,0x00,0x80,0xe0,0x60,0x00,0x00,
/* - */ 0x00,0x00,0x08,0x08,0x08,0x08,0x08,0x08,
/* . */ 0x00,0x00,0x00,0x00,0x60,0x60,0x00,0x00,
/* / */ 0x00,0x00,0x40,0x60,0x30,0x18,0x0c,0x06,

/* 0 */ 0x00,0x00,0x3e,0x7f,0x49,0x45,0x7f,0x3e,
/* 1 */ 0x00,0x00,0x40,0x44,0x7f,0x7f,0x40,0x40,
/* 2 */ 0x00,0x00,0x62,0x73,0x51,0x49,0x4f,0x46,
/* 3 */ 0x00,0x00,0x22,0x63,0x49,0x49,0x7f,0x36,
/* 4 */ 0x00,0x00,0x18,0x18,0x14,0x16,0x7f,0x7f,
/* 5 */ 0x00,0x00,0x27,0x67,0x45,0x45,0x7d,0x39,
/* 6 */ 0x00,0x00,0x3e,0x7f,0x49,0x49,0x7b,0x32,
/* 7 */ 0x00,0x00,0x03,0x03,0x79,0x7d,0x07,0x03,
/* 8 */ 0x00,0x00,0x36,0x7f,0x49,0x49,0x7f,0x36,
/* 9 */ 0x00,0x00,0x26,0x6f,0x49,0x49,0x7f,0x3e,
/* : */ 0x00,0x00,0x00,0x00,0x24,0x24,0x00,0x00,
/* ; */ 0x00,0x00,0x00,0x80,0xe4,0x64,0x00,0x00,
/* < */ 0x00,0x00,0x08,0x1c,0x36,0x63,0x41,0x41,
/* = */ 0x00,0x00,0x14,0x14,0x14,0x14,0x14,0x14,
/* > */ 0x00,0x00,0x41,0x41,0x63,0x36,0x1c,0x08,
/* ? */ 0x00,0x00,0x02,0x03,0x51,0x59,0x0f,0x06,

/* @ */ 0x00,0x00,0x3e,0x7f,0x41,0x4d,0x4f,0x2e,

/* A */ 0x00,0x00,0x7c,0x7e,0x0b,0x0b,0x7e,0x7c,
/* B */ 0x00,0x00,0x7f,0x7f,0x49,0x49,0x7f,0x36,
/* 1 */ 0x00,0x00,0x3e,0x7f,0x41,0x41,0x63,0x22,
/* D */ 0x00,0x00,0x7f,0x7f,0x41,0x63,0x3e,0x1c,
/* E */ 0x00,0x00,0x7f,0x7f,0x49,0x49,0x41,0x41,
/* F */ 0x00,0x00,0x7f,0x7f,0x09,0x09,0x01,0x01,
/* G */ 0x00,0x00,0x3e,0x7f,0x41,0x49,0x7b,0x3a,
/* H */ 0x00,0x00,0x7f,0x7f,0x08,0x08,0x7f,0x7f,
/* I */ 0x00,0x00,0x00,0x41,0x7f,0x7f,0x41,0x00,
/* J */ 0x00,0x00,0x20,0x60,0x41,0x7f,0x3f,0x01,
/* K */ 0x00,0x00,0x7f,0x7f,0x1c,0x36,0x63,0x41,
/* L */ 0x00,0x00,0x7f,0x7f,0x40,0x40,0x40,0x40,
/* M */ 0x00,0x00,0x7f,0x7f,0x06,0x0c,0x06,0x7f,
/* N */ 0x00,0x00,0x7f,0x7f,0x0e,0x1c,0x7f,0x7f,
/* O */ 0x00,0x00,0x3e,0x7f,0x41,0x41,0x7f,0x3e,
/* P */ 0x00,0x00,0x7f,0x7f,0x09,0x09,0x0f,0x06,
/* Q */ 0x00,0x00,0x1e,0x3f,0x21,0x61,0x7f,0x5e,
/* R */ 0x00,0x00,0x7f,0x7f,0x19,0x39,0x6f,0x46,
/* S */ 0x00,0x00,0x26,0x6f,0x49,0x49,0x7b,0x32,
/* T */ 0x00,0x00,0x01,0x01,0x7f,0x7f,0x01,0x01,
/* U */ 0x00,0x00,0x3f,0x7f,0x40,0x40,0x7f,0x3f,
/* V */ 0x00,0x00,0x1f,0x3f,0x60,0x60,0x3f,0x1f,
/* W */ 0x00,0x00,0x7f,0x7f,0x30,0x18,0x30,0x7f,
/* X */ 0x00,0x00,0x63,0x77,0x1c,0x1c,0x77,0x63,
/* Y */ 0x00,0x00,0x07,0x0f,0x78,0x78,0x0f,0x07,
/* Z */ 0x00,0x00,0x61,0x71,0x59,0x4d,0x47,0x43,

/* [ */ 0x00,0x00,0x7f,0x7f,0x41,0x41,0x00,0x00,
/* flipped forward slash */ 0x06,0x0c,0x18,0x30,0x60,0x40,0x00,0x00,// 0x00,0x00,0x40,0x60,0x30,0x18,0x0c,0x06,
// /* (pound) */ 0x00,0x22,0x49,0x49,0x5e,0x7c,0x68,0x40, /* pound in stead of backslash */
/* ] */ 0x00,0x00,0x41,0x41,0x7f,0x7f,0x00,0x00,

/* 0x00,0x00,0x7E,0x42,0x42,0x00,0x00,0x00,  // [
  0x00,0x04,0x08,0x10,0x20,0x40,0x00,0x00,  // <backslash>
  0x00,0x00,0x42,0x42,0x7E,0x00,0x00,0x00,  // ] */

  0x00,0x08,0x04,0x7E,0x04,0x08,0x00,0x00,  // ^
  0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x00,  // _

/* ` */ 0x00,0x01,0x03,0x06,0x04,0x00,0x00,0x00,
/* a */ 0x00,0x00,0x20,0x74,0x54,0x54,0x7c,0x78,
/* b */ 0x00,0x00,0x7e,0x7e,0x48,0x48,0x78,0x30,
/* c */ 0x00,0x00,0x38,0x7c,0x44,0x44,0x44,0x00,
/* d */ 0x00,0x00,0x30,0x78,0x48,0x48,0x7e,0x7e,
/* e */ 0x00,0x00,0x38,0x7c,0x54,0x54,0x5c,0x18,
/* f */ 0x00,0x00,0x00,0x08,0x7c,0x7e,0x0a,0x0a,
/* g */ 0x00,0x00,0x98,0xbc,0xa4,0xa4,0xfc,0x7c,
/* h */ 0x00,0x00,0x7e,0x7e,0x08,0x08,0x78,0x70,
/* i */ 0x00,0x00,0x00,0x48,0x7a,0x7a,0x40,0x00,
/* j */ 0x00,0x00,0x00,0x80,0x80,0x80,0xfa,0x7a,
/* k */ 0x00,0x00,0x7e,0x7e,0x10,0x38,0x68,0x40,
/* l */ 0x00,0x00,0x00,0x42,0x7e,0x7e,0x40,0x00,
/* m */ 0x00,0x00,0x7c,0x7c,0x18,0x38,0x1c,0x7c,
/* n */ 0x00,0x00,0x7c,0x7c,0x04,0x04,0x7c,0x78,
/* o */ 0x00,0x00,0x38,0x7c,0x44,0x44,0x7c,0x38,
/* p */ 0x00,0x00,0xfc,0xfc,0x24,0x24,0x3c,0x18,
/* q */ 0x00,0x00,0x18,0x3c,0x24,0x24,0xfc,0xfc,
/* r */ 0x00,0x00,0x7c,0x7c,0x04,0x04,0x0c,0x08,
/* s */ 0x00,0x00,0x48,0x5c,0x54,0x54,0x74,0x24,
/* t */ 0x00,0x00,0x04,0x04,0x3e,0x7e,0x44,0x44,
/* u */ 0x00,0x00,0x3c,0x7c,0x40,0x40,0x7c,0x7c,
/* v */ 0x00,0x00,0x1c,0x3c,0x60,0x60,0x3c,0x1c,
/* w */ 0x00,0x00,0x1c,0x7c,0x70,0x38,0x70,0x7c,
/* x */ 0x00,0x00,0x44,0x6c,0x38,0x38,0x6c,0x44,
/* y */ 0x00,0x00,0x9c,0xbc,0xa0,0xe0,0x7c,0x3c,
/* z */ 0x00,0x00,0x44,0x64,0x74,0x5c,0x4c,0x44,
  0x00,0x08,0x08,0x76,0x42,0x42,0x00,0x00,  // {
  0x00,0x00,0x00,0x7E,0x00,0x00,0x00,0x00,  // |
  0x00,0x42,0x42,0x76,0x08,0x08,0x00,0x00,  // }
  0x00,0x00,0x04,0x02,0x04,0x02,0x00,0x00,  // ~
  
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,  // BLOCK = 127
/* (spades) */ 0x18,0x5c,0x7e,0x7f,0x7e,0x5c,0x18,0x00, // 128
/* (heart) */ 0x0e,0x1f,0x3f,0x7e,0x3f,0x1f,0x0e,0x00,  // 129
/* (clubs) */ 0x00,0x0c,0x4c,0x73,0x73,0x4c,0x0c,0x00,  // 130
/* (diamonds) */ 0x08,0x1c,0x3e,0x7f,0x3e,0x1c,0x08,0x00, // 131

/* progress bar outline */
0x18, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, // |=  // 132
0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, // = 133
0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x18, // =| 134

/* progress bar filled */
0x18, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, // 135
0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, // 136
0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x18, // 137

/* arrows (navi) */
0x04, 0x0E, 0x1F, 0x04, 0x04, 0x04, 0xF8, 0x00, // 138 arrow right [correct orientation]
0x00, 0xF8, 0x04, 0x04, 0x04, 0x1F, 0x0E, 0x04, // 139 arrow right [correct orientation]
0x00, 0x04, 0x06, 0xFF, 0x06, 0x04, 0x00, 0x00, // 140 arrow up

6,   14,   31, 0xFB,   31,   14,    6,    0x00, // 141 GPS pin...
0x00, 0x06, 0x0f, 0x09, 0x0f, 0x06, 0x00, 0x00, // 142 angle / degrees sign

0x00, 0x20, 0x60, 0xFF, 0x60, 0x20, 0x00, 0x00  // 143 arrow DOWN
};

#endif
