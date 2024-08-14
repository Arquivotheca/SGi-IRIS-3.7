/*
 * $Source: /d2/3.7/src/stand/lib/gl/RCS/glxfont.c,v $
 * $Revision: 1.1 $
 * $Date: 89/03/27 17:15:23 $
 */
# include "glx.h"

GlyphVec glx_MapChar[] =
{
/* 0x00 */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/*
** 0x01 - this non printing character is used as
**	  stipple pattern and the erase char
*/
#ifdef notdef
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },
#endif
{ 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,  },

/* 0x02 */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x03 */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x04 */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x05 */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x06 */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x07 */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x08 */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x09 */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x0a */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x0b */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x0c */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x0d */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x0e */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x0f */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x10 */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x11 */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x12 */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x13 */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x14 */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x15 */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x16 */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x17 */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x18 */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x19 */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x1a */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x1b */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x1c */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x1d */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x1e */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x1f */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x20 ( ) */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x21 (!) */
{ 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x18, 0x18, 
  0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00,  },

/* 0x22 (") */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x6c, 0x6c, 0x6c, 0x00, 0x00, 0x00,  },

/* 0x23 (#) */
{ 0x00, 0x00, 0x00, 0xd8, 0x48, 0xfe, 0x48, 0x24, 
  0xfe, 0x24, 0x36, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x24 ($) */
{ 0x00, 0x00, 0x10, 0x10, 0x7c, 0xd6, 0x1e, 0x1c, 
  0x70, 0xf0, 0xd6, 0x7c, 0x10, 0x10, 0x00, 0x00,  },

/* 0x25 (%) */
{ 0x00, 0x00, 0x00, 0xcc, 0xd2, 0x72, 0x6c, 0x30, 
  0x18, 0x6c, 0x9c, 0x96, 0x66, 0x00, 0x00, 0x00,  },

/* 0x26 (&) */
{ 0x00, 0x00, 0x00, 0x76, 0xce, 0xcc, 0xda, 0x76, 
  0x36, 0x68, 0x6c, 0x2c, 0x38, 0x00, 0x00, 0x00,  },

/* 0x27 (') */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x20, 0x30, 0x30, 0x30, 0x00, 0x00, 0x00,  },

/* 0x28 (() */
{ 0x00, 0x00, 0x08, 0x18, 0x30, 0x30, 0x30, 0x30, 
  0x30, 0x30, 0x30, 0x30, 0x18, 0x08, 0x00, 0x00,  },

/* 0x29 ()) */
{ 0x00, 0x00, 0x10, 0x18, 0x0c, 0x0c, 0x0c, 0x0c, 
  0x0c, 0x0c, 0x0c, 0x0c, 0x18, 0x10, 0x00, 0x00,  },

/* 0x2a (*) */
{ 0x00, 0x00, 0x00, 0x00, 0x18, 0x5a, 0x7e, 0x3c, 
  0x7e, 0x5a, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x2b (+) */
{ 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x7e, 
  0x7e, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00,  },

/* 0x2c (,) */
{ 0x00, 0x00, 0x60, 0x30, 0x30, 0x30, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x2d (-) */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 
  0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x2e (.) */
{ 0x00, 0x00, 0x00, 0x30, 0x30, 0x30, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x2f (/) */
{ 0x00, 0x00, 0x00, 0xc0, 0xc0, 0x60, 0x60, 0x30, 
  0x30, 0x18, 0x18, 0x0c, 0x0c, 0x00, 0x00, 0x00,  },

/* 0x30 (0) */
{ 0x00, 0x00, 0x00, 0xfc, 0xc6, 0xc6, 0xc6, 0xc6, 
  0xc6, 0xc6, 0xc6, 0xc6, 0x7e, 0x00, 0x00, 0x00,  },

/* 0x31 (1) */
{ 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x18, 0x18, 
  0x18, 0x18, 0x18, 0x78, 0x18, 0x00, 0x00, 0x00,  },

/* 0x32 (2) */
{ 0x00, 0x00, 0x00, 0xfe, 0xc0, 0x60, 0x30, 0x18, 
  0x0c, 0x06, 0xc6, 0xc6, 0x7c, 0x00, 0x00, 0x00,  },

/* 0x33 (3) */
{ 0x00, 0x00, 0x00, 0x7c, 0xc6, 0xc6, 0x06, 0x06, 
  0x1c, 0x06, 0xc6, 0xc6, 0x7c, 0x00, 0x00, 0x00,  },

/* 0x34 (4) */
{ 0x00, 0x00, 0x00, 0x06, 0x06, 0x06, 0xfe, 0x86, 
  0x46, 0x26, 0x16, 0x0e, 0x06, 0x00, 0x00, 0x00,  },

/* 0x35 (5) */
{ 0x00, 0x00, 0x00, 0x7c, 0xc6, 0x06, 0x06, 0x06, 
  0xfc, 0xc0, 0xc0, 0xc0, 0xfe, 0x00, 0x00, 0x00,  },

/* 0x36 (6) */
{ 0x00, 0x00, 0x00, 0x7c, 0xc6, 0xc6, 0xc6, 0xc6, 
  0xfc, 0xc0, 0xc0, 0xc6, 0x7c, 0x00, 0x00, 0x00,  },

/* 0x37 (7) */
{ 0x00, 0x00, 0x00, 0x30, 0x30, 0x30, 0x30, 0x30, 
  0x18, 0x0c, 0x06, 0x06, 0xfe, 0x00, 0x00, 0x00,  },

/* 0x38 (8) */
{ 0x00, 0x00, 0x00, 0x7c, 0xc6, 0xc6, 0xc6, 0xc6, 
  0x7c, 0xc6, 0xc6, 0xc6, 0x7c, 0x00, 0x00, 0x00,  },

/* 0x39 (9) */
{ 0x00, 0x00, 0x00, 0x7c, 0xc6, 0x06, 0x06, 0x7e, 
  0xc6, 0xc6, 0xc6, 0xc6, 0x7c, 0x00, 0x00, 0x00,  },

/* 0x3a (:) */
{ 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x00, 0x00, 
  0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x3b (;) */
{ 0x00, 0x00, 0x60, 0x30, 0x30, 0x30, 0x00, 0x00, 
  0x30, 0x30, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x3c (<) */
{ 0x00, 0x00, 0x00, 0x04, 0x0c, 0x18, 0x30, 0x60, 
  0x30, 0x18, 0x0c, 0x04, 0x00, 0x00, 0x00, 0x00,  },

/* 0x3d (=) */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xfc, 0x00, 
  0x00, 0xfc, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x3e (>) */
{ 0x00, 0x00, 0x00, 0x80, 0xc0, 0x60, 0x30, 0x18, 
  0x30, 0x60, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00,  },

/* 0x3f (?) */
{ 0x00, 0x00, 0x00, 0x30, 0x00, 0x30, 0x30, 0x18, 
  0xcc, 0xcc, 0xcc, 0x78, 0x00, 0x00, 0x00, 0x00,  },

/* 0x40 (@) */
{ 0x00, 0x00, 0x00, 0x7c, 0xc2, 0xdc, 0xe6, 0xe6, 
  0xe6, 0xe6, 0xde, 0xc6, 0x7c, 0x00, 0x00, 0x00,  },

/* 0x41 (A) */
{ 0x00, 0x00, 0x00, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 
  0xfe, 0xc6, 0xc6, 0xc6, 0x7c, 0x00, 0x00, 0x00,  },

/* 0x42 (B) */
{ 0x00, 0x00, 0x00, 0xfc, 0xc6, 0xc6, 0xc6, 0xc6, 
  0xfc, 0xc6, 0xc6, 0xc6, 0xfc, 0x00, 0x00, 0x00,  },

/* 0x43 (C) */
{ 0x00, 0x00, 0x00, 0x7c, 0xc6, 0xc6, 0xc0, 0xc0, 
  0xc0, 0xc0, 0xc6, 0xc6, 0x7c, 0x00, 0x00, 0x00,  },

/* 0x44 (D) */
{ 0x00, 0x00, 0x00, 0xfc, 0xc6, 0xc6, 0xc6, 0xc6, 
  0xc6, 0xc6, 0xc6, 0xc6, 0xfc, 0x00, 0x00, 0x00,  },

/* 0x45 (E) */
{ 0x00, 0x00, 0x00, 0xfe, 0xc0, 0xc0, 0xc0, 0xc0, 
  0xf8, 0xc0, 0xc0, 0xc0, 0xfe, 0x00, 0x00, 0x00,  },

/* 0x46 (F) */
{ 0x00, 0x00, 0x00, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 
  0xf8, 0xc0, 0xc0, 0xc0, 0xfe, 0x00, 0x00, 0x00,  },

/* 0x47 (G) */
{ 0x00, 0x00, 0x00, 0x7c, 0xc6, 0xc6, 0xc6, 0xde, 
  0xc0, 0xc0, 0xc6, 0xc6, 0x7c, 0x00, 0x00, 0x00,  },

/* 0x48 (H) */
{ 0x00, 0x00, 0x00, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 
  0xfe, 0xc6, 0xc6, 0xc6, 0xc6, 0x00, 0x00, 0x00,  },

/* 0x49 (I) */
{ 0x00, 0x00, 0x00, 0x3c, 0x18, 0x18, 0x18, 0x18, 
  0x18, 0x18, 0x18, 0x18, 0x3c, 0x00, 0x00, 0x00,  },

/* 0x4a (J) */
{ 0x00, 0x00, 0x00, 0x7c, 0xc6, 0xc6, 0xc6, 0x06, 
  0x06, 0x06, 0x06, 0x06, 0x06, 0x00, 0x00, 0x00,  },

/* 0x4b (K) */
{ 0x00, 0x00, 0x00, 0xc2, 0xc6, 0xcc, 0xd8, 0xf0, 
  0xf0, 0xd8, 0xcc, 0xc6, 0xc2, 0x00, 0x00, 0x00,  },

/* 0x4c (L) */
{ 0x00, 0x00, 0x00, 0xfe, 0xc0, 0xc0, 0xc0, 0xc0, 
  0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x00, 0x00, 0x00,  },

/* 0x4d (M) */
{ 0x00, 0x00, 0x00, 0x86, 0x86, 0x86, 0x86, 0x86, 
  0x96, 0xbe, 0xee, 0xc6, 0x82, 0x00, 0x00, 0x00,  },

/* 0x4e (N) */
{ 0x00, 0x00, 0x00, 0x82, 0x82, 0x86, 0x8e, 0x9e, 
  0xba, 0xf2, 0xe2, 0xc2, 0x82, 0x00, 0x00, 0x00,  },

/* 0x4f (O) */
{ 0x00, 0x00, 0x00, 0x7c, 0xc6, 0xc6, 0xc6, 0xc6, 
  0xc6, 0xc6, 0xc6, 0xc6, 0x7c, 0x00, 0x00, 0x00,  },

/* 0x50 (P) */
{ 0x00, 0x00, 0x00, 0xc0, 0xc0, 0xc0, 0xc0, 0xfc, 
  0xc6, 0xc6, 0xc6, 0xc6, 0xfc, 0x00, 0x00, 0x00,  },

/* 0x51 (Q) */
{ 0x00, 0x06, 0x06, 0x7c, 0xce, 0xc6, 0xc6, 0xc6, 
  0xc6, 0xc6, 0xc6, 0xc6, 0x7c, 0x00, 0x00, 0x00,  },

/* 0x52 (R) */
{ 0x00, 0x00, 0x00, 0xc6, 0xc6, 0xc6, 0xcc, 0xfc, 
  0xc6, 0xc6, 0xc6, 0xc6, 0xfc, 0x00, 0x00, 0x00,  },

/* 0x53 (S) */
{ 0x00, 0x00, 0x00, 0x7c, 0xc6, 0xc6, 0x06, 0x1c, 
  0x78, 0xe0, 0xc6, 0xc6, 0x7c, 0x00, 0x00, 0x00,  },

/* 0x54 (T) */
{ 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x18, 0x18, 
  0x18, 0x18, 0x18, 0x18, 0xff, 0x00, 0x00, 0x00,  },

/* 0x55 (U) */
{ 0x00, 0x00, 0x00, 0x7c, 0xc6, 0xc6, 0xc6, 0xc6, 
  0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0x00, 0x00, 0x00,  },

/* 0x56 (V) */
{ 0x00, 0x00, 0x00, 0x70, 0xf8, 0xcc, 0xc6, 0xc6, 
  0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0x00, 0x00, 0x00,  },

/* 0x57 (W) */
{ 0x00, 0x00, 0x00, 0x44, 0xee, 0xfe, 0xfa, 0xd2, 
  0xc2, 0xc2, 0xc2, 0xc2, 0xc2, 0x00, 0x00, 0x00,  },

/* 0x58 (X) */
{ 0x00, 0x00, 0x00, 0xc6, 0xc6, 0xc6, 0x6c, 0x38, 
  0x38, 0x6c, 0xc6, 0xc6, 0xc6, 0x00, 0x00, 0x00,  },

/* 0x59 (Y) */
{ 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x18, 0x3c, 
  0x66, 0xc3, 0xc3, 0xc3, 0xc3, 0x00, 0x00, 0x00,  },

/* 0x5a (Z) */
{ 0x00, 0x00, 0x00, 0xfe, 0xc0, 0xc0, 0x60, 0x30, 
  0x18, 0x0c, 0x06, 0x06, 0xfe, 0x00, 0x00, 0x00,  },

/* 0x5b ([) */
{ 0x00, 0x00, 0x78, 0x60, 0x60, 0x60, 0x60, 0x60, 
  0x60, 0x60, 0x60, 0x60, 0x60, 0x78, 0x00, 0x00,  },

/* 0x5c (\) */
{ 0x00, 0x00, 0x00, 0x0c, 0x0c, 0x18, 0x18, 0x30, 
  0x30, 0x60, 0x60, 0xc0, 0xc0, 0x00, 0x00, 0x00,  },

/* 0x5d (]) */
{ 0x00, 0x00, 0x3c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 
  0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x3c, 0x00, 0x00,  },

/* 0x5e (^) */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xc6, 0x6c, 0x38, 0x00, 0x00, 0x00,  },

/* 0x5f (_) */
{ 0x00, 0x00, 0xfe, 0xfe, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x60 (`) */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x08, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00,  },

/* 0x61 (a) */
{ 0x00, 0x00, 0x00, 0x76, 0xce, 0xc6, 0xc6, 0x7e, 
  0xc6, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x62 (b) */
{ 0x00, 0x00, 0x00, 0xfc, 0xc6, 0xc6, 0xc6, 0xc6, 
  0xe6, 0xdc, 0xc0, 0xc0, 0xc0, 0x00, 0x00, 0x00,  },

/* 0x63 (c) */
{ 0x00, 0x00, 0x00, 0x7c, 0xc6, 0xc0, 0xc0, 0xc0, 
  0xc6, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x64 (d) */
{ 0x00, 0x00, 0x00, 0x76, 0xce, 0xc6, 0xc6, 0xc6, 
  0xc6, 0x7e, 0x06, 0x06, 0x06, 0x00, 0x00, 0x00,  },

/* 0x65 (e) */
{ 0x00, 0x00, 0x00, 0x7c, 0xc6, 0xc0, 0xfe, 0xc6, 
  0xc6, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x66 (f) */
{ 0x00, 0x00, 0x00, 0x30, 0x30, 0x30, 0x30, 0x30, 
  0x30, 0x7c, 0x30, 0x30, 0x1c, 0x00, 0x00, 0x00,  },

/* 0x67 (g) */
{ 0x00, 0x7c, 0xc6, 0x06, 0x76, 0xce, 0xc6, 0xc6, 
  0xc6, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x68 (h) */
{ 0x00, 0x00, 0x00, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 
  0xe6, 0xdc, 0xc0, 0xc0, 0xc0, 0x00, 0x00, 0x00,  },

/* 0x69 (i) */
{ 0x00, 0x00, 0x00, 0x3c, 0x18, 0x18, 0x18, 0x18, 
  0x18, 0x38, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00,  },

/* 0x6a (j) */
{ 0x00, 0x70, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 
  0x18, 0x38, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00,  },

/* 0x6b (k) */
{ 0x00, 0x00, 0x00, 0xc6, 0xcc, 0xd8, 0xf0, 0xf0, 
  0xd8, 0xce, 0xc0, 0xc0, 0xc0, 0x00, 0x00, 0x00,  },

/* 0x6c (l) */
{ 0x00, 0x00, 0x00, 0x3c, 0x18, 0x18, 0x18, 0x18, 
  0x18, 0x18, 0x18, 0x18, 0x38, 0x00, 0x00, 0x00,  },

/* 0x6d (m) */
{ 0x00, 0x00, 0x00, 0xc6, 0xc6, 0xc6, 0xd6, 0xfe, 
  0xee, 0xc6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x6e (n) */
{ 0x00, 0x00, 0x00, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 
  0xe6, 0xdc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x6f (o) */
{ 0x00, 0x00, 0x00, 0x7c, 0xc6, 0xc6, 0xc6, 0xc6, 
  0xc6, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x70 (p) */
{ 0x00, 0xc0, 0xc0, 0xc0, 0xfc, 0xc6, 0xc6, 0xc6, 
  0xe6, 0xdc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x71 (q) */
{ 0x00, 0x06, 0x06, 0x06, 0x76, 0xce, 0xc6, 0xc6, 
  0xc6, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x72 (r) */
{ 0x00, 0x00, 0x00, 0x60, 0x60, 0x60, 0x60, 0x60, 
  0x73, 0x6f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x73 (s) */
{ 0x00, 0x00, 0x00, 0x7c, 0xc6, 0x0e, 0x38, 0xe0, 
  0xc6, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x74 (t) */
{ 0x00, 0x00, 0x00, 0x1c, 0x30, 0x30, 0x30, 0x30, 
  0x30, 0xfc, 0x30, 0x30, 0x30, 0x00, 0x00, 0x00,  },

/* 0x75 (u) */
{ 0x00, 0x00, 0x00, 0x76, 0xce, 0xc6, 0xc6, 0xc6, 
  0xc6, 0xc6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x76 (v) */
{ 0x00, 0x00, 0x00, 0xf0, 0xc8, 0xc4, 0xc6, 0xc6, 
  0xc6, 0xc6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x77 (w) */
{ 0x00, 0x00, 0x00, 0xc6, 0xee, 0xfe, 0xd6, 0xc6, 
  0xc6, 0xc6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x78 (x) */
{ 0x00, 0x00, 0x00, 0xc6, 0xc6, 0x6c, 0x38, 0x6c, 
  0xc6, 0xc6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x79 (y) */
{ 0x00, 0x7c, 0xc6, 0x06, 0x76, 0xce, 0xc6, 0xc6, 
  0xc6, 0xc6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x7a (z) */
{ 0x00, 0x00, 0x00, 0xfe, 0xc0, 0x60, 0x38, 0x0c, 
  0x06, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x7b ({) */
{ 0x00, 0x00, 0x18, 0x30, 0x30, 0x30, 0x30, 0x60, 
  0x60, 0x30, 0x30, 0x30, 0x30, 0x18, 0x00, 0x00,  },

/* 0x7c (|) */
{ 0x00, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 
  0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x00, 0x00,  },

/* 0x7d (}) */
{ 0x00, 0x00, 0x60, 0x30, 0x30, 0x30, 0x30, 0x18, 
  0x18, 0x30, 0x30, 0x30, 0x30, 0x60, 0x00, 0x00,  },

/* 0x7e (~) */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
  0xce, 0x72, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x7f */
{ 0x00, 0x00, 0xff, 0x81, 0x81, 0x81, 0xe7, 0xa5, 
  0x99, 0xa5, 0xe7, 0x81, 0x81, 0xff, 0x00, 0x00,  },

/* 0x80 */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x81 */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x82 */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x83 */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x84 */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x85 */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x86 */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x87 */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x88 */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x89 */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x8a */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x8b */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/*
** 0x8c - this here character is the cursor
*/
#ifdef notdef
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },
#endif
{ 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,  },

/* 0x8d */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x8e */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x8f */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x90 */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x91 */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x92 */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x93 */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x94 */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x95 */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x96 */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x97 */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x98 */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x99 */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x9a */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x9b */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x9c */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x9d */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x9e */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0x9f */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0xa0 */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0xa1 */
{ 0x00, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 
  0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0xa2 */
{ 0x00, 0x10, 0x10, 0x7c, 0xd6, 0xd0, 0xd0, 0xd0, 
  0xd6, 0x7c, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00,  },

/* 0xa3 */
{ 0x00, 0x00, 0x00, 0xfe, 0x60, 0x60, 0x60, 0x60, 
  0xf8, 0x60, 0x60, 0x6c, 0x38, 0x00, 0x00, 0x00,  },

/* 0xa4 */
{ 0x00, 0x00, 0x00, 0x82, 0xfe, 0x6c, 0xc6, 0xc6, 
  0x6c, 0xfe, 0x82, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0xa5 */
{ 0x00, 0x00, 0x00, 0x18, 0x18, 0x7e, 0x18, 0x7e, 
  0x3c, 0x66, 0xc3, 0xc3, 0xc3, 0x00, 0x00, 0x00,  },

/* 0xa6 */
{ 0x00, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 
  0x00, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00,  },

/* 0xa7 */
{ 0x00, 0x7c, 0xc6, 0xc6, 0x3c, 0x7e, 0xc6, 0xc6, 
  0xfc, 0x78, 0xc6, 0xc6, 0x7c, 0x00, 0x00, 0x00,  },

/* 0xa8 */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x36, 0x36, 0x00, 0x00,  },

/* 0xa9 */
{ 0x00, 0x00, 0x00, 0x3c, 0x42, 0x9d, 0xb5, 0xb1, 
  0xb5, 0x9d, 0x42, 0x3c, 0x00, 0x00, 0x00, 0x00,  },

/* 0xaa */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x36, 
  0x6e, 0x66, 0x3e, 0x66, 0x3c, 0x00, 0x00, 0x00,  },

/* 0xab */
{ 0x00, 0x00, 0x00, 0x00, 0x1b, 0x36, 0x6c, 0xd8, 
  0x6c, 0x36, 0x1b, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0xac */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x06, 0x06, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0xad */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7c, 
  0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0xae */
{ 0x00, 0x00, 0x00, 0x3c, 0x42, 0xb7, 0xb5, 0xbd, 
  0xb7, 0xbd, 0x42, 0x3c, 0x00, 0x00, 0x00, 0x00,  },

/* 0xaf */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3c, 0x3c, 0x00, 0x00, 0x00,  },

/* 0xb0 */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x1c, 0x14, 0x1c, 0x00, 0x00, 0x00,  },

/* 0xb1 */
{ 0x00, 0x00, 0x00, 0x7e, 0x7e, 0x00, 0x18, 0x18, 
  0x7e, 0x7e, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00,  },

/* 0xb2 */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x7c, 0x60, 0x38, 0x0c, 0x6c, 0x38, 0x00, 0x00,  },

/* 0xb3 */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x38, 0x6c, 0x0c, 0x38, 0x0c, 0x7c, 0x00, 0x00,  },

/* 0xb4 */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x18, 0x0c, 0x06, 0x00, 0x00,  },

/* 0xb5 */
{ 0x00, 0x80, 0xc0, 0xdb, 0x7e, 0x66, 0x66, 0x66, 
  0x66, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0xb6 */
{ 0x00, 0x00, 0x00, 0x05, 0x05, 0x05, 0x3d, 0x65, 
  0x65, 0x65, 0x65, 0x65, 0x3d, 0x00, 0x00, 0x00,  },

/* 0xb7 */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x3e, 0x3e, 
  0x3e, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0xb8 */
{ 0x6c, 0x0c, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0xb9 */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 
  0x0c, 0x0c, 0x0c, 0x0c, 0x3c, 0x0c, 0x00, 0x00,  },

/* 0xba */
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x3c, 
  0x66, 0x66, 0x66, 0x66, 0x3c, 0x00, 0x00, 0x00,  },

/* 0xbb */
{ 0x00, 0x00, 0x00, 0x00, 0xd8, 0x6c, 0x36, 0x1b, 
  0x36, 0x6c, 0xd8, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0xbc */
{ 0x00, 0x00, 0x00, 0x63, 0x63, 0x3f, 0x3b, 0x7f, 
  0x7f, 0x6f, 0x6c, 0x66, 0xe6, 0x60, 0x00, 0x00,  },

/* 0xbd */
{ 0x00, 0x00, 0x00, 0xdf, 0xd8, 0x6e, 0x33, 0x7b, 
  0x7e, 0x6c, 0x6c, 0x66, 0xe6, 0x60, 0x00, 0x00,  },

/* 0xbe */
{ 0x00, 0x00, 0x00, 0x63, 0x63, 0x3f, 0x3b, 0x1f, 
  0x7f, 0xdf, 0x1c, 0x76, 0x1a, 0xf8, 0x00, 0x00,  },

/* 0xbf */
{ 0x00, 0x3c, 0x66, 0x66, 0x66, 0x30, 0x18, 0x18, 
  0x18, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0xc0 */
{ 0x00, 0x00, 0x00, 0xc6, 0xc6, 0xc6, 0xc6, 0xfe, 
  0xc6, 0xc6, 0x7c, 0x10, 0x30, 0x60, 0x00, 0x00,  },

/* 0xc1 */
{ 0x00, 0x00, 0x00, 0xc6, 0xc6, 0xc6, 0xc6, 0xfe, 
  0xc6, 0xc6, 0x7c, 0x10, 0x18, 0x0c, 0x00, 0x00,  },

/* 0xc2 */
{ 0x00, 0x00, 0x00, 0xc6, 0xc6, 0xc6, 0xc6, 0xfe, 
  0xc6, 0xc6, 0x7c, 0x10, 0x6c, 0x38, 0x10, 0x00,  },

/* 0xc3 */
{ 0x00, 0x00, 0x00, 0xc6, 0xc6, 0xc6, 0xc6, 0xfe, 
  0xc6, 0xc6, 0x7c, 0x00, 0xd8, 0x7c, 0x24, 0x00,  },

/* 0xc4 */
{ 0x00, 0x00, 0x00, 0xc6, 0xc6, 0xc6, 0xc6, 0xfe, 
  0xc6, 0xc6, 0x7c, 0x00, 0x6c, 0x6c, 0x00, 0x00,  },

/* 0xc5 */
{ 0x00, 0x00, 0x00, 0xc6, 0xc6, 0xc6, 0xc6, 0xfe, 
  0xc6, 0xc6, 0x7c, 0x38, 0x6c, 0x38, 0x00, 0x00,  },

/* 0xc6 */
{ 0x00, 0x00, 0x00, 0xcf, 0xcc, 0xcc, 0xcc, 0xcc, 
  0xff, 0xcc, 0xcc, 0x7c, 0x37, 0x00, 0x00, 0x00,  },

/* 0xc7 */
{ 0x6c, 0x0c, 0x18, 0x7c, 0xc6, 0xc6, 0xc0, 0xc0, 
  0xc0, 0xc0, 0xc6, 0xc6, 0x7c, 0x00, 0x00, 0x00,  },

/* 0xc8 */
{ 0x00, 0x00, 0x00, 0xfe, 0xc0, 0xc0, 0xc0, 0xf8, 
  0xc0, 0xc0, 0xfe, 0x10, 0x30, 0x60, 0x00, 0x00,  },

/* 0xc9 */
{ 0x00, 0x00, 0x00, 0xfe, 0xc0, 0xc0, 0xc0, 0xf8, 
  0xc0, 0xc0, 0xfe, 0x10, 0x18, 0x0c, 0x00, 0x00,  },

/* 0xca */
{ 0x00, 0x00, 0x00, 0xfe, 0xc0, 0xc0, 0xc0, 0xf8, 
  0xc0, 0xc0, 0xfe, 0x00, 0x36, 0x1c, 0x08, 0x00,  },

/* 0xcb */
{ 0x00, 0x00, 0x00, 0xfe, 0xc0, 0xc0, 0xc0, 0xf8, 
  0xc0, 0xc0, 0xfe, 0x00, 0x6c, 0x6c, 0x00, 0x00,  },

/* 0xcc */
{ 0x00, 0x00, 0x00, 0x3c, 0x18, 0x18, 0x18, 0x18, 
  0x18, 0x18, 0x3c, 0x08, 0x18, 0x30, 0x00, 0x00,  },

/* 0xcd */
{ 0x00, 0x00, 0x00, 0x3c, 0x18, 0x18, 0x18, 0x18, 
  0x18, 0x18, 0x3c, 0x10, 0x18, 0x0c, 0x00, 0x00,  },

/* 0xce */
{ 0x00, 0x00, 0x00, 0x3c, 0x18, 0x18, 0x18, 0x18, 
  0x18, 0x18, 0x3c, 0x00, 0x6c, 0x38, 0x10, 0x00,  },

/* 0xcf */
{ 0x00, 0x00, 0x00, 0x3c, 0x18, 0x18, 0x18, 0x18, 
  0x18, 0x18, 0x3c, 0x00, 0x6c, 0x6c, 0x00, 0x00,  },

/* 0xd0 */
{ 0x00, 0x00, 0x00, 0x7c, 0x66, 0x66, 0x66, 0xf6, 
  0xf6, 0x66, 0x66, 0x66, 0x7c, 0x00, 0x00, 0x00,  },

/* 0xd1 */
{ 0x00, 0x00, 0x00, 0x82, 0x86, 0x8e, 0x9e, 0xba, 
  0xf2, 0xe2, 0xc2, 0x00, 0xd8, 0x7c, 0x24, 0x00,  },

/* 0xd2 */
{ 0x00, 0x00, 0x00, 0x7c, 0xc6, 0xc6, 0xc6, 0xc6, 
  0xc6, 0xc6, 0x7c, 0x10, 0x30, 0x60, 0x00, 0x00,  },

/* 0xd3 */
{ 0x00, 0x00, 0x00, 0x7c, 0xc6, 0xc6, 0xc6, 0xc6, 
  0xc6, 0xc6, 0x7c, 0x10, 0x18, 0x0c, 0x00, 0x00,  },

/* 0xd4 */
{ 0x00, 0x00, 0x00, 0x7c, 0xc6, 0xc6, 0xc6, 0xc6, 
  0xc6, 0xc6, 0x7c, 0x00, 0x6c, 0x38, 0x10, 0x00,  },

/* 0xd5 */
{ 0x00, 0x00, 0x00, 0x7c, 0xc6, 0xc6, 0xc6, 0xc6, 
  0xc6, 0xc6, 0x7c, 0x00, 0xd8, 0x7c, 0x24, 0x00,  },

/* 0xd6 */
{ 0x00, 0x00, 0x00, 0x7c, 0xc6, 0xc6, 0xc6, 0xc6, 
  0xc6, 0xc6, 0x7c, 0x00, 0x6c, 0x6c, 0x00, 0x00,  },

/* 0xd7 */
{ 0x00, 0x00, 0x00, 0x00, 0xc6, 0xee, 0x7c, 0x38, 
  0x7c, 0xee, 0xc6, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0xd8 */
{ 0x00, 0x00, 0xc0, 0x7c, 0xe6, 0xe6, 0xf6, 0xd6, 
  0xd6, 0xde, 0xce, 0xce, 0x7c, 0x06, 0x00, 0x00,  },

/* 0xd9 */
{ 0x00, 0x00, 0x00, 0x7c, 0xc6, 0xc6, 0xc6, 0xc6, 
  0xc6, 0xc6, 0xc6, 0x18, 0x30, 0x60, 0x00, 0x00,  },

/* 0xda */
{ 0x00, 0x00, 0x00, 0x7c, 0xc6, 0xc6, 0xc6, 0xc6, 
  0xc6, 0xc6, 0xc6, 0x30, 0x18, 0x0c, 0x00, 0x00,  },

/* 0xdb */
{ 0x00, 0x00, 0x00, 0x7c, 0xc6, 0xc6, 0xc6, 0xc6, 
  0xc6, 0xc6, 0xc6, 0x00, 0x6c, 0x38, 0x10, 0x00,  },

/* 0xdc */
{ 0x00, 0x00, 0x00, 0x7c, 0xc6, 0xc6, 0xc6, 0xc6, 
  0xc6, 0xc6, 0xc6, 0x00, 0x6c, 0x6c, 0x00, 0x00,  },

/* 0xdd */
{ 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x3c, 0x66, 
  0xc3, 0xc3, 0xc3, 0x30, 0x18, 0x0c, 0x00, 0x00,  },

/* 0xde */
{ 0x00, 0x00, 0x00, 0x60, 0x60, 0x60, 0x7c, 0x66, 
  0x66, 0x66, 0x7c, 0x60, 0x60, 0x60, 0x00, 0x00,  },

/* 0xdf */
{ 0x00, 0x00, 0x00, 0xdc, 0xd6, 0xc6, 0xc6, 0xcc, 
  0xd8, 0xd8, 0xcc, 0xcc, 0xf8, 0x00, 0x00, 0x00,  },

/* 0xe0 */
{ 0x00, 0x00, 0x00, 0x76, 0xce, 0xc6, 0xc6, 0x7e, 
  0xc6, 0x7c, 0x00, 0x18, 0x30, 0x60, 0x00, 0x00,  },

/* 0xe1 */
{ 0x00, 0x00, 0x00, 0x76, 0xce, 0xc6, 0xc6, 0x7e, 
  0xc6, 0x7c, 0x00, 0x30, 0x18, 0x0c, 0x00, 0x00,  },

/* 0xe2 */
{ 0x00, 0x00, 0x00, 0x76, 0xce, 0xc6, 0xc6, 0x7e, 
  0xc6, 0x7c, 0x00, 0x6c, 0x38, 0x10, 0x00, 0x00,  },

/* 0xe3 */
{ 0x00, 0x00, 0x00, 0x76, 0xce, 0xc6, 0xc6, 0x7e, 
  0xc6, 0x7c, 0x00, 0xd8, 0x7c, 0x24, 0x00, 0x00,  },

/* 0xe4 */
{ 0x00, 0x00, 0x00, 0x76, 0xce, 0xc6, 0xc6, 0x7e, 
  0xc6, 0x7c, 0x00, 0x00, 0x6c, 0x6c, 0x00, 0x00,  },

/* 0xe5 */
{ 0x00, 0x00, 0x00, 0x76, 0xce, 0xc6, 0xc6, 0x7e, 
  0xc6, 0x7c, 0x38, 0x28, 0x38, 0x00, 0x00, 0x00,  },

/* 0xe6 */
{ 0x00, 0x00, 0x00, 0x76, 0xdf, 0xd8, 0xdf, 0x7b, 
  0xdb, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0xe7 */
{ 0x6c, 0x0c, 0x18, 0x7c, 0xc6, 0xc0, 0xc0, 0xc0, 
  0xc6, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0xe8 */
{ 0x00, 0x00, 0x00, 0x7c, 0xc6, 0xc0, 0xfe, 0xc6, 
  0xc6, 0x7c, 0x00, 0x18, 0x30, 0x60, 0x00, 0x00,  },

/* 0xe9 */
{ 0x00, 0x00, 0x00, 0x7c, 0xc6, 0xc0, 0xfe, 0xc6, 
  0xc6, 0x7c, 0x00, 0x30, 0x18, 0x0c, 0x00, 0x00,  },

/* 0xea */
{ 0x00, 0x00, 0x00, 0x7c, 0xc6, 0xc0, 0xfe, 0xc6, 
  0xc6, 0x7c, 0x00, 0x6c, 0x38, 0x10, 0x00, 0x00,  },

/* 0xeb */
{ 0x00, 0x00, 0x00, 0x7c, 0xc6, 0xc0, 0xfe, 0xc6, 
  0xc6, 0x7c, 0x00, 0x00, 0x6c, 0x6c, 0x00, 0x00,  },

/* 0xec */
{ 0x00, 0x00, 0x00, 0x3c, 0x18, 0x18, 0x18, 0x18, 
  0x18, 0x38, 0x00, 0x0c, 0x18, 0x30, 0x00, 0x00,  },

/* 0xed */
{ 0x00, 0x00, 0x00, 0x3c, 0x18, 0x18, 0x18, 0x18, 
  0x18, 0x38, 0x00, 0x30, 0x18, 0x0c, 0x00, 0x00,  },

/* 0xee */
{ 0x00, 0x00, 0x00, 0x3c, 0x18, 0x18, 0x18, 0x18, 
  0x18, 0x38, 0x00, 0x6c, 0x38, 0x10, 0x00, 0x00,  },

/* 0xef */
{ 0x00, 0x00, 0x00, 0x3c, 0x18, 0x18, 0x18, 0x18, 
  0x18, 0x38, 0x00, 0x00, 0x6c, 0x6c, 0x00, 0x00,  },

/* 0xf0 */
{ 0x00, 0x00, 0x00, 0x7c, 0xc6, 0xc6, 0xc6, 0xc6, 
  0x6c, 0x1c, 0xd8, 0x70, 0x78, 0xc8, 0x00, 0x00,  },

/* 0xf1 */
{ 0x00, 0x00, 0x00, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 
  0xe6, 0xdc, 0x00, 0xd8, 0x7c, 0x24, 0x00, 0x00,  },

/* 0xf2 */
{ 0x00, 0x00, 0x00, 0x7c, 0xc6, 0xc6, 0xc6, 0xc6, 
  0xc6, 0x7c, 0x00, 0x18, 0x30, 0x60, 0x00, 0x00,  },

/* 0xf3 */
{ 0x00, 0x00, 0x00, 0x7c, 0xc6, 0xc6, 0xc6, 0xc6, 
  0xc6, 0x7c, 0x00, 0x30, 0x18, 0x0c, 0x00, 0x00,  },

/* 0xf4 */
{ 0x00, 0x00, 0x00, 0x7c, 0xc6, 0xc6, 0xc6, 0xc6, 
  0xc6, 0x7c, 0x00, 0x6c, 0x38, 0x10, 0x00, 0x00,  },

/* 0xf5 */
{ 0x00, 0x00, 0x00, 0x7c, 0xc6, 0xc6, 0xc6, 0xc6, 
  0xc6, 0x7c, 0x00, 0xd8, 0x7c, 0x24, 0x00, 0x00,  },

/* 0xf6 */
{ 0x00, 0x00, 0x00, 0x7c, 0xc6, 0xc6, 0xc6, 0xc6, 
  0xc6, 0x7c, 0x00, 0x00, 0x6c, 0x6c, 0x00, 0x00,  },

/* 0xf7 */
{ 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x7e, 
  0x7e, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00,  },

/* 0xf8 */
{ 0x00, 0x00, 0xc0, 0x7c, 0xe6, 0xf6, 0xd6, 0xde, 
  0xce, 0x7c, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00,  },

/* 0xf9 */
{ 0x00, 0x00, 0x00, 0x76, 0xce, 0xc6, 0xc6, 0xc6, 
  0xc6, 0xc6, 0x00, 0x18, 0x30, 0x60, 0x00, 0x00,  },

/* 0xfa */
{ 0x00, 0x00, 0x00, 0x76, 0xce, 0xc6, 0xc6, 0xc6, 
  0xc6, 0xc6, 0x00, 0x30, 0x18, 0x0c, 0x00, 0x00,  },

/* 0xfb */
{ 0x00, 0x00, 0x00, 0x76, 0xce, 0xc6, 0xc6, 0xc6, 
  0xc6, 0xc6, 0x00, 0x6c, 0x38, 0x10, 0x00, 0x00,  },

/* 0xfc */
{ 0x00, 0x00, 0x00, 0x76, 0xce, 0xc6, 0xc6, 0xc6, 
  0xc6, 0xc6, 0x00, 0x00, 0x6c, 0x6c, 0x00, 0x00,  },

/* 0xfd */
{ 0x00, 0x7c, 0xc6, 0x06, 0x76, 0xce, 0xc6, 0xc6, 
  0xc6, 0xc6, 0x00, 0x30, 0x18, 0x0c, 0x00, 0x00,  },

/* 0xfe */
{ 0x00, 0x60, 0x60, 0x60, 0x7c, 0x66, 0x66, 0x66, 
  0x7c, 0x60, 0x60, 0x60, 0x00, 0x00, 0x00, 0x00,  },

/* 0xff */
{ 0x00, 0x7c, 0xc6, 0x06, 0x76, 0xce, 0xc6, 0xc6, 
  0xc6, 0xc6, 0x00, 0x00, 0x6c, 0x6c, 0x00, 0x00,  },
};
