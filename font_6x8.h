/* $Id$
 * $URL$
 *
 * 6x8 font
 *
 * Copyright (C) 1999, 2000, 2004 Michael Reinelt <michael@reinelt.co.at>
 * Copyright (C) 2004 The LCD4Linux Team <lcd4linux-devel@users.sourceforge.net>
 *
 * This file is part of LCD4Linux.
 *
 * LCD4Linux is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * LCD4Linux is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 */

#define ______ 0x00
#define _____O 0x01
#define ____O_ 0x02
#define ____OO 0x03
#define ___O__ 0x04
#define ___O_O 0x05
#define ___OO_ 0x06
#define ___OOO 0x07
#define __O___ 0x08
#define __O__O 0x09
#define __O_O_ 0x0a
#define __O_OO 0x0b
#define __OO__ 0x0c
#define __OO_O 0x0d
#define __OOO_ 0x0e
#define __OOOO 0x0f
#define _O____ 0x10
#define _O___O 0x11
#define _O__O_ 0x12
#define _O__OO 0x13
#define _O_O__ 0x14
#define _O_O_O 0x15
#define _O_OO_ 0x16
#define _O_OOO 0x17
#define _OO___ 0x18
#define _OO__O 0x19
#define _OO_O_ 0x1a
#define _OO_OO 0x1b
#define _OOO__ 0x1c
#define _OOO_O 0x1d
#define _OOOO_ 0x1e
#define _OOOOO 0x1f

unsigned char Font_6x8[256][8] = {
    [0x20] = {______,
	      ______,
	      ______,
	      ______,
	      ______,
	      ______,
	      ______,
	      ______},
    [0x21] = {___O__,
	      ___O__,
	      ___O__,
	      ___O__,
	      ______,
	      ______,
	      ___O__,
	      ______},
    [0x22] = {__O_O_,
	      __O_O_,
	      __O_O_,
	      ______,
	      ______,
	      ______,
	      ______,
	      ______},
    [0x23] = {__O_O_,
	      __O_O_,
	      _OOOOO,
	      __O_O_,
	      _OOOOO,
	      __O_O_,
	      __O_O_,
	      ______},
    [0x24] = {___O__,
	      __OOOO,
	      _O_O__,
	      __OOO_,
	      ___O_O,
	      _OOOO_,
	      ___O__,
	      ______},
    [0x25] = {_OO___,
	      _OO__O,
	      ____O_,
	      ___O__,
	      __O___,
	      _O__OO,
	      ____OO,
	      ______},
    [0x26] = {__OO__,
	      _O__O_,
	      _O_O__,
	      __O___,
	      _O_O_O,
	      _O__O_,
	      __OO_O,
	      ______},
    [0x27] = {__OO__,
	      ___O__,
	      __O___,
	      ______,
	      ______,
	      ______,
	      ______,
	      ______},
    [0x28] = {____O_,
	      ___O__,
	      __O___,
	      __O___,
	      __O___,
	      ___O__,
	      ____O_,
	      ______},
    [0x29] = {__O___,
	      ___O__,
	      ____O_,
	      ____O_,
	      ____O_,
	      ___O__,
	      __O___,
	      ______},
    [0x2a] = {______,
	      ___O__,
	      _O_O_O,
	      __OOO_,
	      _O_O_O,
	      ___O__,
	      ______,
	      ______},
    [0x2b] = {______,
	      ___O__,
	      ___O__,
	      _OOOOO,
	      ___O__,
	      ___O__,
	      ______,
	      ______},
    [0x2c] = {______,
	      ______,
	      ______,
	      ______,
	      __OO__,
	      ___O__,
	      __O___,
	      ______},
    [0x2d] = {______,
	      ______,
	      ______,
	      _OOOOO,
	      ______,
	      ______,
	      ______,
	      ______},
    [0x2e] = {______,
	      ______,
	      ______,
	      ______,
	      ______,
	      __OO__,
	      __OO__,
	      ______},
    [0x2f] = {______,
	      _____O,
	      ____O_,
	      ___O__,
	      __O___,
	      _O____,
	      ______,
	      ______},
    [0x30] = {__OOO_,
	      _O___O,
	      _O__OO,
	      _O_O_O,
	      _OO__O,
	      _O___O,
	      __OOO_,
	      ______},
    [0x31] = {___O__,
	      __OO__,
	      ___O__,
	      ___O__,
	      ___O__,
	      ___O__,
	      __OOO_,
	      ______},
    [0x32] = {__OOO_,
	      _O___O,
	      _____O,
	      ____O_,
	      ___O__,
	      __O___,
	      _OOOOO,
	      ______},
    [0x33] = {_OOOOO,
	      ____O_,
	      ___O__,
	      ____O_,
	      _____O,
	      _O___O,
	      __OOO_,
	      ______},
    [0x34] = {____O_,
	      ___OO_,
	      __O_O_,
	      _O__O_,
	      _OOOOO,
	      ____O_,
	      ____O_,
	      ______},
    [0x35] = {_OOOOO,
	      _O____,
	      _O____,
	      _OOOO_,
	      _____O,
	      _O___O,
	      __OOO_,
	      ______},
    [0x36] = {___OO_,
	      __O___,
	      _O____,
	      _OOOO_,
	      _O___O,
	      _O___O,
	      __OOO_,
	      ______},
    [0x37] = {_OOOOO,
	      _____O,
	      ____O_,
	      ___O__,
	      __O___,
	      __O___,
	      __O___,
	      ______},
    [0x38] = {__OOO_,
	      _O___O,
	      _O___O,
	      __OOO_,
	      _O___O,
	      _O___O,
	      __OOO_,
	      ______},
    [0x39] = {__OOO_,
	      _O___O,
	      _O___O,
	      __OOOO,
	      _____O,
	      ____O_,
	      __OO__,
	      ______},
    [0x3a] = {______,
	      __OO__,
	      __OO__,
	      ______,
	      __OO__,
	      __OO__,
	      ______,
	      ______},
    [0x3b] = {______,
	      __OO__,
	      __OO__,
	      ______,
	      __OO__,
	      ___O__,
	      __O___,
	      ______},
    [0x3c] = {____O_,
	      ___O__,
	      __O___,
	      _O____,
	      __O___,
	      ___O__,
	      ____O_,
	      ______},
    [0x3d] = {______,
	      ______,
	      _OOOOO,
	      ______,
	      _OOOOO,
	      ______,
	      ______,
	      ______},
    [0x3e] = {_O____,
	      __O___,
	      ___O__,
	      ____O_,
	      ___O__,
	      __O___,
	      _O____,
	      ______},
    [0x3f] = {__OOO_,
	      _O___O,
	      _____O,
	      ____O_,
	      ___O__,
	      ______,
	      ___O__,
	      ______},
    [0x40] = {__OOO_,
	      _O___O,
	      _____O,
	      __OO_O,
	      _O_O_O,
	      _O_O_O,
	      __OOO_,
	      ______},
    [0x41] = {__OOO_,
	      _O___O,
	      _O___O,
	      _O___O,
	      _OOOOO,
	      _O___O,
	      _O___O,
	      ______},
    [0x42] = {_OOOO_,
	      _O___O,
	      _O___O,
	      _OOOO_,
	      _O___O,
	      _O___O,
	      _OOOO_,
	      ______},
    [0x43] = {__OOO_,
	      _O___O,
	      _O____,
	      _O____,
	      _O____,
	      _O___O,
	      __OOO_,
	      ______},
    [0x44] = {_OOO__,
	      _O__O_,
	      _O___O,
	      _O___O,
	      _O___O,
	      _O__O_,
	      _OOO__,
	      ______},
    [0x45] = {_OOOOO,
	      _O____,
	      _O____,
	      _OOOO_,
	      _O____,
	      _O____,
	      _OOOOO,
	      ______},
    [0x46] = {_OOOOO,
	      _O____,
	      _O____,
	      _OOOO_,
	      _O____,
	      _O____,
	      _O____,
	      ______},
    [0x47] = {__OOO_,
	      _O___O,
	      _O____,
	      _O_OOO,
	      _O___O,
	      _O___O,
	      __OOOO,
	      ______},
    [0x48] = {_O___O,
	      _O___O,
	      _O___O,
	      _OOOOO,
	      _O___O,
	      _O___O,
	      _O___O,
	      ______},
    [0x49] = {__OOO_,
	      ___O__,
	      ___O__,
	      ___O__,
	      ___O__,
	      ___O__,
	      __OOO_,
	      ______},
    [0x4a] = {___OOO,
	      ____O_,
	      ____O_,
	      ____O_,
	      ____O_,
	      _O__O_,
	      __OO__,
	      ______},
    [0x4b] = {_O___O,
	      _O__O_,
	      _O_O__,
	      _OO___,
	      _O_O__,
	      _O__O_,
	      _O___O,
	      ______},
    [0x4c] = {_O____,
	      _O____,
	      _O____,
	      _O____,
	      _O____,
	      _O____,
	      _OOOOO,
	      ______},
    [0x4d] = {_O___O,
	      _OO_OO,
	      _O_O_O,
	      _O_O_O,
	      _O___O,
	      _O___O,
	      _O___O,
	      ______},
    [0x4e] = {_O___O,
	      _O___O,
	      _OO__O,
	      _O_O_O,
	      _O__OO,
	      _O___O,
	      _O___O,
	      ______},
    [0x4f] = {__OOO_,
	      _O___O,
	      _O___O,
	      _O___O,
	      _O___O,
	      _O___O,
	      __OOO_,
	      ______},
    [0x50] = {_OOOO_,
	      _O___O,
	      _O___O,
	      _OOOO_,
	      _O____,
	      _O____,
	      _O____,
	      ______},
    [0x51] = {__OOO_,
	      _O___O,
	      _O___O,
	      _O___O,
	      _O_O_O,
	      _O__O_,
	      __OO_O,
	      ______},
    [0x52] = {_OOOO_,
	      _O___O,
	      _O___O,
	      _OOOO_,
	      _O_O__,
	      _O__O_,
	      _O___O,
	      ______},
    [0x53] = {__OOOO,
	      _O____,
	      _O____,
	      __OOO_,
	      _____O,
	      _____O,
	      _OOOO_,
	      ______},
    [0x54] = {_OOOOO,
	      ___O__,
	      ___O__,
	      ___O__,
	      ___O__,
	      ___O__,
	      ___O__,
	      ______},
    [0x55] = {_O___O,
	      _O___O,
	      _O___O,
	      _O___O,
	      _O___O,
	      _O___O,
	      __OOO_,
	      ______},
    [0x56] = {_O___O,
	      _O___O,
	      _O___O,
	      _O___O,
	      _O___O,
	      __O_O_,
	      ___O__,
	      ______},
    [0x57] = {_O___O,
	      _O___O,
	      _O___O,
	      _O_O_O,
	      _O_O_O,
	      _O_O_O,
	      __O_O_,
	      ______},
    [0x58] = {_O___O,
	      _O___O,
	      __O_O_,
	      ___O__,
	      __O_O_,
	      _O___O,
	      _O___O,
	      ______},
    [0x59] = {_O___O,
	      _O___O,
	      _O___O,
	      __O_O_,
	      ___O__,
	      ___O__,
	      ___O__,
	      ______},
    [0x5a] = {_OOOOO,
	      _____O,
	      ____O_,
	      ___O__,
	      __O___,
	      _O____,
	      _OOOOO,
	      ______},
    [0x5b] = {__OOO_,
	      __O___,
	      __O___,
	      __O___,
	      __O___,
	      __O___,
	      __OOO_,
	      ______},
    [0x5c] = {_O___O,
	      __O_O_,
	      _OOOOO,
	      ___O__,
	      _OOOOO,
	      ___O__,
	      ___O__,
	      ______},
    [0x5d] = {__OOO_,
	      ____O_,
	      ____O_,
	      ____O_,
	      ____O_,
	      ____O_,
	      __OOO_,
	      ______},
    [0x5e] = {___O__,
	      __O_O_,
	      _O___O,
	      ______,
	      ______,
	      ______,
	      ______,
	      ______},
    [0x5f] = {______,
	      ______,
	      ______,
	      ______,
	      ______,
	      ______,
	      _OOOOO,
	      ______},
    [0x60] = {__O___,
	      ___O__,
	      ____O_,
	      ______,
	      ______,
	      ______,
	      ______,
	      ______},
    [0x61] = {______,
	      ______,
	      __OOO_,
	      _____O,
	      __OOOO,
	      _O___O,
	      __OOOO,
	      ______},
    [0x62] = {_O____,
	      _O____,
	      _O_OO_,
	      _OO__O,
	      _O___O,
	      _O___O,
	      _OOOO_,
	      ______},
    [0x63] = {______,
	      ______,
	      __OOO_,
	      _O____,
	      _O____,
	      _O___O,
	      __OOO_,
	      ______},
    [0x64] = {_____O,
	      _____O,
	      __OO_O,
	      _O__OO,
	      _O___O,
	      _O___O,
	      __OOOO,
	      ______},
    [0x65] = {______,
	      ______,
	      __OOO_,
	      _O___O,
	      _OOOOO,
	      _O____,
	      __OOO_,
	      ______},
    [0x66] = {___OO_,
	      __O__O,
	      __O___,
	      _OOO__,
	      __O___,
	      __O___,
	      __O___,
	      ______},
    [0x67] = {______,
	      ______,
	      __OOOO,
	      _O___O,
	      _O___O,
	      __OOOO,
	      _____O,
	      __OOO_},
    [0x68] = {_O____,
	      _O____,
	      _O_OO_,
	      _OO__O,
	      _O___O,
	      _O___O,
	      _O___O,
	      ______},
    [0x69] = {___O__,
	      ______,
	      __OO__,
	      ___O__,
	      ___O__,
	      ___O__,
	      __OOO_,
	      ______},
    [0x6a] = {____O_,
	      ______,
	      ___OO_,
	      ____O_,
	      ____O_,
	      _O__O_,
	      __OO__,
	      ______},
    [0x6b] = {__O___,
	      __O___,
	      __O__O,
	      __O_O_,
	      __OO__,
	      __O_O_,
	      __O__O,
	      ______},
    [0x6c] = {__OO__,
	      ___O__,
	      ___O__,
	      ___O__,
	      ___O__,
	      ___O__,
	      __OOO_,
	      ______},
    [0x6d] = {______,
	      ______,
	      _OO_O_,
	      _O_O_O,
	      _O_O_O,
	      _O___O,
	      _O___O,
	      ______},
    [0x6e] = {______,
	      ______,
	      _OOOO_,
	      _O___O,
	      _O___O,
	      _O___O,
	      _O___O,
	      ______},
    [0x6f] = {______,
	      ______,
	      __OOO_,
	      _O___O,
	      _O___O,
	      _O___O,
	      __OOO_,
	      ______},
    [0x70] = {______,
	      ______,
	      _OOOO_,
	      _O___O,
	      _O___O,
	      _OOOO_,
	      _O____,
	      _O____},
    [0x71] = {______,
	      ______,
	      __OO_O,
	      _O__OO,
	      _O___O,
	      __OOOO,
	      _____O,
	      _____O},
    [0x72] = {______,
	      ______,
	      _O_OO_,
	      _OO__O,
	      _O____,
	      _O____,
	      _O____,
	      ______},
    [0x73] = {______,
	      ______,
	      __OOO_,
	      _O____,
	      __OOO_,
	      _____O,
	      _OOOO_,
	      ______},
    [0x74] = {__O___,
	      __O___,
	      _OOO__,
	      __O___,
	      __O___,
	      __O__O,
	      ___OO_,
	      ______},
    [0x75] = {______,
	      ______,
	      _O___O,
	      _O___O,
	      _O___O,
	      _O__OO,
	      __OO_O,
	      ______},
    [0x76] = {______,
	      ______,
	      _O___O,
	      _O___O,
	      _O___O,
	      __O_O_,
	      ___O__,
	      ______},
    [0x77] = {______,
	      ______,
	      _O___O,
	      _O___O,
	      _O___O,
	      _O_O_O,
	      __O_O_,
	      ______},
    [0x78] = {______,
	      ______,
	      _O___O,
	      __O_O_,
	      ___O__,
	      __O_O_,
	      _O___O,
	      ______},
    [0x79] = {______,
	      ______,
	      _O___O,
	      _O___O,
	      __OOOO,
	      _____O,
	      __OOO_,
	      ______},
    [0x7a] = {______,
	      ______,
	      _OOOOO,
	      ____O_,
	      ___O__,
	      __O___,
	      _OOOOO,
	      ______},
    [0x7b] = {____O_,
	      ___O__,
	      ___O__,
	      __O___,
	      ___O__,
	      ___O__,
	      ____O_,
	      ______},
    [0x7c] = {___O__,
	      ___O__,
	      ___O__,
	      ___O__,
	      ___O__,
	      ___O__,
	      ___O__,
	      ______},
    [0x7d] = {__O___,
	      ___O__,
	      ___O__,
	      ____O_,
	      ___O__,
	      ___O__,
	      __O___,
	      ______},
    [0x7e] = {______,
	      ___O__,
	      ____O_,
	      _OOOOO,
	      ____O_,
	      ___O__,
	      ______,
	      ______},

    [0x7f] = {______,
	      ___O__,
	      __O___,
	      _OOOOO,
	      __O___,
	      ___O__,
	      ______,
	      ______},
    [0xb0] = {__OOO_,
	      __O_O_,
	      __OOO_,
	      ______,
	      ______,
	      ______,
	      ______,
	      ______},
    [0xe1] = {__O_O_,
	      ______,
	      __OOO_,
	      _____O,
	      __OOOO,
	      _O___O,
	      __OOOO,
	      ______},
    [0xe2] = {__OOO_,
	      _O___O,
	      _OOOO_,
	      _O___O,
	      _O___O,
	      _O_OO_,
	      _O____,
	      ______},
    [0xef] = {__O_O_,
	      ______,
	      __OOO_,
	      _O___O,
	      _O___O,
	      _O___O,
	      __OOO_,
	      ______},
    [0xf5] = {__O_O_,
	      ______,
	      _O___O,
	      _O___O,
	      _O___O,
	      _O__OO,
	      __OO_O,
	      ______},
};
