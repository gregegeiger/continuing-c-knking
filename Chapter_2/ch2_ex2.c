//
// 2016-08-20:geg
//
// Exercise program 2 on page 33.
//
// Text: "C Programming : A Modern Approach"
// Edition: 2nd (August 2008)
// Author: K. N. King
//
// Copyright (c) 2016 G Geiger
//
// Identify directives and statements
//
// Output is:
//Parkinson's Law:
//Work expands so as to fill the time
//available for its completion.
//
 
//
// preprocessor directives begin with # and are *not* terminated with ;
// this is a directive
#include <stdio.h>

int main (void)
{
  // Statements are commands to be run
  // This is a function call statement
  printf("Parkinson's Law:\nWork expands so as to ");

  // This is a function call statement
  printf("fill the time\n");

  // This is a function call statement
  printf("available for its completion.\n");

  // This is the return statement
  return (0);
}
