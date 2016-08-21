//
// 2016-08-21:geg
//
// Programming project 3 on page 34.
//
// Text: "C Programming : A Modern Approach"
// Edition: 2nd (August 2008)
// Author: K. N. King
//
// Copyright (c) 2016 G Geiger
//
// Calculate the volume of a sphere but prompt for the radius.
//
// http://knking.com/books/c2/answers/index.html
//
#include <stdio.h>
#define PI 3.141592f

int main (void)
{
  float radius;

  printf ("\nWhat is the radius (in meters)? ");

  scanf ("%f",&radius);
  
  printf ("The volume of a sphere with %.2f m radius is ",radius);

  printf ("%.2f cubic meters.\n\n",(4.0f/3.0f)*PI*radius*radius*radius);

  return (0);
}
