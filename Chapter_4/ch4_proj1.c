//
// 2016-09-10:geg
//
// Programming project 1 on page 71.
//
// Text: "C Programming : A Modern Approach"
// Edition: 2nd (August 2008)
// Author: K. N. King
//
// Copyright (c) 2016 G Geiger
//
//  
// Prompt user for a two digit number.
// Print this value with the digits reversed.
//
// http://knking.com/books/c2/answers/index.html
//
#include <stdio.h>

int main (void)
{
  int original;
  int tens;
  int ones;
  
  //
  //
  //
  printf ("Enter a two digit number: ");
  
  scanf ("%2d",&original);
  tens = original/10;
  ones = original%10;
  printf ("The reversal is : %1d%1d\n",ones,tens);
  
  return (0);
}
