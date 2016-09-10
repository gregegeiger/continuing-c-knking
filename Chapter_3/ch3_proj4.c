//
// 2016-08-27:geg
//
// Programming project 4 on page 50.
//
// Text: "C Programming : A Modern Approach"
// Edition: 2nd (August 2008)
// Author: K. N. King
//
// Copyright (c) 2016 G Geiger
//
// Prompt user for phone number and print this number with a different
// format.
//    
// Enter phone number [(xxx) xxx-xxxx]: (123)456-7890
// You entered: 123.456.7890
//
// http://knking.com/books/c2/answers/index.html
//
#include <stdio.h>

int main (void)
{
  int area_code,exchange,subscriber;

  //
  // The North American Numbering Plan NANP:
  // NPA: numbering plan area code: Allowed ranges: [2–9] for the first digit
  //                                and [0-9] for the second and third digits.
  // Central office (exchange) code: exchange code: Allowed ranges: [2–9] for
  //                                the first digit and [0-9] for the
  //                                second and third digits.
  // Subscriber number (station code) : Allowed ranges: [0-9] for four digits
  //
  printf ("Enter phone number [(xxx) xxx-xxxx]: ");
  scanf ("(%d)%d-%d",&area_code,&exchange,&subscriber);

  printf ("You entered: %3d.%3d.%4d\n",area_code,exchange,subscriber);
  
  return (0);
}
