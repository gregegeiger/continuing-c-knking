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
// Page 56 describes the Universal Product Code (UPC) standard
// used in the US
//
// The UPC is grouped in 4 groups:
//   1 char - number system digit
//   5 char - manufacturer
//   5 char - product code
//   1 char - check digit
//  Ex: 03600029145x where x is the check digit
//
//  Sum the odd-numbered digits (0 + 6 + 0 + 2 + 1 + 5 = 14).
//  Multiply the result by 3 (14 × 3 = 42).
//  Add the even-numbered digits (42 + (3 + 0 + 0 + 9 + 4) = 58).
//  Find the result modulo 10 (58 mod 10 = 8).
//  If the result is not 0, subtract the result from 10 (10 − 8 = 2).
//  x = 2
//
//
//  The text simplifies the calculation (no zero check on result) by
//  changing it to :
//
//  9 - ( (TOTAL - 1) % 10 )

//
//  Sum the odd-numbered digits
//  Multiply the result by 3
//  Add the even-numbered digits - this is the TOTAL
//  Subtract 1
//  Calculate the remainder modulo 10
//  Subtract this result from 9
//
//  
// Prompt user for the first eleven digits of a UPC code and then
// display the check digit
//
// http://knking.com/books/c2/answers/index.html
//
#include <stdio.h>

int main (void)
{
  int i1, i2,i3,i4,i5,i6, i7,i8,i9,i10,i11;
  int check_digit;
  
  //
  //
  //
  printf ("Enter first 11 digits of a UPC: ");
  
  scanf ("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&i1,&i2,&i3,&i4,&i5,&i6,&i7,&i8,&i9,&i10,&i11);
  //
  // Calculate the check digit
  //
  check_digit = 9 - ((3*i1 + i2 + 3*i3 + i4 + 3*i5 + i6 + 3*i7 + i8 + 3*i9 + i10 + 3*i11 - 1) % 10);

  printf ("The check digit is: %1d\n",check_digit);
  
  return (0);
}
