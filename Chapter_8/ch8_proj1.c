//
// 2016-10-29:geg
//
// Programming project 1 on page 178.
//
// Text: "C Programming : A Modern Approach"
// Edition: 2nd (August 2008)
// Author: K. N. King
//
// Copyright (c) 2016 G Geiger
//
// Prompt for a number and then display the digits that are repeated.
//
//
//
// http://knking.com/books/c2/answers/index.html
//
#include <stdbool.h>
#include <stdio.h>

int main (void)
{
  int index = 0;
  int j = 0;
  long int number_entered;
  bool digit_seen[10] = {false};
  bool digit_printed[10] = {false};
  
  printf("Enter a number: ");
  scanf ("%ld", &number_entered);

  while (number_entered > 0) {

    index = number_entered % 10;
    //    printf("index: %d\n",index);

    if (digit_seen[index] == true && digit_printed[index] == false) {

      printf ("%1d ",index);
      digit_printed[index] = true;
    }
    
    digit_seen[index] = true;

    number_entered = number_entered / 10;
  }

  //  for (index=0;index < 10;index++) {
  //    printf("digit %d : %d\n",index,digit_seen[index]);
  //  }
      

  
  return (0);
}
