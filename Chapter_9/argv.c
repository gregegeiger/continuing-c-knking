//
// 2017-02-11:geg
//
// Example of argv
//
// Text: "C Programming : A Modern Approach"
// Edition: 2nd (August 2008)
// Author: K. N. King
//
// Copyright (c) 2016 G Geiger
//
// Example of the argument count and argument vector
// from the linux operating system
//
// The result of ./a.out test me baby will be
//
// 
// Count of arguments 4
// arg number 0 is ./a.out
// arg number 1 is test
// arg number 2 is me
// arg number 3 is baby
//
// Remember that arg number 4 will be the NULL pointer 
//
// http://knking.com/books/c2/answers/index.html
//
#include <stdbool.h>
#include <stdio.h>

//
// argc : argument count
// argv : argument vector
//
int main (int argc, char *argv[])
{

  int i;
  printf ("Count of arguments %d\n",argc);

  for (i=0; i<argc; i++) {
      printf ("arg number %d is %s\n",i, argv[i]);
  }

  return (0);

}
