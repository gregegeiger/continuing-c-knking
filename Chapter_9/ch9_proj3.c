//
// 2017-01-21:geg
//
// Programming project 3 on page 217.
//
// Text: "C Programming : A Modern Approach"
// Edition: 2nd (August 2008)
// Author: K. N. King
//
// Copyright (c) 2017 G Geiger
//
// Generate a random walk on a 10 x 10 array
//
//
// http://knking.com/books/c2/answers/index.html
//
#include <stdbool.h>
#include <stdio.h>
#include <unistd.h> //needed for sleep function

#define MAP_SIZE 20
//
// Function to print the map
//
void print_array(int n,int map[n][n]);
//
// Function to intialize the map
//
void generate_random_walk(int n, int map[n][n]);


int main (void)
{
  //
  // Create the map for the walk
  //
  int map[MAP_SIZE][MAP_SIZE];

  generate_random_walk(MAP_SIZE,map);

		      
  //
  // Start in the middle of the map
  //
  int x=MAP_SIZE/2,
    y=MAP_SIZE/2,
    index=0,
    move=0,
    valid=0;
  //
  // Place the character A at the starting point
  //
  int character = 65;
  map[x][y] = character++;

  print_array(MAP_SIZE,map);



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

    print_array(MAP_SIZE,map);

    if (character != '@') {
      sleep(1);
    }

    //
    // Reset for next move
    //
    valid=0;
    while (valid == 0) {

      //
      // Increment move counter
      //
      if (move_count++ > max_move_count) {
	printf("\n\n\n\nTrapped!\n\n\n\n");
	return;
      }
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
	if (y+1>=0 && y+1 < MAP_SIZE && map[x][y+1] == '.') {
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
	if (x+1>=0 && x+1< MAP_SIZE && map[x+1][y] == '.') {
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
	if (y-1>=0 && y-1< MAP_SIZE && map[x][y-1] == '.') {
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
	if (x-1>=0 && x-1< MAP_SIZE && map[x-1][y] == '.') {
	  x=x-1;
	  valid=1;
	  map[x][y] = character++;
	};
	break;
      }

      //
      // If the next character is '[' change to 'a'
      // We don't want [ \ ] ^ _ and ' on the map
      //
      if (character == '[') {character = 'a';}

      //
      // If the next character is '{' change to '0'
      // We don't want { | } ~ on the map
      //
      if (character == '{') {character = '0';}

      //
      // If the next character is ':' change to '@'
      //
      if (character == ':') {character = '@';}


    }

  }

      
  printf ("\n\n\n\n\n\n\n\n");

  return (0);

}


void print_array( int map_size, int map[map_size][map_size]) {

  int map_x = 0;
  int map_y = 0;
  
  // Clear the screen
  printf("\033[H\033[J");
  //
  // Add a few newlines
  printf("\n\n\n\n");
  
  // Print map
  for (map_y=0; map_y < map_size; map_y++) {
    printf("       ");
    for (map_x=0; map_x < map_size; map_x++) {
      printf("%c ",map[map_x][map_y]);
    }
    printf("\n");
  }

  return;
}  


void generate_random_walk( int map_size, int map[map_size][map_size]) {

  int map_x = 0;
  int map_y = 0;


  // Initialize the map
  //
  for (map_y=0; map_y < map_size; map_y++) {
    for (map_x=0; map_x < map_size; map_x++) {
      map[map_x][map_y] = '.';
    }
  }
  return;
}  
