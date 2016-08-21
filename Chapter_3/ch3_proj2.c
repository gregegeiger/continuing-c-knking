//
// 2016-08-21:geg
//
// Programming project 2 on page 50.
//
// Text: "C Programming : A Modern Approach"
// Edition: 2nd (August 2008)
// Author: K. N. King
//
// Copyright (c) 2016 G Geiger
//
// Prompt user for item number price and date and print in a table format
//
// Example output of table
//
// Enter item number: 583
// Enter unit price: 13.5
// Enter purchase date (mm/dd/yyyy): 10/24/2010
//
//  Item       Unit           Purchase
//             Price          Date
//  583        $  13.50       10/24/2010
//
// http://knking.com/books/c2/answers/index.html
//
#include <stdio.h>

int main (void)
{
  int item,day,month,year;
  float price;
  // Assuming a 3 character item number
  printf ("Enter item number: ");
  scanf ("%3d",&item);

  printf ("Enter unit price: ");
  scanf ("%f",&price);
  
  printf ("Enter purchase date (mm/dd/yyyy): ");
  scanf ("%2d/%2d/%4d",&month,&day,&year);
  //
  // Print table headings
  //
  printf ("Item\t\tUnit\t\tPurchase\n");
  printf ("\t\tPrice\t\tDate\n");
  
  // item number is left justified and has a format of aaaa.bb
  // price up to $9999.99
  // date in mm/dd/yyyy format
  //
  // Note that since the price field crosses a tab boundary
  // there is only one tab before the date is printed
  //
  printf ("%-3d\t\t$%7.2f\t%2.2d/%2.2d/%4.4d\n",item,price,month,day,year);

  return (0);
}
