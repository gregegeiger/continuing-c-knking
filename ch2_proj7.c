//
// 2016-08-21:geg
//
// Programming project 7 on page 34.
//
// Text: "C Programming : A Modern Approach"
// Edition: 2nd (August 2008)
// Author: K. N. King
//
// Copyright (c) 2016 G Geiger
//
// Convert a value into 20s, 10, 5s and 1s
// http://knking.com/books/c2/answers/index.html
//
#include <stdio.h>

int main (void)
{
  int amount,bill_20,bill_10,bill_5,bill_1;

  printf ("Enter the amount: ");

  scanf ("%d",&amount);
  //
  // I don't need an integer function since the variable amount is declared
  // as an integer.
  //
  printf ("This amount is %d twenties, ",amount/20);
  //
  // This looks weird but the result of this step is equivalent
  // to amount modulo 20.
  //
  amount = amount - 20 * (amount/20);
  
  printf ("%d tens, ",amount/10);

  amount = amount - 10 * (amount/10);
  
  printf ("%d fives, ",amount/5);

  amount = amount - 5 * (amount/5);
  
  printf ("and %d ones.\n",amount);

  return (0);
}
