/**
 * Write a program that counts the number of vowels (a, e, i, o, and u) in a
 * sentence:
 *
 * Enter a sentence: Add that's the way it is.
 * Your sentence contains 6 vowels.
 */

#include <ctype.h>
#include <stdio.h>

int main(void) {
  char letter;
  int total_vowel = 0;

  printf("Enter a sentence: ");

  while ((letter = getchar()) != '\n') {
    switch (toupper(letter)) {
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
        total_vowel++;
        break;
    }
  }

  printf("Your sentence contains %d vowels.\n", total_vowel);

  return 0;
}
