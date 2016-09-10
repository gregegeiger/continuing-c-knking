//
// 2016-09-10:geg
//
// Programming project 2 on page 71.
//
// Text: "C Programming : A Modern Approach"
// Edition: 2nd (August 2008)
// Author: K. N. King
//
// Copyright (c) 2016 G Geiger
//
//  
// Prompt user for a three digit number.
// Print this value with the digits reversed.
//
// http://knking.com/books/c2/answers/index.html
//
#include <stdio.h>

int main (void)
{
  int original;
  int hundreds;
  int tens;
  int ones;
  
  //
  //
  //
  printf ("Enter a three digit number: ");
  
  scanf ("%3d",&original);
  hundreds = original/100;
  original -= hundreds * 100;
  
  tens = original/10;
  original -= tens * 10;
  
  ones = original;
  
  printf ("The reversal is : %1d%1d%1d\n",ones,tens,hundreds);
  
  return (0);
}
