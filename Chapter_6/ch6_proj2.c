//
// 2016-10-02:geg
//
// Programming project 2 on page 122.
//
// Text: "C Programming : A Modern Approach"
// Edition: 2nd (August 2008)
// Author: K. N. King
//
// Copyright (c) 2016 G Geiger
//
// Prompt user to enter two numbers.
// Calculate the greatest common denominator of the two numbers.
//
// The GCD is the largest number (integer) that divides both numbers leaving no remainder.
//
// Per https://en.wikipedia.org/wiki/Euclidean_algorithm
//
//
// http://knking.com/books/c2/answers/index.html
//
#include <stdio.h>

int main (void)
{
  int a,b,temp;

  printf("Enter two integers a and b separated by a comma (a,b) :");

  scanf("%d,%d",&a,&b);
  //
  // Test if a is larger and if so swap them
  //
  if (a > b) {
    temp = a;
    a = b;
    b = temp;
  }
  //
  // Now we have b > a
  //
  while (a>0) {

    temp = b % a;
    b = a;
    a = temp;
    //    printf("a : %d b : %d \n",a,b);
  }
  printf("The greatest common denominator is %d\n",b);
  
  return (0);
}
