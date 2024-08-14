/*
 *	texback - 
 *		make a two colored textured background.
 *
 *				Paul Haeberli - 1984
 *
 */
#include "gl.h"
#include "device.h"
#include "port.h"

short tex[][16] = {

   {0x5555, 0xaaaa, 0x5555, 0xaaaa,	/* 0 */
    0x5555, 0xaaaa, 0x5555, 0xaaaa,
    0x5555, 0xaaaa, 0x5555, 0xaaaa,
    0x5555, 0xaaaa, 0x5555, 0xaaaa,},

   {0x2222, 0x8888, 0x2222, 0x8888,	/* 1 */
    0x2222, 0x8888, 0x2222, 0x8888,
    0x2222, 0x8888, 0x2222, 0x8888,
    0x2222, 0x8888, 0x2222, 0x8888,},

   {0x0303, 0x0303, 0x3030, 0x3030,	/* 2 */
    0x0303, 0x0303, 0x3030, 0x3030,
    0x0303, 0x0303, 0x3030, 0x3030,
    0x0303, 0x0303, 0x3030, 0x3030,},

   {0x1111, 0x1111, 0x2222, 0x2222,	/* 3 diag lines to left */
    0x4444, 0x4444, 0x8888, 0x8888,
    0x1111, 0x1111, 0x2222, 0x2222,
    0x4444, 0x4444, 0x8888, 0x8888,},

   {0x8888, 0x8888, 0x4444, 0x4444,	/* 4 diag lines to right */
    0x2222, 0x2222, 0x1111, 0x1111,
    0x8888, 0x8888, 0x4444, 0x4444,
    0x2222, 0x2222, 0x1111, 0x1111,},

   {0x8080, 0x8080, 0x4040, 0x4040,	/* 5 diag lines to right */
    0x2020, 0x2020, 0x1010, 0x1010,
    0x0808, 0x0808, 0x0404, 0x0404,
    0x0202, 0x0202, 0x0101, 0x0101,},

   {0x0101, 0x0101, 0x0202, 0x0202,	/* 6 diag lines to left */
    0x0404, 0x0404, 0x0808, 0x0808,
    0x1010, 0x1010, 0x2020, 0x2020,
    0x4040, 0x4040, 0x8080, 0x8080,},

   {0x8181, 0x8181, 0x4242, 0x4242,	/* 7 diag lines both ways */
    0x2424, 0x2424, 0x1818, 0x1818,
    0x1818, 0x1818, 0x2424, 0x2424,
    0x4242, 0x4242, 0x8181, 0x8181,},

   {0xffff, 0x8181, 0x4242, 0x4242,	/* 8 triangles */
    0x2424, 0x2424, 0x1818, 0x1818,
    0xffff, 0x1818, 0x2424, 0x2424,
    0x4242, 0x4242, 0x8181, 0x8181,},

   {0x8d8d, 0x0c0c, 0xc0c0, 0xd8d8,	/* 9 wiggley pattern */
    0x1b1b, 0x0303, 0x3030, 0xb1b1,
    0x8d8d, 0x0c0c, 0xc0c0, 0xd8d8,
    0x1b1b, 0x0303, 0x3030, 0xb1b1,},

   {0x2222, 0x4444, 0x1111, 0x8888,	/* 10 diag weave pattern */
    0x2222, 0x4444, 0x1111, 0x8888,
    0x2222, 0x4444, 0x1111, 0x8888,
    0x2222, 0x4444, 0x1111, 0x8888,},

   {0x1111, 0x1111, 0x1111, 0xffff,	/* 11 4x4 grid pattern */
    0x1111, 0x1111, 0x1111, 0xffff,
    0x1111, 0x1111, 0x1111, 0xffff,
    0x1111, 0x1111, 0x1111, 0xffff,},

   {0x1010, 0x1010, 0x1010, 0x1010,	/* 12 8x8 grid pattern */
    0x1010, 0x1010, 0x1010, 0xffff,
    0x1010, 0x1010, 0x1010, 0x1010,
    0x1010, 0x1010, 0x1010, 0xffff,},

   {0x0100, 0x0100, 0x0100, 0x0100,	/* 13 16x16 grid pattern */
    0x0100, 0x0100, 0x0100, 0x0100,
    0x0100, 0x0100, 0x0100, 0x0100,
    0x0100, 0x0100, 0x0100, 0xffff,},

   {0x4e4e, 0xe4e4, 0x7070, 0x3838,	/* 14 wide weave pattern */
    0x9c9c, 0xc9c9, 0x8383, 0x0707,
    0x4e4e, 0xe4e4, 0x7070, 0x3838,
    0x9c9c, 0xc9c9, 0x8383, 0x0707,},

   {0x0909, 0x0202, 0x0404, 0x0909,	/* 15 diag twill pattern */
    0x9090, 0x2020, 0x4040, 0x9090,
    0x0909, 0x0404, 0x0202, 0x0909,
    0x9090, 0x4040, 0x2020, 0x9090,},

   {0x1111, 0x2222, 0x4444, 0x8888,	/* 16 diag twill pattern */
    0x2222, 0x1111, 0x8888, 0x4444,
    0x1111, 0x2222, 0x4444, 0x8888,
    0x2222, 0x1111, 0x8888, 0x4444,},

   {0xcccc, 0xcccc, 0x6666, 0x6666,	/* 17 diag lines to right 2 on 2 off */
    0x3333, 0x3333, 0x9999, 0x9999,
    0xcccc, 0xcccc, 0x6666, 0x6666,
    0x3333, 0x3333, 0x9999, 0x9999,},

   {0x1111, 0x1111, 0x4444, 0x4444,	/* 18 office talk grey */
    0x1111, 0x1111, 0x4444, 0x4444,
    0x1111, 0x1111, 0x4444, 04444,
    0x1111, 0x1111, 0x4444, 0x4444,},
};

main(argc,argv)
int argc;
char **argv;
{
    short val;
    int i, texno;

    texno = 4;
    if (argc>1) 
	texno = atoi(argv[1]);
    imakebackground();
    winopen("texback");
    defpattern(2,16,tex[texno]);	/* define a pattern */
    for (i=0; i<16; i++) 
	tex[texno][i] = ~tex[texno][i];
    defpattern(3,16,tex[texno]);	/* and its inverse */
    background();
    while (1) {
	if (qread(&val) == REDRAW)
	    background();
    }
}

background()
{
    color(BACKGROUND1);
    setpattern(2);
    clear();

    color(BACKGROUND2);
    setpattern(3);
    clear();
}
