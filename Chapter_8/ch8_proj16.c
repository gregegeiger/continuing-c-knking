//
// 2017-01-29:geg
//
// Programming project 16 on page 181.
//
// Text: "C Programming : A Modern Approach"
// Edition: 2nd (August 2008)
// Author: K. N. King
//
// Copyright (c) 2016 G Geiger
//
// Give two words determine if they are anagrams.
// 
//
// http://knking.com/books/c2/answers/index.html
//
#include <stdbool.h>
#include <stdio.h>
#include <ctype.h>

int main (void)
{
  //
  // Create the array for the character count used with both words and initialize to zero all locations
  //
  // [0] is A ... [25] is Z
  //
  int character_count[26] = { 0 };

  int index = 0;
  char character;

  int test = 0;
  
  // Prompt for first word
  printf("Enter first word: ");
  for (index = 0; index < 40; index++) {
    scanf("%1c",&character);
    if (character == '\n') {break;}
    //
    // Convert to uppercase character
    //
    character = toupper(character);
    if (character >= 'A' && character <='Z'){
    //
    //ASCII for A is 65
    //
      character_count[character-65]++;
    }
  }

  // Display the character counts
  printf("\n");
  
  // Prompt for second word
  printf("Enter second word: ");
  for (index = 0; index < 40; index++) {
    scanf("%1c",&character);
    if (character == '\n') {break;}

    //
    // Convert to uppercase character
    //
    character = toupper(character);

    if (character >= 'A' && character <= 'Z') {
    //
    //ASCII for A is 65
    //
    character_count[character-65]--;
    }
  }

  //
  // If the two words are anagrams all entries in the array are zero
  //
  for (index=0; index <26; index++) {
    if (character_count[index]) {
      printf("\nThe two words are NOT anagrams\n");
      return (0);
    }
  }
  printf("\nThe two words ARE anagrams\n");

  return (0);

}
