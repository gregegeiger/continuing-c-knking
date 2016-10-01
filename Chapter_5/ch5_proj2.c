//
// 2016-10-01:geg
//
// Programming project 2 on page 96.
//
// Text: "C Programming : A Modern Approach"
// Edition: 2nd (August 2008)
// Author: K. N. King
//
// Copyright (c) 2016 G Geiger
//
// Ask the user for a time in 24-hour format and convert to 12-hour format.
//
//
// http://knking.com/books/c2/answers/index.html
//
#include <stdio.h>

int main (void)
{
  int hours,minutes;

  printf("Enter the time in 24-hour format (hh:mm) : ");
  scanf ("%d:%d",&hours,&minutes);
  
  //
  // Cascading if else - assumes that the number has four digits
  // am is 12 midnight (00:00 or 24:00) to 11:59 am
  // pm is 12 noon 
  if (hours <= 11) {
    printf ("The time is %2d:%02d am\n",hours,minutes);
  } else if (hours <= 12) {
    printf ("The time is %2d:%02d pm\n",hours,minutes);
  } else if (hours <= 23) {
    printf ("The time is %2d:%02d pm\n",hours-12,minutes);
  } else {
    printf ("The time is %2d:%02d am\n",hours-12,minutes);
  }    
  return (0);
}
