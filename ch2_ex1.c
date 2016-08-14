//
// 2016-08-14:geg
//
// Exercise program 1 on page 33.
//
// Text: "C Programming : A Modern Approach"
// Edition: 2nd (August 2008)
// Author: K. N. King
//
// Copyright (c) 2016 G Geiger
//
// gcc -O -Wall -pedantic -ansi -std=c99 -o ch2_ex1.bin ch2_ex1.c
//
// Text mentions turning on compiler options to enable warnings
// Doing this will generate this warning
//
// greg@leytegulf:~/git/continuing-c-knking$ gcc -O -Wall ch2_ex1.c
// ch2_ex1.c: In function ‘main’:
// ch2_ex1.c:21:1: warning: control reaches end of non-void function [-Wreturn-type]
// }
// ^
 

#include <stdio.h>

int main (void)
{
  printf("hello, world\n");
  // the following line was not in the original exercise code and had to be
  // added to clear the compiler warning.
  return (0);
}
