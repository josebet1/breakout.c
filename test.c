#define _XOPEN_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Stanford Portable Library
#include "gevents.h"
#include "gobjects.h"
#include "gwindow.h"
 
 
 int main(void) {
      GWindow gw = newGWindow(500, 300);
      printf("This program draws a red rectangle at (0, 0).\n")
      GRect rect = newGRect(0, 0, 200, 100);
      setFilled(rect, true);
      setColor(rect, "RED");
      add(gw, rect);
   }
