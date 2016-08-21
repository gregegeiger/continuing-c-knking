//
// 2016-08-21:geg
//
// Programming project 4 on page 34.
//
// Text: "C Programming : A Modern Approach"
// Edition: 2nd (August 2008)
// Author: K. N. King
//
// Copyright (c) 2016 G Geiger
//
// 5% tax calculator.
//
// http://knking.com/books/c2/answers/index.html
//
#include <stdio.h>
#define TAX_RATE 0.05f

int main (void)
{
  float pre_tax_amount;

  printf ("Enter an amount: ");

  scanf ("%f",&pre_tax_amount);
  
  printf ("With tax added:  %.2f\n",pre_tax_amount*(1 + TAX_RATE));

  return (0);
}
