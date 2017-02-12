//
// 2017-02-12:geg
//
// Program on page 207.
//
// Text: "C Programming : A Modern Approach"
// Edition: 2nd (August 2008)
// Author: K. N. King
//
// Copyright (c) 2017 G Geiger
//
// Quicksort Algorithm
// 
//
// http://knking.com/books/c2/answers/index.html
//
#include <stdbool.h>
#include <stdio.h>


//
// Number of elements to sort
//
#define N 10

//
// Functional prototypes
//
void quicksort(int a[], int low, int high);

int split (int a[], int low, int high);



int main (void)
{
  int a[N], i;
  //
  // Prompt for numbers to sort and populate array a
  //
  printf("Enter %d numbers to be sorted: ",N);
  for (i=0; i < N; i++) {
    scanf("%d", &a[i]);
  }

  //
  // Call quicksort algorithm
  // low  = first element of array : index = 0
  // high = last element of array : index = N-1
  quicksort(a, 0, N-1);

  //
  // print result
  //
  printf("In sorted order: ");
  for (i=0; i < N; i++) {
    printf("%d ",a[i]);
      }
  printf("\n");

  return(0);
}



//*****************************************************************************
// Quicksort algorithm
// Refer to page 205 of K N King text for explanation
//
void quicksort(int a[], int low, int high) {
  //
  // Select the partitioning element and save it in a temp variable
  //
  int middle;

  if (low >= high) return;

  middle = split(a, low, high);

  quicksort(a, low, middle -1);

  quicksort(a, middle + 1, high);
}

//*****************************************************************************
// Split function
//

int split(int a[], int low, int high) {
  int part_element = a[low];

  for (;;) {
    while (low < high && part_element <= a[high]) {
      high--;
    }

    if (low >= high) break;

    a[low++] = a[high];

    while(low < high && a[low] <= part_element) {
      low++;
    }

    if (low >= high) break;

    a[high--] = a[low];
  }

  a[high] = part_element;

  return(high);
}
