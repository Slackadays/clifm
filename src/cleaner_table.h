/* cleaner_table.h - A table for characters translation
 *
 * This file is part of CliFM
 * 
 * Copyright (C) 2016-2023, L. Abramovich <leo.clifm@outlook.com>
 * All rights reserved.

 * CliFM is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * CliFM is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
*/

#ifndef CLEANER_TABLE_H
#define CLEANER_TABLE_H

struct utable_t {
	int key;
	int pad;
	char *data;
};

/* Let's use a table to convert Unicode chars into ASCII alternatives
 * This list is based on https://github.com/dharple/detox and
 * https://en.wikipedia.org/wiki/List_of_Unicode_characters
 * To get the glyph corresponding to any of the below codepoints use
 * printf(1) as folows:
 * $ printf "\UXXXX" # no leading 0x */
struct utable_t unitable[] = {
	{0x0020, 0, "_" },
	{0x0021, 0, "_" },
	{0x0022, 0, "_" },
	{0x0023, 0, "_" },
	{0x0024, 0, "s" },
	{0x0025, 0, "_" },
	{0x0026, 0, "_and_" },
	{0x0027, 0, "_" },
	{0x0028, 0, "-" },
	{0x0029, 0, "-" },
	{0x002a, 0, "_" },
	{0x002b, 0, "_" },
	{0x002c, 0, "_" },
	{0x002d, 0, "-" },
	{0x002e, 0, "." },
	{0x002f, 0, "_" },
	{0x0030, 0, "0" },
	{0x0031, 0, "1" },
	{0x0032, 0, "2" },
	{0x0033, 0, "3" },
	{0x0034, 0, "4" },
	{0x0035, 0, "5" },
	{0x0036, 0, "6" },
	{0x0037, 0, "7" },
	{0x0038, 0, "8" },
	{0x0039, 0, "9" },
	{0x003a, 0, "_" },
	{0x003b, 0, "_" },
	{0x003c, 0, "_" },
	{0x003d, 0, "_" },
	{0x003e, 0, "_" },
	{0x003f, 0, "_" },
	{0x0040, 0, "_" },
	{0x0041, 0, "A" },
	{0x0042, 0, "B" },
	{0x0043, 0, "C" },
	{0x0044, 0, "D" },
	{0x0045, 0, "E" },
	{0x0046, 0, "F" },
	{0x0047, 0, "G" },
	{0x0048, 0, "H" },
	{0x0049, 0, "I" },
	{0x004a, 0, "J" },
	{0x004b, 0, "K" },
	{0x004c, 0, "L" },
	{0x004d, 0, "M" },
	{0x004e, 0, "N" },
	{0x004f, 0, "O" },
	{0x0050, 0, "P" },
	{0x0051, 0, "Q" },
	{0x0052, 0, "R" },
	{0x0053, 0, "S" },
	{0x0054, 0, "T" },
	{0x0055, 0, "U" },
	{0x0056, 0, "V" },
	{0x0057, 0, "W" },
	{0x0058, 0, "X" },
	{0x0059, 0, "Y" },
	{0x005a, 0, "Z" },
	{0x005b, 0, "-" },
	{0x005c, 0, "_" },
	{0x005d, 0, "-" },
	{0x005e, 0, "_" },
	{0x005f, 0, "_" },
	{0x0060, 0, "_" },
	{0x0061, 0, "a" },
	{0x0062, 0, "b" },
	{0x0063, 0, "c" },
	{0x0064, 0, "d" },
	{0x0065, 0, "e" },
	{0x0066, 0, "f" },
	{0x0067, 0, "g" },
	{0x0068, 0, "h" },
	{0x0069, 0, "i" },
	{0x006a, 0, "j" },
	{0x006b, 0, "k" },
	{0x006c, 0, "l" },
	{0x006d, 0, "m" },
	{0x006e, 0, "n" },
	{0x006f, 0, "o" },
	{0x0070, 0, "p" },
	{0x0071, 0, "q" },
	{0x0072, 0, "r" },
	{0x0073, 0, "s" },
	{0x0074, 0, "t" },
	{0x0075, 0, "u" },
	{0x0076, 0, "v" },
	{0x0077, 0, "w" },
	{0x0078, 0, "x" },
	{0x0079, 0, "y" },
	{0x007a, 0, "z" },
	{0x007b, 0, "-" },
	{0x007c, 0, "_" },
	{0x007d, 0, "-" },
	{0x007e, 0, "_" },
	{0x00a0, 0, "_" },
	{0x00a1, 0, "_" },
	{0x00a2, 0, "_cent_" },
	{0x00a3, 0, "_pound_" },
	{0x00a4, 0, "s" },
	{0x00a5, 0, "_yen_" },
	{0x00a7, 0, "_ss_" },
	{0x00a8, 0, "_" },
	{0x00a9, 0, "_copy_" },
	{0x00aa, 0, "_a_" },
	{0x00ab, 0, "_" },
	{0x00ad, 0, "-" },
	{0x00ae, 0, "_reg_" },
	{0x00b0, 0, "_deg_" },
	{0x00b2, 0, "-2" },
	{0x00b3, 0, "-3" },
	{0x00b4, 0, "_" }, // accute accent: ´
	{0x00b5, 0, "u" },
	{0x00b6, 0, "_pp_" },
	{0x00b7, 0, "_" },
	{0x00b8, 0, " " },
	{0x00b9, 0, "-1" },
	{0x00ba, 0, "_o_" },
	{0x00bb, 0, "_" },
	{0x00bf, 0, "_" },
	{0x00c0, 0, "A" },
	{0x00c1, 0, "A" },
	{0x00c2, 0, "A" },
	{0x00c3, 0, "A" },
//	{0x00c4, 0, "A" },
	{0x00c4, 0, "Ae" },
	{0x00c5, 0, "A" },
	{0x00c6, 0, "AE" },
	{0x00c7, 0, "C" },
	{0x00c8, 0, "E" },
	{0x00c9, 0, "E" },
	{0x00ca, 0, "E" },
	{0x00cb, 0, "E" },
	{0x00cc, 0, "I" },
	{0x00cd, 0, "I" },
	{0x00ce, 0, "I" },
	{0x00cf, 0, "I" },
	{0x00d0, 0, "TH" },
	{0x00d1, 0, "N" },
	{0x00d2, 0, "O" },
	{0x00d3, 0, "O" },
	{0x00d4, 0, "O" },
	{0x00d5, 0, "O" },
//	{0x00d6, 0, "O" },
	{0x00d6, 0, "Oe" },
	{0x00d7, 0, "x" },
	{0x00d8, 0, "O" },
	{0x00d9, 0, "U" },
	{0x00da, 0, "U" },
	{0x00db, 0, "U" },
//	{0x00dc, 0, "U" },
	{0x00dc, 0, "Ue" },
	{0x00dd, 0, "Y" },
	{0x00de, 0, "TH" },
	{0x00df, 0, "ss" },
	{0x00e0, 0, "a" },
	{0x00e1, 0, "a" },
	{0x00e2, 0, "a" },
	{0x00e3, 0, "a" },
//	{0x00e4, 0, "a" },
	{0x00e4, 0, "ae" },
	{0x00e5, 0, "a" },
	{0x00e6, 0, "ae" },
	{0x00e7, 0, "c" },
	{0x00e8, 0, "e" },
	{0x00e9, 0, "e" },
	{0x00ea, 0, "e" },
	{0x00eb, 0, "e" },
	{0x00ec, 0, "i" },
	{0x00ed, 0, "i" },
	{0x00ee, 0, "i" },
	{0x00ef, 0, "i" },
	{0x00f0, 0, "th" },
	{0x00f1, 0, "n" },
	{0x00f2, 0, "o" },
	{0x00f3, 0, "o" },
	{0x00f4, 0, "o" },
	{0x00f5, 0, "o" },
//	{0x00f6, 0, "o" },
	{0x00f6, 0, "oe" },
	{0x00f8, 0, "o" },
	{0x00f9, 0, "u" },
	{0x00fa, 0, "u" },
	{0x00fb, 0, "u" },
//	{0x00fc, 0, "u" },
	{0x00fc, 0, "ue" },
	{0x00fd, 0, "y" },
	{0x00fe, 0, "th" },
	{0x00ff, 0, "y" },
	{0x0100, 0, "A" },
	{0x0101, 0, "a" },
	{0x0102, 0, "A" },
	{0x0103, 0, "a" },
	{0x0104, 0, "A" },
	{0x0105, 0, "a" },
	{0x0106, 0, "C" },
	{0x0107, 0, "c" },
	{0x0108, 0, "C" },
	{0x0109, 0, "c" },
	{0x010a, 0, "C" },
	{0x010b, 0, "c" },
	{0x010c, 0, "C" },
	{0x010d, 0, "c" },
	{0x010e, 0, "D" },
	{0x010f, 0, "d" },
	{0x0110, 0, "D" },
	{0x0111, 0, "d" },
	{0x0112, 0, "E" },
	{0x0113, 0, "e" },
	{0x0114, 0, "E" },
	{0x0115, 0, "e" },
	{0x0116, 0, "E" },
	{0x0117, 0, "e" },
	{0x0118, 0, "E" },
	{0x0119, 0, "e" },
	{0x011a, 0, "E" },
	{0x011b, 0, "e" },
	{0x011c, 0, "G" },
	{0x011d, 0, "g" },
	{0x011e, 0, "G" },
	{0x011f, 0, "g" },
	{0x0120, 0, "G" },
	{0x0121, 0, "g" },
	{0x0122, 0, "G" },
	{0x0123, 0, "g" },
	{0x0124, 0, "H" },
	{0x0125, 0, "h" },
	{0x0126, 0, "H" },
	{0x0127, 0, "h" },
	{0x0128, 0, "I" },
	{0x0129, 0, "i" },
	{0x012a, 0, "I" },
	{0x012b, 0, "i" },
	{0x012c, 0, "I" },
	{0x012d, 0, "i" },
	{0x012e, 0, "I" },
	{0x012f, 0, "i" },
	{0x0130, 0, "I" },
	{0x0131, 0, "i" },
	{0x0132, 0, "IJ" },
	{0x0133, 0, "ij" },
	{0x0134, 0, "J" },
	{0x0135, 0, "j" },
	{0x0136, 0, "K" },
	{0x0137, 0, "k" },
	{0x0138, 0, "q" },
	{0x0139, 0, "L" },
	{0x013a, 0, "l" },
	{0x013b, 0, "L" },
	{0x013c, 0, "l" },
	{0x013d, 0, "L" },
	{0x013e, 0, "l" },
	{0x013f, 0, "L" },
	{0x0140, 0, "l" },
	{0x0141, 0, "L" },
	{0x0142, 0, "l" },
	{0x0143, 0, "N" },
	{0x0144, 0, "n" },
	{0x0145, 0, "N" },
	{0x0146, 0, "n" },
	{0x0147, 0, "N" },
	{0x0148, 0, "n" },
	{0x0149, 0, "_n" },
	{0x014a, 0, "NG" },
	{0x014b, 0, "ng" },
	{0x014c, 0, "O" },
	{0x014d, 0, "o" },
	{0x014e, 0, "O" },
	{0x014f, 0, "o" },
	{0x0150, 0, "O" },
	{0x0151, 0, "o" },
	{0x0152, 0, "OE" },
	{0x0153, 0, "oe" },
	{0x0154, 0, "R" },
	{0x0155, 0, "r" },
	{0x0156, 0, "R" },
	{0x0157, 0, "r" },
	{0x0158, 0, "R" },
	{0x0159, 0, "r" },
	{0x015a, 0, "S" },
	{0x015b, 0, "s" },
	{0x015c, 0, "S" },
	{0x015d, 0, "s" },
	{0x015e, 0, "S" },
	{0x015f, 0, "s" },
	{0x0160, 0, "S" },
	{0x0161, 0, "s" },
	{0x0162, 0, "T" },
	{0x0163, 0, "t" },
	{0x0164, 0, "T" },
	{0x0165, 0, "t" },
	{0x0166, 0, "T" },
	{0x0167, 0, "t" },
	{0x0168, 0, "U" },
	{0x0169, 0, "u" },
	{0x016a, 0, "U" },
	{0x016b, 0, "u" },
	{0x016c, 0, "U" },
	{0x016d, 0, "u" },
	{0x016e, 0, "U" },
	{0x016f, 0, "u" },
	{0x0170, 0, "U" },
	{0x0171, 0, "u" },
	{0x0172, 0, "U" },
	{0x0173, 0, "u" },
	{0x0174, 0, "W" },
	{0x0175, 0, "w" },
	{0x0176, 0, "Y" },
	{0x0177, 0, "y" },
	{0x0178, 0, "Y" },
	{0x0179, 0, "Z" },
	{0x017a, 0, "z" },
	{0x017b, 0, "Z" },
	{0x017c, 0, "z" },
	{0x017d, 0, "Z" },
	{0x017e, 0, "z" },
	{0x017f, 0, "s" },
	{0x0180, 0, "b" },
	{0x0181, 0, "B" },
	{0x0182, 0, "B" },
	{0x0183, 0, "b" },
	{0x0184, 0, "B" },
	{0x0185, 0, "b" },
	{0x0186, 0, "O" },
	{0x0187, 0, "C" },
	{0x0188, 0, "c" },
	{0x0189, 0, "D" },
	{0x018a, 0, "D" },
	{0x018b, 0, "D" },
	{0x018c, 0, "d" },
	{0x018d, 0, "z" },
	{0x018e, 0, "E" },
	{0x018f, 0, "E" },
	{0x0190, 0, "E" },
	{0x0191, 0, "F" },
	{0x0192, 0, "f" },
	{0x0193, 0, "G" },
	{0x0194, 0, "Y" },
	{0x0195, 0, "hv" },
	{0x0196, 0, "I" },
	{0x0197, 0, "I" },
	{0x0198, 0, "K" },
	{0x0199, 0, "k" },
	{0x019a, 0, "l" },
	{0x019b, 0, "l" },
	{0x019c, 0, "w" },
	{0x019d, 0, "N" },
	{0x019e, 0, "n" },
	{0x019f, 0, "O" },
	{0x01a0, 0, "O" },
	{0x01a1, 0, "o" },
	{0x01a2, 0, "OI" },
	{0x01a3, 0, "oi" },
	{0x01a4, 0, "P" },
	{0x01a5, 0, "p" },
	{0x01a6, 0, "YR" },
	{0x01a7, 0, "S" },
	{0x01a8, 0, "s" },
	{0x01a9, 0, "SH" },
	{0x01aa, 0, "sh" },
	{0x01ab, 0, "t" },
	{0x01ac, 0, "T" },
	{0x01ad, 0, "t" },
	{0x01ae, 0, "T" },
	{0x01af, 0, "U" },
	{0x01b0, 0, "u" },
	{0x01b1, 0, "Y" },
	{0x01b2, 0, "V" },
	{0x01b3, 0, "Y" },
	{0x01b4, 0, "y" },
	{0x01b5, 0, "Z" },
	{0x01b6, 0, "z" },
	{0x01b7, 0, "ZH" },
	{0x01b8, 0, "ZH" },
	{0x01b9, 0, "zh" },
	{0x01ba, 0, "zh" },
	{0x01bb, 0, "dz" },
	{0x01bc, 0, "5" },
	{0x01bd, 0, "5" },
	{0x01be, 0, "ts" },
	{0x01bf, 0, "w" },
	{0x01c4, 0, "DZ" },
	{0x01c5, 0, "Dz" },
	{0x01c6, 0, "dz" },
	{0x01c7, 0, "LJ" },
	{0x01c8, 0, "Lj" },
	{0x01c9, 0, "lj" },
	{0x01ca, 0, "NJ" },
	{0x01cb, 0, "Nj" },
	{0x01cc, 0, "nj" },
	{0x01cd, 0, "A" },
	{0x01ce, 0, "a" },
	{0x01cf, 0, "I" },
	{0x01d0, 0, "i" },
	{0x01d1, 0, "O" },
	{0x01d2, 0, "o" },
	{0x01d3, 0, "U" },
	{0x01d4, 0, "u" },
	{0x01d5, 0, "U" },
	{0x01d6, 0, "u" },
	{0x01d7, 0, "U" },
	{0x01d8, 0, "u" },
	{0x01d9, 0, "U" },
	{0x01da, 0, "u" },
	{0x01db, 0, "U" },
	{0x01dc, 0, "u" },
	{0x01dd, 0, "e" },
	{0x01de, 0, "A" },
	{0x01df, 0, "a" },
	{0x01e0, 0, "A" },
	{0x01e1, 0, "a" },
	{0x01e2, 0, "AE" },
	{0x01e3, 0, "ae" },
	{0x01e4, 0, "G" },
	{0x01e5, 0, "g" },
	{0x01e6, 0, "G" },
	{0x01e7, 0, "g" },
	{0x01e8, 0, "K" },
	{0x01e9, 0, "k" },
	{0x01ea, 0, "O" },
	{0x01eb, 0, "o" },
	{0x01ec, 0, "O" },
	{0x01ed, 0, "o" },
	{0x01ee, 0, "ZH" },
	{0x01ef, 0, "zh" },
	{0x01f0, 0, "j" },
	{0x01f1, 0, "DZ" },
	{0x01f2, 0, "Dz" },
	{0x01f3, 0, "dz" },
	{0x01f4, 0, "G" },
	{0x01f5, 0, "g" },
	{0x01f6, 0, "HU" },
	{0x01f7, 0, "W" },
	{0x01f8, 0, "N" },
	{0x01f9, 0, "n" },
	{0x01fa, 0, "A" },
	{0x01fb, 0, "a" },
	{0x01fc, 0, "AE" },
	{0x01fd, 0, "ae" },
	{0x01fe, 0, "O" },
	{0x01ff, 0, "o" },
	{0x0200, 0, "A" },
	{0x0201, 0, "a" },
	{0x0202, 0, "A" },
	{0x0203, 0, "a" },
	{0x0204, 0, "E" },
	{0x0205, 0, "e" },
	{0x0206, 0, "E" },
	{0x0207, 0, "e" },
	{0x0208, 0, "I" },
	{0x0209, 0, "i" },
	{0x020a, 0, "I" },
	{0x020b, 0, "i" },
	{0x020c, 0, "O" },
	{0x020d, 0, "o" },
	{0x020e, 0, "O" },
	{0x020f, 0, "o" },
	{0x0210, 0, "R" },
	{0x0211, 0, "r" },
	{0x0212, 0, "R" },
	{0x0213, 0, "r" },
	{0x0214, 0, "U" },
	{0x0215, 0, "u" },
	{0x0216, 0, "U" },
	{0x0217, 0, "u" },
	{0x0218, 0, "S" },
	{0x0219, 0, "s" },
	{0x021a, 0, "T" },
	{0x021b, 0, "t" },
	{0x021c, 0, "Y" },
	{0x021d, 0, "y" },
	{0x021e, 0, "H" },
	{0x021f, 0, "h" },
	{0x0220, 0, "N" },
	{0x0221, 0, "d" },
	{0x0222, 0, "OU" },
	{0x0223, 0, "ou" },
	{0x0224, 0, "Z" },
	{0x0225, 0, "z" },
	{0x0226, 0, "A" },
	{0x0227, 0, "a" },
	{0x0228, 0, "E" },
	{0x0229, 0, "e" },
	{0x022a, 0, "O" },
	{0x022b, 0, "o" },
	{0x022c, 0, "O" },
	{0x022d, 0, "o" },
	{0x022e, 0, "O" },
	{0x022f, 0, "o" },
	{0x0230, 0, "O" },
	{0x0231, 0, "o" },
	{0x0232, 0, "Y" },
	{0x0233, 0, "y" },
	{0x0234, 0, "l" },
	{0x0235, 0, "n" },
	{0x0236, 0, "t" },
	{0x0237, 0, "j" },
	{0x0238, 0, "db" },
	{0x0239, 0, "qp" },
	{0x023a, 0, "A" },
	{0x023b, 0, "C" },
	{0x023c, 0, "c" },
	{0x023d, 0, "L" },
	{0x023e, 0, "T" },
	{0x023f, 0, "s" },
	{0x0240, 0, "z" },
	{0x0243, 0, "B" },
	{0x0244, 0, "U" },
	{0x0245, 0, "^" },
	{0x0246, 0, "E" },
	{0x0247, 0, "e" },
	{0x0248, 0, "J" },
	{0x0249, 0, "j" },
	{0x024a, 0, "q" },
	{0x024b, 0, "q" },
	{0x024c, 0, "R" },
	{0x024d, 0, "r" },
	{0x024e, 0, "Y" },
	{0x024f, 0, "y" },
	{0x02c6, 0, "^" },
	{0x02dc, 0, "~" },
	{0x03a1, 0, "P" },
	{0x03c1, 0, "p" },
	{0x1952, 0, "n" },
	{0x1959, 0, "u" },
	{0x1963, 0, "l" },
	{0x1971, 0, "e" },
	{0x1974, 0, "c" },
	{0x1e9e, 0, "SS" },
	{0x1e02, 0, "B" },
	{0x1e03, 0, "b" },
	{0x1e0a, 0, "D" },
	{0x1e0B, 0, "d" },
	{0x1e1e, 0, "F" },
	{0x1e1f, 0, "f" },
	{0x1e40, 0, "M" },
	{0x1e41, 0, "m" },
	{0x1e56, 0, "P" },
	{0x1e57, 0, "p" },
	{0x1e60, 0, "S" },
	{0x1e61, 0, "s" },
	{0x1e6a, 0, "T" },
	{0x1e6b, 0, "t" },
	{0x1e80, 0, "W" },
	{0x1e81, 0, "w" },
	{0x1e82, 0, "W" },
	{0x1e83, 0, "w" },
	{0x1e84, 0, "W" },
	{0x1e85, 0, "w" },
	{0x1e9b, 0, "s" },
	{0x1ef2, 0, "Y" },
	{0x1ef3, 0, "y" },
/*	{0x2000, 0, "_" },
	{0x2001, 0, "_" },
	{0x2002, 0, "_" },
	{0x2003, 0, "_" },
	{0x2004, 0, "_" },
	{0x2005, 0, "_" },
	{0x2006, 0, "_" },
	{0x2007, 0, "_" },
	{0x2008, 0, "_" },
	{0x2009, 0, "_" },
	{0x200a, 0, "_" },
	{0x200b, 0, "" },
	{0x200c, 0, "" },
	{0x200d, 0, "" },
	{0x200e, 0, "" },
	{0x200f, 0, "" }, */
	{0x2010, 0, "-" },
	{0x2011, 0, "-" },
	{0x2012, 0, "-" },
	{0x2013, 0, "-" },
	{0x2014, 0, "-" },
	{0x2015, 0, "-" },
	{0x2017, 0, "_" },
/*	{0x2018, 0, "_" },
	{0x2019, 0, "_" },
	{0x201a, 0, "_" },
	{0x201b, 0, "_" },
	{0x201c, 0, "_" },
	{0x201d, 0, "_" },
	{0x201e, 0, "_" },
	{0x201f, 0, "_" }, */
	{0x2020, 0, "-" },
	{0x2021, 0, "--" },
	{0x2022, 0, "." },
	{0x2024, 0, "." },
	{0x2025, 0, ".." },
	{0x2026, 0, "..." },
	{0x2027, 0, "." },
/*	{0x202f, 0, " " },
	{0x2030, 0, "%" },
	{0x2031, 0, "%" },
	{0x2032, 0, "_" },
	{0x2033, 0, "__" },
	{0x2034, 0, "___" },
	{0x2035, 0, "_" },
	{0x2036, 0, "__" },
	{0x2037, 0, "___" }, */
	{0x2038, 0, "_" },
//	{0x203b, 0, "*" },
//	{0x203c, 0, "!!" },
	{0x203d, 0, "_" },
	{0x203e, 0, "-" },
	{0x203f, 0, "_" },
	{0x2040, 0, "-" },
	{0x2041, 0, "_" },
//	{0x2042, 0, "_" },
	{0x2043, 0, "-" },
	{0x2045, 0, "-" },
	{0x2046, 0, "-" },
	{0x2047, 0, "_" },
	{0x2048, 0, "_" },
	{0x2049, 0, "_" },
	{0x204a, 0, "_and_" },
	{0x204b, 0, "_pp_" },
	{0x204e, 0, "_" },
	{0x204f, 0, "_" },
	{0x2051, 0, "_" },
	{0x2052, 0, "_" },
	{0x2053, 0, "_" },
	{0x2054, 0, "_" },
	{0x2055, 0, "_" },
	{0x2056, 0, "..." },
	{0x2057, 0, "_" },
	{0x2058, 0, "...." },
	{0x2059, 0, "....." },
	{0x205a, 0, ".." },
	{0x205b, 0, "...." },
	{0x205d, 0, "_" },
	{0x205e, 0, "_" },
	{0x205f, 0, "_" },
	{0x2060, 0, "_" },
	{0x20a0, 0, "ECU" },
	{0x20a1, 0, "CL" },
	{0x20a2, 0, "Cr" },
	{0x20a3, 0, "FF" },
	{0x20a4, 0, "L" },
	{0x20a5, 0, "mil" },
	{0x20a6, 0, "N" },
	{0x20a7, 0, "Pts" },
	{0x20a8, 0, "Rs" },
	{0x20a9, 0, "W" },
	{0x20aa, 0, "NS" },
	{0x20ab, 0, "D" },
	{0x20ac, 0, "EUR" },
	{0x20ad, 0, "K" },
	{0x20ae, 0, "T" },
	{0x20af, 0, "Dr" },
	{0x20b1, 0, "s" },
	{0x20b2, 0, "C" },
	{0x20bb, 0, "M" },
	{0x20bf, 0, "_btc_" },
	{0x2122, 0, "_tm_" },
	{0x10348, 0, "hu" },
	{0x1f37a, 0, "_beer_" },
	{0x02bc, 0, "_"},
	{0, 0, NULL},
};

#endif /* CLEANER_TABLE_H */
