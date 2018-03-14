//
// 2017-06-18:geg
//
// Programming project 1 on page 238.
//
// Text: "C Programming : A Modern Approach"
// Edition: 2nd (August 2008)
// Author: K. N. King
//
// Copyright (c) 2018 G Geiger
//
// Modify the stack example of section 10.2 (p. 221) so that it stores characters instead
// of integers.  Add a main function to ask user to enter a series of braces and
// parentheses then indicates if they are properly nested.
//
//
// http://knking.com/books/c2/answers/index.html
//
#include <stdbool.h>
#include <stdio.h>
#include <math.h>

//
// Size of stack
//
#define STACK_SIZE 10

//
// External variables
//
// Array to store stack data
char contents[STACK_SIZE];

// Stack pointer
int top = 0;

void make_empty(void)
{
  top = 0;
}

bool is_empty(void)
{
  return top == 0;
}

bool is_full(void)
{
  return top == STACK_SIZE;
}

void push(char character)
{
  if (is_full())
    {
      printf("STACK IS FULL  top at %d\n",top);

    }
  else
    {
      printf("Pushing %c to %d\n",character,top);
      contents[top++] = character;

    }
}

int main()
{
  printf("starting main\n");
  char acharacter='A';
    
  make_empty();

  while ( !( is_full() ) ){
    printf("pushing character\n");
    
    push(acharacter);
  }    
  return;
}  
