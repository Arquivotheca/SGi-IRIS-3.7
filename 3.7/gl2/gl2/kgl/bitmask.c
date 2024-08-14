/**************************************************************************
 *									  *
 * 		 Copyright (C) 1984, Silicon Graphics, Inc.		  *
 *									  *
 *  These coded instructions, statements, and computer programs  contain  *
 *  unpublished  proprietary  information of Silicon Graphics, Inc., and  *
 *  are protected by Federal copyright law.  They  may  not be disclosed  *
 *  to  third  parties  or copied or duplicated in any form, in whole or  *
 *  in part, without the prior written consent of Silicon Graphics, Inc.  *
 *									  *
 **************************************************************************/

unsigned short leftmask[] = {
	0xffff,
	0x7fff,
	0x3fff,
	0x1fff,
	0x0fff,
	0x07ff,
	0x03ff,
	0x01ff,
	0x00ff,
	0x007f,
	0x003f,
	0x001f,
	0x000f,
	0x0007,
	0x0003,
	0x0001,

};

unsigned short rightmask[] = {
	0x8000,
	0xc000,
	0xe000,
	0xf000,
	0xf800,
	0xfc00,
	0xfe00,
	0xff00,
	0xff80,
	0xffc0,
	0xffe0,
	0xfff0,
	0xfff8,
	0xfffc,
	0xfffe,
	0xffff,
};
