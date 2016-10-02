//
// 2016-10-02:geg
//
// Programming project 1 on page 122.
//
// Text: "C Programming : A Modern Approach"
// Edition: 2nd (August 2008)
// Author: K. N. King
//
// Copyright (c) 2016 G Geiger
//
// Prompt user to enter numbers.  When the user enters zero or a negative number
// display the largest non-negative number entered.
//
//
// http://knking.com/books/c2/answers/index.html
//
#include <stdio.h>

int main (void)
{
  int number_entered, largest_number;
  
  do {
    printf("Enter a number : ");
    scanf ("%d",&number_entered);
    if (number_entered > largest_number) largest_number=number_entered;
  } while (number_entered > 0);
  

  printf("The largest number entered was %d\n ",largest_number);

  
  return (0);
}
