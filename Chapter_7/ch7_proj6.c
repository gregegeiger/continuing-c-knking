//
// 2016-10-23:geg
//
// Programming project 5 on page 158.
//
// Text: "C Programming : A Modern Approach"
// Edition: 2nd (August 2008)
// Author: K. N. King
//
// Copyright (c) 2016 G Geiger
//
// Print the size of each storage type
//
//
//
// http://knking.com/books/c2/answers/index.html
//
#include <stdio.h>

int main (void)
{

  
  printf("sizeof(int) = %d\n",sizeof(int));

  printf("sizeof(short) = %d\n",sizeof(short));

  printf("sizeof(long) = %d\n",sizeof(long));

  printf("sizeof(float) = %d\n",sizeof(float));
  
  printf("sizeof(double) = %d\n",sizeof(double));
  
  printf("sizeof(long double) = %d\n",sizeof(long double));

  
  return (0);
}
