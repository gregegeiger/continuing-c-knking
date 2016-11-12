//
// 2016-11-12:geg
//
// Programming project 2 on page 178.
//
// Text: "C Programming : A Modern Approach"
// Edition: 2nd (August 2008)
// Author: K. N. King
//
// Copyright (c) 2016 G Geiger
//
// Prompt for a number and then display the digits that are repeated.
// Display a table showing the number of times the digit occurs.
//
// Enter a number: 41271092
// Digit:       0 1 2 3 4 5 6 7 8 9
// Occurrences: 1 2 2 0 1 0 0 1 0 1
//
// http://knking.com/books/c2/answers/index.html
//
#include <stdbool.h>
#include <stdio.h>

int main (void)
{
  int index = 0;
  int i = 0;
  long int number_entered;
  int digit_seen[10] = {0};

  
  printf("Enter a number: ");
  scanf ("%ld", &number_entered);

  while (number_entered > 0) {

    index = number_entered % 10;
    digit_seen[index]++;
    number_entered = number_entered/10;

  }

  printf("Digit:       ");
  
  for (i=0;i<10;i++) {
    printf ("%1d ",i);
  }

  printf("\nOccurrences: ");
  
  for (i=0;i<10;i++) {
    printf ("%1d ",digit_seen[i]);
  }
  printf("\n");
  
  return (0);
}
