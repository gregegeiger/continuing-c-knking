//
// 2016-10-08:geg
//
// Programming project 6 on page 123.
//
// Text: "C Programming : A Modern Approach"
// Edition: 2nd (August 2008)
// Author: K. N. King
//
// Copyright (c) 2016 G Geiger
//
// Prompt user to enter a number n.
// Display all the even squares up to and including n.
//
//
// http://knking.com/books/c2/answers/index.html
//
#include <stdio.h>

int main (void)
{
  int i,n;

  printf("Enter the number n :");

  scanf("%d",&n);
  //
  // Step through all even numbers until the square is greater than n
  // Note that the for loop has three expressions
  // (initialize, continue loop if true, operation performed at end of loop)
  //
  for (i = 2; i * i <= n; i = i + 2) {
    printf("%d\n",i*i);
  }

  return (0);
}
