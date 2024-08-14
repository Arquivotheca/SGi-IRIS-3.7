/* mregedraws.c		*/
/*   used in gecmd.c	*/

#include "geofdef.h"

unsigned short drawtests[][256] = {

    {		/* setup ---	gt0			*/

	7,				/* clear hit */
	0x208,0x16,1,0xdf,		/* config bits		*/
	0x1108,0x17,0x100,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
	    0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
					/* mask load (poly stip) */
	0x308,0x21,0x100, 0x19,0,	/* poly stipple, linestyle select */
	0x608,0x2,0,0,0,0x3ff,0x3ff,0,		/* Mask List	*/
	0x108,0x14,0,			/* color */
	0x108,0x15,0xffff,	/* new wrtenab	*/
	0x408,0x39,0,0,0x3ff,0x3ff,	/* clear */
	GEOF
    },

    {			/*   gt1  --  multi viewports, wide lines   */

	0x608,2,0,0,0,0x100,0x124,1,
	0x608,2,1,0,0x200,0x100,0x3ff,1,
	0x608,2,1,0x200,0,0x3ff,0x124,1,
	0x608,2,1,0x200,0x200,0x3ff,0x3ff,1,
	0x108,0x19,5,
     GEOF},

    {		/* vectors - colors- gt2 	*/

	0x208,0x16,1,0xdf,		/* swizzle!		*/
	0x208,0x20,0,0xffff,		/* repeat/stipple	*/
	0x108,0x14,1,			/* color 1		*/
	0x208,0x10,0,0,			/* move			*/
	0x208,0x11,0x100,0x300,		/* draw			*/
	0x108,0x14,2,			/* color 2		*/
	0x208,0x10,0,0,			/* move			*/
	0x208,0x11,0x300,0x100,		/* draw			*/
	0x108,0x14,3,			/* color 3		*/
	0x208,0x10,0,0x300,		/* move			*/
	0x208,0x11,0x100,00,		/* draw			*/
	0x108,0x14,4,			/* color 4		*/
	0x208,0x10,00,0x300,		/* move			*/
	0x208,0x11,0x300,0x200,		/* draw			*/
	0x108,0x14,5,			/* color 5		*/
	0x208,0x10,0x300,0x300,		/* move			*/
	0x208,0x11,00,0x200,		/* draw			*/
	0x108,0x14,6,			/* color 6		*/
	0x208,0x10,0x300,0x300,		/* move			*/
	0x208,0x11,0x200,00,		/* draw			*/
	0x108,0x14,7,			/* color 7		*/
	0x208,0x10,0x300,00,		/* move			*/
	0x208,0x11,00,0x100,		/* draw			*/
	0x208,0x20,1,0xff3c,		/* new stipple		*/
	0x208,0x10,0x300,00,		/* move			*/
	0x208,0x11,0x200,0x300,		/* draw			*/
	GEOF
    },

    {		/*  characters -- gt3		*/
	0x108,0x14,0,				/* black	*/
	0x408,0x39,0,0,0x3ff,0x200,		/* clear screen	*/
	0x108,0x14,1,				/* color	*/
	0x308,0x1a,0x12,0x220,0x120,		/* charposn	*/
	0x2408,0x17,0x200,			/* mask loads	*/
		0xfc00,0xc600,0x0600,0x0600,0x7c00,0xc000,0xc600,0x7c00,
		0x7c00,0x8600,0x8600,0x7e00,0x7c00,0x4000,0x7c00,0xc600,
				0xc600,0xc600,0x7c00,0x0600,
		0xf000,0x6000,0x6000,0x6000,0x6000,0x6000,0x6000,0xe000,
				0,0x6000,0x6000,
		0,0,0,0,
	0x1808,0x1c,0x200,0x708,0,8,		/* draw 's'	*/
		0x208,0x70c,0x00fd,8,		/* draw 'g'	*/
		0x214,0x40b,0,5,		/* draw 'i'	*/
		0x21f,0x804,0,5,		/* draw ' '	*/
		0x200,0x708,0,8,		/* draw 's'	*/
		0x21f,0x804,0,5,		/* draw ' '	*/
	0xd08,0x17,0x300,			/* fixchar test */
		0xff00,0x8100,0x8100,0xbd00,0xa500,0x8100,
		0x8100,0x8100,0xa500,0xa500,0x8100,0x8100,
	0x308,0x2c,0xb,7,11,
	0x308,0x2d,0x300,0x300,0x300,
	GEOF
    },

    {		/* cursor, pixels -- gt4		*/
	0x308,0x28,0x300,0x400,0x20,	/* copy font */
	0x308,0x2d,0x400,0x400,0x400,	/* draw more chars */

	0x1108,0x17,0x200,0x06c0,0x1ef0,0x7efc,0x66cc,	/* cursor glyph */
			0x3ef8,0xcfe6,0xf6de,0xdc76,
			0xdc76,0xf39e,0xcfe6,0x3ef8,
			0x66cc,0x7efc,0x1ef0,0x06c0,
						/* mask load */
	0x708,0x1d,0x200,1,0xdf,0,0x7,0xffff,0xffff,	/* select cursor */
	0x208,0x1e,0x200,0x200,			/* draw cursor	 */
	0x8,0x1f,				/* undraw cursor */
	0x208,0x1e,0x240,0x280,			/* draw cursor   */
	0x308,0x1a,0x12,0x140,0x120,		/* position	 */
	8,8,GEOF
    },

    {			/* circle   ----	gt5		*/

	0x108,0x15,0xffff,
	0x208,0x30,0x90,0,  0x208,0x31,0x60,0x10,  0x208,0x31,0x30,0x30,
	0x208,0x31,0x10,0x60,  0x208,0x31,0,0x90,  0x208,0x31,0,0xd0,
	0x208,0x31,0x10,0x100,  0x208,0x31,0x30,0x130,  0x208,0x31,0x60,0x150,
	0x208,0x31,0x090,0x160,  0x208,0x31,0xd0,0x160,0x208,0x31,0x100,0x150,
	0x208,0x31,0x130,0x130,  0x208,0x31,0x150,0x100,0x208,0x31,0x160,0xd0,
	0x208,0x31,0x160,0x90,   0x208,0x31,0x150,0x60, 0x208,0x31,0x130,0x30,
	0x208,0x31,0x100,0x10,   0x208,0x31,0xd0,0,
	0x8,0x33,
	0x8,0x8,GEOF
    },

      {			/* lines around circle -- gt6		*/

	0x208,0x20,0,0xffff,
	0x208,0x10,0x90,0,  0x208,0x11,0x60,0x10,  0x208,0x11,0x30,0x30,
	0x208,0x11,0x10,0x60,  0x208,0x11,0,0x90,  0x208,0x11,0,0xd0,
	0x208,0x11,0x10,0x100,  0x208,0x11,0x30,0x130,  0x208,0x11,0x60,0x150,
	0x208,0x11,0x090,0x160,  0x208,0x11,0xd0,0x160,0x208,0x11,0x100,0x150,
	0x208,0x11,0x130,0x130,  0x208,0x11,0x150,0x100,0x208,0x11,0x160,0xd0,
	0x208,0x11,0x160,0x90,   0x208,0x11,0x150,0x60, 0x208,0x11,0x130,0x30,
	0x208,0x11,0x100,0x10,   0x208,0x11,0xd0,0,
	8,8,GEOF
      },

    {			/* gt7 -- copypixels test */

	0x108,0x14,1,
	0x408,0x39,0,0,0x300,0x100,
	0x208,0x16,1,0xf,
	0x508,0x3d,0x80,0x80,0x180,0x180,0xe0,
	0x508,0x3d,0x282,0x80,0x182,0x181,0x2de,
	0x508,0x3d,0x80,0x80,0x184,0x182,0xd8,
	0x508,0x3d,0x284,0x80,0x186,0x183,0x2d8,
	0x208,0x16,1,0xdf,
	GEOF
    },

    {			/* gt8 -- pixel test */
	0x508,0x16,1,0xcf, 0x2f,1,0x3ff,		/* config, setup */
	0x308,0x1a,0x12,0x140,0x140,
	0x808,0xd,1,1,1,1,2,2,2,2,
	0x808,0xd,1,1,1,1,2,2,2,2,
	0x808,0xd,1,1,1,1,3,3,3,3,
	0x808,0xd,1,1,1,1,3,3,3,3,
	0x308,0x1a,0x12,0x140,0x140,
	0x108,0xe,16, 0x108,0xe,16, 8,8,  /* reposition and read */
	GEOF
    },

    {			/* gt9 -- depth-cued vectors */
	0x908,0x24,0x4000,0,8,0xfe,0,0,  0x16,0x5,0xdf,	/* setup */
	0x208,0x20,0,0xffff,
	0x408,0x10,0,0,0,0,
	0x408,0x11,0x300,0x300,0,0x300,
	0x408,0x11,0x300,0,0,0,
	0x408,0x11,0,0x300,0,0x300,
	0x408,0x11,0,0,0,0,
	GEOF
    },

    {			/*   gta  --  feedback, hit mode test   */

	0x808,0x25,1,2,3,4,5,EOF1,EOF2,EOF3,		/* feedback	*/
	0x308,0x1a,0x12,0x1122,0x3344,			/* char posn	*/
	8,0x27,						/* read char posn */
	0x308,6,0x2e, 0x29,0x1111,			/* init hit mode,stk*/
	0x308,0x29,0x2211,0x2a,0x2222,			/* push, load name */
	0x208,0xff11,0x29,0x3333,			/* draw, push	*/
	0x208,0x12,0x2b,8,				/* point, pop,psthru*/
	0x308,0x31,0x2b,8,7,				/* polydraw,pop,ptu*/
     GEOF},

    {			/* gtb -- z buffered poly test */
	0x608, 0x24,0x4000,0,8,0xfe,0,0xff,
	0xc08, 0xa,0x7ff,0xffff, 0x14,7,  0x34,0,1, 0x39,0,0,0x3ff,0x3ff,
	/* clear Z buffer */
	0x108,0x14,1,
	0x408,0x30,0,0x180,0,0,
	0x408,0x31,0x80,0x100,0,0xfe,
	0x408,0x31,0x300,0x180,0,0xfe,
	0x408,0x31,0x280,0x200,0,0,
	8,0x33,
	0x108,0x14,6,
	0x408,0x30,0x180,0x300,0,0,
	0x408,0x31,0x200,0x280,0,0xfe,
	0x408,0x31,0x180,0,0,0xfe,
	0x408,0x31,0x100,0x80,0,0,
	8,0x33,
    GEOF},
};


unsigned short expect[][64] = {
/*  format: {n, data, data, ...,data}	  :n = # of interrupts */
{0},	/* gt0 */
{0},	/* gt1 */
{0},	/* gt2 */
{0},	/* gt3 */
{0},	/* gt4 */
{0},	/* gt5 */
{0},	/* gt6 */
{0},	/* gt7 */

{36,3,16,1,1,1,1,2,2,2,2,1,1,1,1,2,2,2,2,		/* gt8 */
    3,16,1,1,1,1,3,3,3,3,1,1,1,1,3,3,3,3
},

{0},	/* gt9 */

{36 ,0x14,8,1,2,3,4,5,EOF1,EOF2,EOF3,	/* gta */
	7,0x1122,0x3344,0xffff,
    1,0x3f01,0,2,0x3ff,0x1111,0x2222,
    1,1,0,3,0x3ff,0x1111,0x2222,0x3333,
    1,1,0,2,0x3ff,0x1111,0x2222
},
{ 0},	/* gtb */

};
