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

int main (void)
{
  //
  // Create the map or 10 x 10 grid for the walk and initialize it to '.'
  //
  int map[10][10] = { {'.','.','.','.','.','.','.','.','.','.'},
		      {'.','.','.','.','.','.','.','.','.','.'},
		      {'.','.','.','.','.','.','.','.','.','.'},
		      {'.','.','.','.','.','.','.','.','.','.'},
		      {'.','.','.','.','.','.','.','.','.','.'},
		      {'.','.','.','.','.','.','.','.','.','.'},
		      {'.','.','.','.','.','.','.','.','.','.'},
		      {'.','.','.','.','.','.','.','.','.','.'},
		      {'.','.','.','.','.','.','.','.','.','.'},
		      {'.','.','.','.','.','.','.','.','.','.'} };
		      
  //
  // Start in the upper left of the map
  //
  int x=0,
    y=0,
    index=0,
    move=0,
    valid=0;
  //
  // Start with character @
  //
  int character = 64;
  //
  // Maximum tries
  //
  int max_move_count = 126;
  int move_count = 0;

  //
  // Map print variables
  //
  int map_x = 0;
  int map_y = 0;


  //
  // Initialize random number generator
  //
  srand(time(NULL));

  for (index=0; index < max_move_count; index++) {
    //
    // Reset for next move
    //
    valid=0;
    while (valid == 0) {
    //
    // Increment move counter
    //
    if (move_count++ > max_move_count) { break; }
      //
      // Calculate random move value 0 through 3
      //
    move = rand() % 4;

      // printf("move:%i\n",move);

      switch(move) {
	//
	// move=0 : up
	//
	
      case 0: 
	//	printf("case 0 move %i\n",move);
	if (y+1>=0 && y+1 <=9 && map[x][y+1] == '.') {
	  y=y+1;
	  valid=1;
	  map[x][y] = character++;
	}
	break;
	//
	// move=1 : right
	//
      case 1: 
	// printf("case 1 move %i\n",move);
	if (x+1>=0 && x+1<=9 && map[x+1][y] == '.') {
	  x=x+1;
	  valid=1;
	  map[x][y] = character++;
	}
	break;
	//
	// move=2 : down
	//
      case 2: 
	// printf("case 2 move %i\n",move);
	if (y-1>=0 && y-1<=9 && map[x][y-1] == '.') {
	  y=y-1;
	  valid=1;
	  map[x][y] = character++;
	};
	break;
	//
	// move=3 : left
	//
      case 3: 
	// printf("case 3 move %i\n",move);
	if (x-1>=0 && x-1<=9 && map[x-1][y] == '.') {
	  x=x-1;
	  valid=1;
	  map[x][y] = character++;
	};
	break;
      }
    }

    //    printf("X:%i Y:%i Index:%i\n",x,y,index);
    //

      
  }


    // Print map
    for (map_y=0; map_y < 10; map_y++) {
      for (map_x=0; map_x < 10; map_x++) {
	printf("%c ",map[map_x][map_y]);
      }
      printf("\n");
    }

  return (0);

}
