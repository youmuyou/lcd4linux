/* $Id: XWindow.c,v 1.6 2000/03/26 19:03:52 reinelt Exp $
 *
 * driver for X11
 *
 * Copyright 1999, 2000 by Michael Reinelt (reinelt@eunet.at)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 *
 * $Log: XWindow.c,v $
 * Revision 1.6  2000/03/26 19:03:52  reinelt
 *
 * more Pixmap renaming
 * quoting of '#' in config file
 *
 * Revision 1.5  2000/03/26 18:46:28  reinelt
 *
 * bug in pixmap.c that leaded to empty bars fixed
 * name conflicts with X11 resolved
 *
 * Revision 1.4  2000/03/25 05:50:43  reinelt
 *
 * memory leak in Raster_flush closed
 * driver family logic changed
 *
 * Revision 1.3  2000/03/24 11:36:56  reinelt
 *
 * new syntax for raster configuration
 * changed XRES and YRES to be configurable
 * PPM driver works nice
 *
 * Revision 1.2  2000/03/23 07:24:48  reinelt
 *
 * PPM driver up and running (but slow!)
 *
 * Revision 1.1  2000/03/22 15:36:21  reinelt
 *
 * added '-l' switch (list drivers)
 * generic pixmap driver added
 * X11 Framework done
 *
 */

/* 
 *
 * exported fuctions:
 *
 * struct LCD XWindow[]
 *
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "cfg.h"
#include "display.h"
#include "pixmap.h"

#define BARS ( BAR_L | BAR_R | BAR_U | BAR_D | BAR_H2 | BAR_V2 )

static int pixel=-1;
static int pgap=0;
static int rgap=0;
static int cgap=0;
static int border=0;

static int foreground=0;
static int halfground=0;
static int background=0;

static LCD Lcd;

int X_flush (void)
{
  int xsize, ysize, row, col;
  unsigned char *buffer;
  unsigned char R[3], G[3], B[3];
  
  xsize=2*border+(Lcd.cols-1)*cgap+Lcd.cols*Lcd.xres*(pixel+pgap);
  ysize=2*border+(Lcd.rows-1)*rgap+Lcd.rows*Lcd.yres*(pixel+pgap);
  
  if ((buffer=malloc(xsize*ysize*sizeof(*buffer)))==NULL)
    return -1;

  memset (buffer, 0, xsize*ysize*sizeof(*buffer));
  
  for (row=0; row<Lcd.rows*Lcd.yres; row++) {
    int y=border+(row/Lcd.yres)*rgap+row*(pixel+pgap);
    for (col=0; col<Lcd.cols*Lcd.xres; col++) {
      int x=border+(col/Lcd.xres)*cgap+col*(pixel+pgap);
      int a, b;
      for (a=0; a<pixel; a++)
	for (b=0; b<pixel; b++)
	  buffer[y*xsize+x+a*xsize+b]=LCDpixmap[row*Lcd.cols*Lcd.xres+col]+1;
    }
  }
  
  R[0]=0xff&background>>16;
  G[0]=0xff&background>>8;
  B[0]=0xff&background;

  R[1]=0xff&halfground>>16;
  G[1]=0xff&halfground>>8;
  B[1]=0xff&halfground;

  R[2]=0xff&foreground>>16;
  G[2]=0xff&foreground>>8;
  B[2]=0xff&foreground;

  for (row=0; row<ysize; row++) {
    for (col=0; col<xsize; col++) {
      int i=buffer[row*xsize+col];
      printf("%d.%d.%d ", R[i], G[i], B[i]);
    }
  }

  return 0;
}

int X_clear (void)
{
  if (pix_clear()!=0) 
    return -1;

  if (X_flush()!=0) 
    return -1;

  return 0;
}

int X_init (LCD *Self)
{
  char *s;
  int rows=-1, cols=-1;
  int xres=1, yres=-1;
  
  if (sscanf(s=cfg_get("size")?:"20x4", "%dx%d", &cols, &rows)!=2 || rows<1 || cols<1) {
    fprintf (stderr, "Raster: bad size '%s'\n", s);
    return -1;
  }

  if (sscanf(s=cfg_get("font")?:"5x8", "%dx%d", &xres, &yres)!=2 || xres<5 || yres<7) {
    fprintf (stderr, "Raster: bad font '%s'\n", s);
    return -1;
  }

  if (sscanf(s=cfg_get("pixel")?:"4+1", "%d+%d", &pixel, &pgap)!=2 || pixel<1 || pgap<0) {
    fprintf (stderr, "Raster: bad pixel '%s'\n", s);
    return -1;
  }

  if (sscanf(s=cfg_get("gap")?:"3x3", "%dx%d", &rgap, &cgap)!=2 || rgap<0 || cgap<0) {
    fprintf (stderr, "Raster: bad gap '%s'\n", s);
    return -1;
  }

  border=atoi(cfg_get("border")?:"0");

  foreground=strtol(cfg_get("foreground")?:"000000", NULL, 16);
  halfground=strtol(cfg_get("halfground")?:"ffffff", NULL, 16);
  background=strtol(cfg_get("background")?:"ffffff", NULL, 16);

  if (pix_init (rows, cols, xres, yres)!=0) {
    fprintf (stderr, "Raster: pix_init(%d, %d, %d, %d) failed\n", rows, cols, xres, yres);
    return -1;
  }

  Self->rows=rows;
  Self->cols=cols;
  Self->xres=xres;
  Self->yres=yres;
  Lcd=*Self;

  pix_clear();
  return 0;
}

int X_put (int row, int col, char *text)
{
  return pix_put (row, col, text);
}

int X_bar (int type, int row, int col, int max, int len1, int len2)
{
  return pix_bar (type, row, col, max, len1, len2);
}


LCD XWindow[] = {
  { "X11", 0, 0, 0, 0, BARS, X_init, X_clear, X_put, X_bar, X_flush },
  { NULL }
};
