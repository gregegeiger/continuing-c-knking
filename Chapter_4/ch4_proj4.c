//
// 2016-09-03:geg
//
// Programming project 4 on page 71.
//
// Text: "C Programming : A Modern Approach"
// Edition: 2nd (August 2008)
// Author: K. N. King
//
// Copyright (c) 2016 G Geiger
//
// Prompt user for an integer.
// Print the base 8 representation.
//
// http://knking.com/books/c2/answers/index.html
//
#include <stdio.h>

int main (void)
{
  int original;
  int octal_0,octal_1,octal_2,octal_3,octal_4;
  
  //
  //
  //
  printf ("Enter a number between 0 and 32767: ");
  
  scanf ("%d",&original);
  //
  // Calculate the base 8 equivalent
  //
  octal_0 = original % 8;
  
  original /= 8;
  //  printf ("%d\n",original);
  octal_1 = original % 8;
  
  original /= 8;
  //  printf ("%d\n",original);
  octal_2 = original % 8;
  
  original /= 8;
  //  printf ("%d\n",original);
  octal_3 = original % 8;
  
  original /= 8;
  //  printf ("%d\n",original);
  octal_4 = original;
  
  printf ("In octal, your number is: %1d%1d%1d%1d%1d\n",octal_4,octal_3,octal_2,octal_1,octal_0);
  
  return (0);
}
