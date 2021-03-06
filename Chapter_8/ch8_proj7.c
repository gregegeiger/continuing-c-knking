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
  int row,column,i;
  int sum_col[5]={0};
  int sum_row[5]={0};

  for (row=0; row<NUM_ROWS; row++) {

    printf("Enter row %d values: ",row);
    // cheesy way to scan for five integers separated by space
    scanf("%d %d %d %d %d",&array[row][0],&array[row][1],&array[row][2],&array[row][3],&array[row][4]);
    // calculate sum across row
    for (i=0; i<NUM_COLS; i++) {sum_row[row] += array[row][i];}
    // calculate column sum
    for (i=0; i<NUM_ROWS; i++) {sum_col[i] += array[row][i];}
    
    
  }

  for (row=0; row<NUM_ROWS; row++) {
    for (column=0; column<NUM_COLS; column++) {
      printf("%d ",array[row][column]);
    }
    printf("\n");
  }

  printf("\nRow sums: ");
  for (row=0; row<NUM_ROWS; row++) {
    printf("%d ",sum_row[row]);
  }

  printf("\nCol sums: ");
  for (column=0; column<NUM_COLS; column++) {
    printf("%d ",sum_col[column]);
  }

  printf("\n");

  return (0);

}
