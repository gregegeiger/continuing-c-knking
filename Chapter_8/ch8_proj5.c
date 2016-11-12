//
// 2016-11-12:geg
//
// Programming project 5 on page 178.
//
// Text: "C Programming : A Modern Approach"
// Edition: 2nd (August 2008)
// Author: K. N. King
//
// Copyright (c) 2016 G Geiger
//
// Modify the program interest.c on page 169 to compound the interest monthly and still display the
// value yearly
//
//
// http://knking.com/books/c2/answers/index.html
//
#include <stdbool.h>
#include <stdio.h>
//
// 
#define NUM_RATES ((int) (sizeof(value)/sizeof(value[0])))
//
// Initial investment
//
#define INITIAL_BALANCE 100.00


int main (void)
{
  int i, imonth, low_rate, num_years, year;
  double value[5];

  printf("Enter annual interest rate: ");
  scanf("%d",&low_rate);

  printf("Enter number of years: ");
  scanf("%d",&num_years);
  //
  // column header for the years column
  printf("\nYears");
  //
  // column headers for the interest rate columns
  for (i=0; i<NUM_RATES; i++){
    printf("%6d%%",low_rate + i);
    //
    // Set all interest columns to their initial balance
    value[i]=INITIAL_BALANCE;
    //    printf("    i: %d bal: %6.2f    \n",i,value[i]);
  }
  printf("\n");

  //
  // Print the year and the values for that year across all rate columns
  for (year=1; year<=num_years; year++) {
    //
    // Print the year
    printf("%3d    ",year);
    for (i = 0; i < NUM_RATES; i++) {
      for (imonth=1 ; imonth<=12 ; imonth++){
	//
	// Note the use of cast
	// Since value is a double float variable
	// we must cast the calculation as a double result
	//
	value[i] += ((double) (low_rate + i)/12 )/100.0 * value[i];
      }
      printf("%7.2f", value[i]);
    }
    printf("\n");
  }

  
  return (0);
}
