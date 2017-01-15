//
// 2017-01-15:geg
//
// Programming project 9 on page 179.
//
// Text: "C Programming : A Modern Approach"
// Edition: 2nd (August 2008)
// Author: K. N. King
//
// Copyright (c) 2016 G Geiger
//
// Generate a rancom walk on a 10 x 10 array
//
//
// http://knking.com/books/c2/answers/index.html
//
#include <stdbool.h>
#include <stdio.h>
//
// 
#define NUM_STUDENTS 5
#define NUM_TESTS 5

int main (void)
{
  //
  // Create the map or 10 x 10 grid for the walk and initialize it to 0
  //
  int map[10][10] = { {0,0,0,0,0,0,0,0,0,0},
		      {0,0,0,0,0,0,0,0,0,0},
		      {0,0,0,0,0,0,0,0,0,0},
		      {0,0,0,0,0,0,0,0,0,0},
		      {0,0,0,0,0,0,0,0,0,0},
		      {0,0,0,0,0,0,0,0,0,0},
		      {0,0,0,0,0,0,0,0,0,0},
		      {0,0,0,0,0,0,0,0,0,0},
		      {0,0,0,0,0,0,0,0,0,0},
		      {0,0,0,0,0,0,0,0,0,0} };
		      
  //
  // Start in the upper left of the map
  //
  int x=0,
    y=0,
    index=0,
    move=0,
    valid=0;

  
  //
  // Call the random number function
  // rand() returns a number between 0 and RAND_MAX
  //
  // We want a random result 0 through 3
  //
  for (index=0; index<20; index++) {
    //
    // Reset for next move
    //
    valid=0;
    
    while (valid == 0) {
      //
      // Calculate random move value 0 through 3
      //
      move = rand() % 4;

      printf("move:%i\n",move);

      switch(move) {
	//
	// move=0 : up
	//
      case 0: 
	printf("case 0 move %i\n",move);
	if (y+1>=0 && y+1 <=9) {
	  y=y+1;
	  valid=1;
	}
	break;
	//
	// move=1 : right
	//
      case 1: 
	printf("case 1 move %i\n",move);
	if (x+1>=0 && x+1<=9) {
	  x=x+1;
	  valid=1;
	}
	break;
	//
	// move=2 : down
	//
      case 2: 
	printf("case 2 move %i\n",move);
	if (y-1>=0 && y-1<=9) {
	  y=y-1;
	  valid=1;
	};
	break;
	//
	// move=3 : left
	//
      case 3: 
	printf("case 3 move %i\n",move);
	if (x-1>=0 && x-1<=9) {
	  x=x-1;
	  valid=1;
	};
	break;
      }
    }

    printf("X:%i Y:%i Index:%i\n",x,y,index);
  }
  return (0);

}
