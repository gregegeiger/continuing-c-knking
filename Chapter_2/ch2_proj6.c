//
// 2016-08-21:geg
//
// Programming project 6 on page 34.
//
// Text: "C Programming : A Modern Approach"
// Edition: 2nd (August 2008)
// Author: K. N. King
//
// Copyright (c) 2016 G Geiger
//
// Calculate a polynomial
// 3*x**5 + 2*x**4 - 5*x**3 - x**2 + 7*x - 6
// but use Horners Rule
// ((((3*x + 2)*x -5)*x - 1)*x + 7)*x -6
//
// http://knking.com/books/c2/answers/index.html
//
#include <stdio.h>

int main (void)
{
  float x , polynomial_value;

  printf ("Enter a value for x: ");

  scanf ("%f",&x);

  polynomial_value = ((((3*x + 2)*x - 5)*x - 1)*x + 7)*x - 6;
  
  printf ("Value of polynomial:  %.2f\n",polynomial_value);

  return (0);
}
