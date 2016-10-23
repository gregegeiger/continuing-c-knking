//
// 2016-10-23:geg
//
// Programming project 5 on page 158.
//
// Text: "C Programming : A Modern Approach"
// Edition: 2nd (August 2008)
// Author: K. N. King
//
// Copyright (c) 2016 G Geiger
//
// Scrabble scoring program
//
// 1 point : AEILNORSTU
// 2 points: DG
// 3 points: BCMP
// 4 points: FHVWY
// 5 points: K
// 8 points: JX
// 10 points: QZ
//
//
// http://knking.com/books/c2/answers/index.html
//
#include <stdio.h>

int main (void)
{
  int score = 0, value=0;

  char ch = 0;
  
  printf("Enter a word: ");

  do {
    //
    // Get one character at a time
    //
    ch = getchar();
    // Convert to uppercase
    ch = toupper(ch);

    switch(ch) {

    case 'A': value = 1; break;
    case 'B': value = 3; break;
    case 'C': value = 3; break;
    case 'D': value = 2; break;
    case 'E': value = 1; break;
    case 'F': value = 4; break;
    case 'G': value = 2; break;
    case 'H': value = 4; break;
    case 'I': value = 1; break;
    case 'J': value = 8; break;
    case 'K': value = 5; break;
    case 'L': value = 1; break;
    case 'M': value = 3; break;
    case 'N': value = 1; break;
    case 'O': value = 1; break;
    case 'P': value = 3; break;
    case 'Q': value = 10; break;
    case 'R': value = 1; break;
    case 'S': value = 1; break;
    case 'T': value = 1; break;
    case 'U': value = 1; break;
    case 'V': value = 4; break;
    case 'W': value = 4; break;
    case 'X': value = 8; break;
    case 'Y': value = 4; break;
    case 'Z': value = 10; break;
    default: value = 0; break;

    }

    score = score + value;
    
  } while (ch != '\n');

  printf("Scrabble value: %d\n",score);
  
  return (0);
}
