//
// 2016-11-19:geg
//
// Programming project 7 on page 179.
//
// Text: "C Programming : A Modern Approach"
// Edition: 2nd (August 2008)
// Author: K. N. King
//
// Copyright (c) 2016 G Geiger
//
// Prompt for values to populate a 5 x 5 array and print sums
// of rows and columns.
//
//
// http://knking.com/books/c2/answers/index.html
//
#include <stdbool.h>
#include <stdio.h>
//
// 
#define NUM_ROWS 5
#define NUM_COLS 5

int main (void)
{
  int array[5][5];
  int row,column;

  for (row=0; row<NUM_ROWS; row++) {

    printf("Enter row %d values: ",row);
    scanf("%d %d %d %d %d",&array[row][0],&array[row][1],&array[row][2],&array[row][3],&array[row][4]);
    printf("row var is %d\n",row);
    
  }

  for (row=0; row<NUM_ROWS; row++) {
    for (column=0; column<NUM_COLS; column++) {
      printf("%d ",array[row][column]);
    }
    printf("\n");
  }
  return (0);
}
