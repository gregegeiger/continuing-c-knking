//
// 2017-01-29:geg
//
// Programming project 4 on page 217.
//
// Text: "C Programming : A Modern Approach"
// Edition: 2nd (August 2008)
// Author: K. N. King
//
// Copyright (c) 2016 G Geiger
//
// Rewrite the project 16 in chapter 8 to use two new functions:
// read_word will update two separate character_counts arrays
// equal_array will perform the test to see if the two arrays are equal
// 
//
// http://knking.com/books/c2/answers/index.html
//
#include <stdbool.h>
#include <stdio.h>
#include <ctype.h>

// Functional prototypes
//
void read_word(int counts1[26]);

bool equal_array(int counts1[26], int counts2[26]);



int main (void)
{
  //
  // Create the array for the character count used with the first word and initialize to zero all locations
  //
  // [0] is A ... [25] is Z
  //
  int counts1[26] = { 0 };

  //
  // Create the array for the character count used with the second word and initialize to zero all locations
  //
  // [0] is A ... [25] is Z
  //
  int counts2[26] = { 0 };

  int index = 0;
  char character;
  bool equal;
  
  int test = 0;
  
  // Prompt for first word
  printf("Enter first word: ");
  read_word(counts1);

  
  // Prompt for second word
  printf("Enter second word: ");
  read_word(counts2);


  //
  // If the two words are anagrams all entries in the array are zero
  //
  equal = equal_array(counts1,counts2);
  if (equal) {
    printf("\nThe two words are anagrams\n");
  }else{
    printf("\nThe two words are NOT anagrams\n");
  }

  return (0);

}


//
// Function read_word
//
void read_word(int counts1[26]){

  char character;
  int index = 0;
  
  // Prompt for first word
  printf("Enter first word: ");
  for (index = 0; index < 40; index++) {
    scanf("%1c",&character);
    if (character == '\n') {return;}
    //
    // Convert to uppercase character
    //
    character = toupper(character);
    if (character >= 'A' && character <='Z'){
    //
    //ASCII for A is 65
    //
      counts1[character-65]++;
    }
  }
  return;
}

//
// Function equal_arrays
//
bool equal_array(int counts1[26], int counts2[26]) {
  int index = 0;
  for (index=0; index < 26; index++) {
    if (counts1[index] != counts2[index]) {
      return false;
    }
  }
  return true;
}
