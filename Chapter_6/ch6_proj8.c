//
// 2016-10-08:geg
//
// Programming project 6 on page 123.
//
// Text: "C Programming : A Modern Approach"
// Edition: 2nd (August 2008)
// Author: K. N. King
//
// Copyright (c) 2016 G Geiger
//
// Print a month calendar - ask user for day of week for the 1st and
// the max number of days in the month.
//
//
// http://knking.com/books/c2/answers/index.html
//
#include <stdio.h>

int main (void)
{
  int start_day,num_days,date,wkday;

  printf("Enter the number of days in the month : ");
  scanf("%d",&num_days);
  
  printf("Enter starting day of the week (1=Sun, 7=Sat) : ");
  scanf("%d",&start_day);

  //
  // Increment through days of month until the total number of days reached
  //
  for (date = 1 ; date <= num_days ; ) {
    //
    // Start the first week on the day entered
    //
    for (wkday = 1; wkday <= 7 ; wkday ++) {

      if (wkday < start_day) {
	printf("   ");
      } else {
	printf("%2d ",date++);
      }
      if (date > num_days) {
	printf("\n\n");
	return 0;
      }

    }
    //
    // End of week : Saturday has been printed
      start_day = 1;
      printf("\n");
  }
  return (0);
}
