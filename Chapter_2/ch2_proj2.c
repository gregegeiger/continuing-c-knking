//
// 2016-08-21:geg
//
// Programming project 2 on page 34.
//
// Text: "C Programming : A Modern Approach"
// Edition: 2nd (August 2008)
// Author: K. N. King
//
// Copyright (c) 2016 G Geiger
//
// Calculate the volume of a sphere.
//

#include <stdio.h>
#define PI 3.141592f

int main (void)
{
  float radius = 10.0f;

  printf ("The volume of a sphere with %.2f radius is ",radius);

  printf ("%.2f\n",(4.0f/3.0f)*PI*radius*radius*radius);

  return (0);
}
