//
// 2016-08-21:geg
//
// Programming project 1 on page 50.
//
// Text: "C Programming : A Modern Approach"
// Edition: 2nd (August 2008)
// Author: K. N. King
//
// Copyright (c) 2016 G Geiger
//
// Accept a date in the form mm/dd/yyyy
// and display it as yyyymmdd.
//
// http://knking.com/books/c2/answers/index.html
//
#include <stdio.h>

int main (void)
{
  int day,month,year;

  printf ("Enter the date in the format mm/dd/yyyy: ");

  scanf ("%2d/%2d/%4d",&month,&day,&year);
  //
  // %2.2d the first 2 is the minimum field width m
  // the second 2 is the precision - the minimum number of characters
  // to display.
  //
  // This is needed so that a day or month entered as 1 will print as 01
  //
 
  printf ("This date is %4.4d%2.2d%2.2d\n",year,month,day);

  return (0);
}
