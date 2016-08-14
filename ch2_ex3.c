//
// 2016-08-14:geg
//
// Exercise program 3 on page 33.
//
// Text: "C Programming : A Modern Approach"
// Edition: 2nd (August 2008)
// Author: K. N. King
//
// Copyright (c) 2016 G Geiger
//
// Condense the dweight.c program (on page 20) by
//  1. replace the declarations for height,length and width with initializers
//  2. remove the weight variable instead putting a statement in printf
//
// gcc -O -Wall -pedantic -ansi -std=c99 -o ch2_ex1.bin ch2_ex1.c
//
 

#include <stdio.h>

int main (void)
{
  int height = 8, width = 10, length = 12;
  
  printf("Dimensions: %dx%dx%d\n",length,width,height);

  printf("Volume: %d\n",length*width*height);

  printf("Dimensional weight (pounds) %d\n",((length*width*height+165)/166));

  return (0);
}
