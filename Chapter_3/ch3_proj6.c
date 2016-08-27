//
// 2016-08-27:geg
//
// Programming project 6 on page 51.
//
// Text: "C Programming : A Modern Approach"
// Edition: 2nd (August 2008)
// Author: K. N. King
//
// Copyright (c) 2016 G Geiger
//
// Prompt user for two fractions separated by a plus symbol then display
// result adding them
//
// http://knking.com/books/c2/answers/index.html
//
#include <stdio.h>

int main (void)
{
  int num1,denom1,num2,denom2;

  //
  //
  printf ("Enter two fractions separated by the plus sign: ");
  scanf ("%d/%d+%d/%d",&num1,&denom1,&num2,&denom2);

  printf ("The sum is: %d / %d\n",num1*denom2+num2*denom1,denom1*denom2);
  
  return (0);
}
