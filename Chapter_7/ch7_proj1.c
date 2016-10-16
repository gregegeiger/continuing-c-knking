//
// 2016-10-16:geg
//
// Programming project 1 on page 157.
//
// Text: "C Programming : A Modern Approach"
// Edition: 2nd (August 2008)
// Author: K. N. King
//
// Copyright (c) 2016 G Geiger
//
// Program square2.c on page will fail if i * i exceeds the size of int
// Determine the smallest value of n that causes this program to fail.
//
// The program square2.c appears on page 110 in section 6.3
//
// http://knking.com/books/c2/answers/index.html
//
#include <stdio.h>

int main (void)
{
  int i, n;

  printf("Size of int: %d\n",sizeof(int));

  printf("This program prints a table of squares.\n");

  printf("Enter number of entries in table:");
  scanf("%d",&n);
  
  //
  // Because the int size is 4 bytes the largest value
  // that int can contain is 2**31 - 1 = 2,147,483,647
  //
  // The square root of this value is 46,340.95
  // So the smallest value of n that causes this program to fail is 46341
  //
  // This is the output:
  // 
  //  46337:      2147117569
  //  46338:      2147210244
  //  46339:      2147302921
  //  46340:      2147395600
  //  46341:     -2147479015
  //

  for (i = 1 ; i <= n ; i++) {

    printf("%16d:%16d\n",i, i * i);

  }
  return (0);
}
