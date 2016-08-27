//
// 2016-08-27:geg
//
// Programming project 3 on page 50.
//
// Text: "C Programming : A Modern Approach"
// Edition: 2nd (August 2008)
// Author: K. N. King
//
// Copyright (c) 2016 G Geiger
//
// Prompt user for ISBN number and print the subfields
//    Enter ISBN number: 978-0-393-97950-3
//    GS1 Prefix: 978
//    Group ID: 0
//    Publisher code: 393
//    Item number: 97950
//    Check digit: 3
//    
//
// http://knking.com/books/c2/answers/index.html
//
#include <stdio.h>

int main (void)
{
  int gs1_prefix,group_id,publisher,item,check_digit;

  //
  // The number of digits in each subfield may vary
  // use the dash symbol to deliniate them
  //
  printf ("Enter ISBN number: ");
  scanf ("%d-%d-%d-%d-%d",&gs1_prefix,&group_id,&publisher,&item,&check_digit);

  printf ("GS1 Prefix: %3d\n",gs1_prefix);
  
  printf ("Group ID: %1d\n",group_id);
  
  printf ("Publisher code: %3d\n",publisher);
  
  printf ("Item number: %1d\n",item);
  
  printf ("Check digit: %1d\n",check_digit);
  
  return (0);
}
