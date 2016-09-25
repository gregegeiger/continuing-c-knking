//
// 2016-09-25:geg
//
// Programming project 1 on page 95.
//
// Text: "C Programming : A Modern Approach"
// Edition: 2nd (August 2008)
// Author: K. N. King
//
// Copyright (c) 2016 G Geiger
//
// Calculate the number of digits in a number.  Assume it has four or fewer
// digits.
//
//
// http://knking.com/books/c2/answers/index.html
//
#include <stdio.h>

int main (void)
{
  int number;

  printf("Enter a number with four or fewer digits: ");
  scanf ("%d",&number);
  
  //
  // Cascading if else - assumes that the number has four digits
  //
  if (number < 10) {
    printf ("The number %d has 1 digit\n",number);
  } else if (number < 100) {
    printf ("The number %d has 2 digits\n",number);
  } else if (number < 1000) {
    printf ("The number %d has 3 digits\n",number);
  } else {
    printf ("The number %d has 4 digits\n",number);
  }    
  return (0);
}
