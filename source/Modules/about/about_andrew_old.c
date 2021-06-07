/*

Directory Opus 5
Original APL release version 5.82
Copyright 1993-2012 Jonathan Potter & GP Software

This program is free software; you can redistribute it and/or
modify it under the terms of the AROS Public License version 1.1.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
AROS Public License for more details.

The release of Directory Opus 5 under the GPL in NO WAY affects
the existing commercial status of Directory Opus for Windows.

For more information on Directory Opus for Windows please see:

				 http://www.gpsoft.com.au

*/

#include <dopus/common.h>

FAR UWORD andrew_data[] = {
	0x0000, 0x000a, 0xf7d5, 0x42f7, 0x5800, 0x0000, 0x0000, 0xffbf, 0xf0ff, 0xfc00, 0x0000, 0x0000, 0xc07d, 0xe0ab,
	0xfc00, 0x0000, 0x0010, 0x0002, 0xf1fd, 0xec00, 0x0000, 0x0000, 0x0000, 0xe1ff, 0xfc00, 0x0000, 0x0000, 0x0000,
	0x31ff, 0xfc00, 0x0000, 0x0000, 0x0000, 0x11ff, 0xfc00, 0x0000, 0x0000, 0x0000, 0x01ff, 0xfc00, 0x0000, 0x0000,
	0x0000, 0x01ff, 0xfc00, 0x0000, 0x0000, 0x0000, 0x01ff, 0xfc00, 0x0000, 0x0000, 0x3c20, 0x01ff, 0xfc00, 0x0000,
	0x0000, 0x0380, 0x407f, 0xf800, 0x0000, 0x0000, 0x2065, 0x005f, 0xfc00, 0x0000, 0x0000, 0x07b7, 0xf01f, 0xfc00,
	0x0000, 0x0000, 0x2d89, 0xcc0f, 0xfc00, 0x0000, 0x0000, 0x1e06, 0x661f, 0xfc00, 0x0000, 0x0000, 0x0704, 0xe10f,
	0xfc00, 0x0004, 0x0000, 0xdf02, 0xb20f, 0xfc00, 0x0000, 0x0000, 0xec00, 0x588f, 0xfc00, 0x0000, 0x0000, 0xdd00,
	0x304f, 0xfc00, 0x0000, 0x0000, 0xff18, 0x3c4f, 0xfc00, 0x0000, 0x0000, 0xfe04, 0x388f, 0xfc00, 0x0000, 0x0000,
	0xbc30, 0x4c2f, 0xfc00, 0x0000, 0x0000, 0x3800, 0x0c07, 0xfc00, 0x0000, 0x0000, 0x7e08, 0x8e27, 0xfc00, 0x0000,
	0x0000, 0x7c0e, 0xfec7, 0xfc00, 0x0000, 0x0000, 0xbbb0, 0x0b03, 0xfc00, 0x0000, 0x0001, 0x7f9d, 0xc7a7, 0xfc00,
	0x0000, 0x0000, 0x3a7e, 0x843f, 0xfc00, 0x0000, 0x0003, 0x761c, 0x152f, 0xfc00, 0x0000, 0x0003, 0xe03c, 0x642f,
	0xfc00, 0x0000, 0x0003, 0xefbe, 0x1107, 0xfc00, 0x0000, 0x0001, 0xcc00, 0x781f, 0xfc00, 0x0000, 0x0003, 0xcd5b,
	0xfb1f, 0xfc00, 0x0000, 0x0103, 0xdf7e, 0xa81f, 0xfc00, 0x0000, 0x0383, 0x0daa, 0x50e7, 0xfc00, 0x0000, 0x02f0,
	0x0617, 0x8cc7, 0xfc00, 0x0000, 0x02bc, 0x0903, 0x1477, 0xfc00, 0x0000, 0x0044, 0x0701, 0x2101, 0xcc00, 0x0000,
	0x0189, 0x828f, 0x8399, 0xfc00, 0x0000, 0x00b3, 0x01de, 0x07c1, 0xfc00, 0x0000, 0x0057, 0x0261, 0x49c1, 0xfc00,
	0x0000, 0x0011, 0x01e0, 0x8381, 0xfc00, 0x0000, 0x0018, 0x13c0, 0x2182, 0xfc00, 0x0000, 0x000f, 0xa1c9, 0x499b,
	0x7c00, 0x0000, 0x0006, 0x00e8, 0x031a, 0xfc00, 0x0000, 0x000c, 0x83fd, 0xc5ab, 0xfc00, 0x0000, 0x000c, 0x11fd,
	0x212d, 0xfc00, 0x4000, 0x000d, 0x41c6, 0x252b, 0xfc00, 0x8000, 0x0004, 0x09c5, 0x217d, 0xf800, 0x8000, 0x0008,
	0x80e3, 0xe13d, 0xfc00, 0xc000, 0x0000, 0x707a, 0xdaff, 0xfc00, 0x8000, 0x0004, 0x123f, 0x60ef, 0xfc00, 0x8000,
	0x000c, 0x2041, 0x205f, 0xfc00, 0x8000, 0x0008, 0x9180, 0x8f1f, 0xfc00, 0x0000, 0x0008, 0x6063, 0x7c6f, 0xfc00,
	0x0000, 0x0019, 0xc010, 0xba2f, 0xfc00, 0x0000, 0x0039, 0xf801, 0x6dff, 0xfc00, 0x8000, 0x003c, 0xe00b, 0x5bea,
	0xfc00, 0x0000, 0x00ff, 0x7747, 0x5dfd, 0xfc00, 0x0000, 0x03ff, 0xa202, 0x867b, 0xfc00, 0x0000, 0x05ff, 0xf340,
	0x37ef, 0xfc00, 0x0000, 0x0bff, 0xe1c0, 0x77ff, 0xfc00, 0x0000, 0x0fff, 0xf8e0, 0xafff, 0xec00, 0x0000, 0x1fff,
	0xfcc0, 0xffeb, 0xfc00, 0x0000, 0x3fff, 0xff25, 0x1fff, 0xfc00, 0x0000, 0x0020, 0x7eff, 0xf1f1, 0xac00, 0x22a2,
	0x2295, 0xfffe, 0x93ff, 0xfc00, 0x1008, 0x882e, 0xe867, 0xf3ff, 0xfc00, 0x4492, 0x2256, 0x0003, 0xe3ff, 0xfc00,
	0x1000, 0x0040, 0x0000, 0xf177, 0xfc00, 0x42a9, 0x5500, 0x0000, 0x72ff, 0xfc00, 0x0840, 0x0400, 0x0000, 0x11fb,
	0xfc00, 0x2285, 0x0400, 0x0000, 0x03ff, 0xfc00, 0x0a20, 0xb000, 0x0000, 0x01ff, 0xfc00, 0x429a, 0x8000, 0x0000,
	0x01ff, 0xfc00, 0x1444, 0x5000, 0x0000, 0x01ff, 0xfc00, 0x4112, 0x4000, 0x0c3f, 0x01ff, 0xdc00, 0x1449, 0x0000,
	0x1fe0, 0x607f, 0xdc00, 0x0884, 0xa000, 0x1c08, 0x381f, 0xfc00, 0x48a2, 0x4000, 0x1376, 0x083f, 0xfc00, 0x1215,
	0x0000, 0x21f9, 0x841f, 0xfc00, 0x454a, 0x8000, 0x48fb, 0x022f, 0xfc00, 0x10a7, 0x0000, 0x40fd, 0x431f, 0xfc00,
	0x0915, 0x0000, 0x53ff, 0xa11f, 0xfc00, 0x4454, 0x0000, 0x42ff, 0xc08f, 0xfc00, 0x1150, 0x0000, 0x40ff, 0xc08f,
	0xfc00, 0x4a48, 0x0000, 0x61ff, 0xc04f, 0xfc00, 0x0120, 0x0000, 0x63ff, 0xb04f, 0xfc00, 0x1550, 0x0000, 0xe7ff,
	0xe04f, 0xfc00, 0x0100, 0x0000, 0x61ff, 0x504f, 0xfc00, 0x24c0, 0x0000, 0xc3f0, 0x0007, 0xfc00, 0x4200, 0x0000,
	0x843f, 0x8007, 0xfc00, 0x0a80, 0x0000, 0x01e0, 0x004f, 0xfc00, 0x1000, 0x0000, 0x03ff, 0x812b, 0xfc00, 0x4680,
	0x0001, 0x0664, 0x20d3, 0xfc00, 0x1000, 0x0001, 0x003c, 0x11d7, 0xfc00, 0x0500, 0x0001, 0x00d4, 0x217d, 0xfc00,
	0x5000, 0x0003, 0x0002, 0x0037, 0xfc00, 0x0400, 0x0001, 0x0020, 0x001f, 0xfc00, 0x1080, 0x0001, 0x0081, 0x400b,
	0xfc00, 0x0000, 0x0001, 0x0255, 0x8007, 0xfc00, 0x0000, 0x0003, 0x01e8, 0x0025, 0xfc00, 0x4000, 0x00a1, 0x00fc,
	0x0007, 0xfc00, 0x0000, 0x015b, 0x00f8, 0x0007, 0xfc00, 0x0000, 0x000f, 0x8070, 0x0007, 0xfc00, 0x0000, 0x0047,
	0x5021, 0x0003, 0xfc00, 0x0000, 0x0033, 0x4000, 0x0003, 0xbc00, 0x0000, 0x000f, 0x2000, 0x000f, 0xfc00, 0x0000,
	0x0007, 0xc000, 0x000f, 0xfc00, 0x0000, 0x0001, 0x8000, 0x000f, 0xfc00, 0x0000, 0x0001, 0xc000, 0x000f, 0xfc00,
	0x0000, 0x0003, 0x6000, 0x001f, 0xfc00, 0x0000, 0x0003, 0xe002, 0x807f, 0x7c00, 0x8000, 0x0002, 0xa039, 0xc0ff,
	0xfc00, 0xc000, 0x0007, 0xf03a, 0xc01f, 0x7c00, 0xc000, 0x0005, 0xfc1c, 0x009b, 0xfc00, 0xc000, 0x0004, 0xfc05,
	0x2057, 0xfc00, 0xc000, 0x0000, 0x5d00, 0x901f, 0xfc00, 0xc000, 0x0000, 0x2700, 0x0077, 0xfc00, 0xc000, 0x0004,
	0x1428, 0x05ef, 0xfc00, 0xa000, 0x0000, 0x019c, 0x82fd, 0xfc00, 0x8000, 0x0000, 0x204e, 0x47f7, 0x7c00, 0x0000,
	0x0000, 0x007e, 0x8b7f, 0xfc00, 0x0000, 0x0000, 0x1c00, 0xb5ff, 0xfc00, 0x0000, 0x0000, 0x0802, 0xbfab, 0xfc00,
	0x0000, 0x0000, 0x1d08, 0x7bdf, 0xfc00, 0x0000, 0x0000, 0x0c01, 0x7dff, 0xfc00, 0x0000, 0x0000, 0x0201, 0x4bdf,
	0xfc00, 0x0000, 0x0000, 0x0100, 0x17ff, 0xfc00, 0x0000, 0x0000, 0x0000, 0x5fff, 0xfc00, 0x0000, 0x0000, 0x0000,
	0xffff, 0xfc00, 0x0000, 0x0000, 0xff00, 0x000e, 0xfc00, 0x0000, 0x0000, 0x7601, 0x61ff, 0xfc00, 0x0000, 0x0000,
	0x001f, 0xf1ff, 0xfc00, 0x0000, 0x0000, 0x0001, 0x71ff, 0xfc00, 0x0000, 0x0000, 0x0000, 0x31ff, 0xfc00, 0x0000,
	0x0000, 0x0000, 0x11ff, 0xfc00, 0x0000, 0x0000, 0x0000, 0x01ff, 0xfc00, 0x0000, 0x0000, 0x0000, 0x00df, 0xfc00,
	0x0000, 0x0000, 0x0000, 0x017b, 0xfc00, 0x0000, 0x0000, 0x0000, 0x00df, 0xfc00, 0x0000, 0x0000, 0x0000, 0x003f,
	0xfc00, 0x0000, 0x0000, 0x0000, 0x0015, 0xfc00, 0x0000, 0x0000, 0x001f, 0x8000, 0x2000, 0x0000, 0x0000, 0x03ff,
	0xc001, 0x4800, 0x0000, 0x0000, 0x0fff, 0xf005, 0xfc00, 0x0000, 0x0000, 0x1fff, 0xf807, 0xfc00, 0x0000, 0x0000,
	0x3fff, 0xfc0f, 0xfc00, 0x0000, 0x0000, 0x3fff, 0xfc03, 0x7c00, 0x0000, 0x0000, 0x3fff, 0xfe07, 0xfc00, 0x0000,
	0x0000, 0x3fff, 0xff0b, 0xfc00, 0x0000, 0x0000, 0x3fff, 0xff07, 0xfc00, 0x0000, 0x0000, 0x1fff, 0xff03, 0x7c00,
	0x0000, 0x0000, 0x1fff, 0xff87, 0xfc00, 0x0000, 0x0000, 0x1fff, 0xff83, 0xfc00, 0x0000, 0x0000, 0x1fff, 0xff82,
	0xa800, 0x0000, 0x0000, 0x3fff, 0xff00, 0x9000, 0x0000, 0x0000, 0x7fc0, 0x7c01, 0x5c00, 0x0000, 0x0000, 0xfe00,
	0x3803, 0xfc00, 0x0000, 0x0001, 0xfc00, 0x7ac6, 0xfc00, 0x0000, 0x0000, 0xf9fb, 0xfa0f, 0xfc00, 0x0000, 0x0000,
	0xffc3, 0xfa0f, 0x7c00, 0x0000, 0x0000, 0xff01, 0xfe8f, 0xfc00, 0x0000, 0x0000, 0xfffd, 0xffcf, 0xdc00, 0x0000,
	0x0000, 0xffff, 0xfde5, 0x7c00, 0x0000, 0x0000, 0xffff, 0xfff7, 0xfc00, 0x0000, 0x0000, 0xffff, 0xfffb, 0xfc00,
	0x0000, 0x0100, 0xffff, 0xfffb, 0xb400, 0x0000, 0x0140, 0xffff, 0xfff9, 0x5000, 0x0000, 0x00a0, 0xffff, 0xfef8,
	0x0000, 0x0000, 0x0070, 0x7fff, 0xfc70, 0x2800, 0x0000, 0x0038, 0xafff, 0xf83f, 0xfc00, 0x0000, 0x0008, 0xbfff,
	0xf63f, 0xf400, 0x0000, 0x0000, 0xdfff, 0xfc77, 0xfc00, 0x0000, 0x0000, 0x2fff, 0xfe77, 0xfc00, 0x0000, 0x0000,
	0x5ff7, 0xfe67, 0xfc00, 0x0000, 0x0000, 0x3fff, 0xfce7, 0xfc00, 0x0000, 0x0000, 0x1fff, 0xfa47, 0xfc00, 0x0000,
	0x0000, 0x0fff, 0xfe87, 0xfc00, 0x0000, 0x0000, 0x1fff, 0xfa07, 0xdc00, 0x0000, 0x0000, 0x07ff, 0xfea7, 0xfc00,
	0x0000, 0x0002, 0x03ff, 0xfe67, 0x4000, 0x0000, 0x0003, 0x03ff, 0xff28, 0x0000, 0x0000, 0x0003, 0xa0ff, 0xff7d,
	0xfc00, 0x0000, 0x0003, 0xd8bf, 0xffff, 0x7c00, 0x0000, 0x0003, 0xea57, 0x70fb, 0xfc00, 0x0000, 0x0007, 0xfe00,
	0x01ff, 0xec00, 0x0000, 0x0007, 0xffa1, 0x01ff, 0xfc00, 0x0000, 0x0007, 0xff80, 0x07db, 0xfc00, 0x0000, 0x0003,
	0xfff4, 0x0f7f, 0xf400, 0x0000, 0x0000, 0xfff8, 0x0bff, 0xfc00, 0x0000, 0x0000, 0x7ff5, 0x1ffe, 0xdc00, 0x0000,
	0x0000, 0x1ffe, 0x9f7b, 0xfc00, 0x0000, 0x0000, 0x1ffe, 0xbef5, 0xb800, 0x0000, 0x0000, 0x07ff, 0x7a94, 0x0000,
	0x0000, 0x0000, 0x03ff, 0x2000, 0x1000, 0x0000, 0x0000, 0x00fa, 0x0085, 0xfc00};

extern ULONG andrew_palette[] = {0x00080000, 0x22222222, 0x33333333, 0x22222222, 0x66666666, 0x44444444, 0x44444444,
								 0x66666666, 0x55555555, 0x55555555, 0x88888888, 0x77777777, 0x66666666, 0x99999999,
								 0x77777777, 0x66666666, 0xaaaaaaaa, 0x88888888, 0x88888888, 0xcccccccc, 0x99999999,
								 0x99999999, 0xcccccccc, 0xcccccccc, 0xbbbbbbbb};
