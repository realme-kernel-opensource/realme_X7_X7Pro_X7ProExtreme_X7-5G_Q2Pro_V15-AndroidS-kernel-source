/*
 * Copyright (C) 2016 MediaTek Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 */

unsigned short imx581_seamless_preview[] = {
	0x0342, 0x23,
	0x0343, 0x10,
	0x0340, 0x0C,
	0x0341, 0x88,
	0x0900, 0x01,
	0x0901, 0x22,
	0x0902, 0x08,
	0x3246, 0x81,
	0x3247, 0x81,
	0x0408, 0x00,
	0x0409, 0x00,
	0x040A, 0x00,
	0x040B, 0x00,
	0x3620, 0x00,
	0x3621, 0x00,
	0x3C11, 0x04,
	0x3C12, 0x03,
	0x3C13, 0x2D,
	0x3F0C, 0x01,
	0x3F14, 0x00,
	0x3FF9, 0x3C,
	0x3FFE, 0x01,
	0x3FFF, 0x8C,
	0x0202, 0x0C,
	0x0203, 0x58,
	0x0204, 0x00,
	0x0205, 0x70,
	0x4434, 0x01,
	0x4435, 0xF0
};

/*regC-1 fullsize & center crop*/
 unsigned short imx581_seamless_custom5[] = {
	0x0342, 0x3C,
	0x0343, 0x90,
	0x0340, 0x18,
	0x0341, 0x2F,
	0x0900, 0x00,
	0x0901, 0x11,
	0x0902, 0x0A,
	0x3246, 0x01,
	0x3247, 0x01,
	0x0408, 0x07,
	0x0409, 0xD0,
	0x040A, 0x05,
	0x040B, 0xDC,
	0x3620, 0x01,
	0x3621, 0x01,
	0x3C11, 0x08,
	0x3C12, 0x08,
	0x3C13, 0x2A,
	0x3F0C, 0x00,
	0x3F14, 0x01,
	0x3FF9, 0x00,
	0x3FFE, 0x03,
	0x3FFF, 0x65,
	0x0202, 0x17,
	0x0203, 0xFF,
	0x0204, 0x00,
	0x0205, 0x70,
	0x4434, 0x00,
	0x4435, 0xF8
};
