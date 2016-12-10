//
// 2016-12-10:geg
//
// Programming project 1 on page 216.
//
// Text: "C Programming : A Modern Approach"
// Edition: 2nd (August 2008)
// Author: K. N. King
//
// Copyright (c) 2016 G Geiger
//
// Prompt for a series of integers and store in an array
// Call a function selection_sort that will rearrange them
// in the array such that the array contains the elements from smallest
// to largest.  Largest is in the highest index of the array.
//
//
// http://knking.com/books/c2/answers/index.html
//
#include <stdbool.h>
#include <stdio.h>


int selection_sort(int a[], int b);

		   
int main (void)
{

  int array_size = 0;
  int index = 0;


  //
  // Prompt for size of array
  //
    printf("How many numbers do you want to enter? ");
    scanf("%d",&array_size);

  //
  // Create the array
  //
  int array[array_size];

  printf("Enter numbers: \n");
  
  for (index=0 ; index < array_size ; index++) {
    //
    // Store numbers in array
    //
    scanf("%d",&array[index]);
  }

  selection_sort ( array , array_size );
  

  printf("Sorted array: ");
  for (index = 0 ; index < array_size ; index++) {
    printf(" %d",array[index]);
  }
						
  printf("\n");



  return (0);

}

int selection_sort (int array[], int array_size) {

  int index;
  int largest_number=0;
  int largest_index=0;
  int temp;

  if (array_size == 0) {return (0);}

  
  printf("Sorting array of size %d\n",array_size);

  for (index=0 ; index < array_size ; index++) {
    //
    // Find the largest value in the array
    //
    if (array[index] > largest_number) {
      largest_index = index;
      largest_number = array[index];
    }
  }
    printf("For array size %d largest number %d was found at index %d\n",array_size,largest_number,largest_index);
    //
    // Swap the last value in array and the largest number
    //
    temp = array[array_size-1];
    array[array_size-1] = array[largest_index];
    array[largest_index] = temp;
    //
    //
    //
  array_size--;

  selection_sort( array, array_size );

  return (0);
}
