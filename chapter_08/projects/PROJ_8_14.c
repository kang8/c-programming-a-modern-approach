/**
 * Write a program that reverses the words in a sentence:
 *
 * Enter a sentence: you can cage a swallow can't you?
 * Reversal of sentence: you can't swallow a cage can you?
 *
 * Hint: Use a loop to read the characters one by one and store them in a
 * one-dimensional char array. Have the loop stop at a period, question mark, or
 * exclamation point (the "terminating characters"), which is saved in a
 * separate char variable. Then use a second loop to search backward through the
 * array for the beginning of the last word. Print the last word, then search
 * backward for the next-to-last word. Repeat until the beginning of the array
 * is reached. Finally, print the terminating character.
 */

#include <stdio.h>

#define NUM_OF_WORD 10
#define NUM_OF_LETTER 10

int main(void) {
  char sentence[NUM_OF_WORD][NUM_OF_LETTER] = {0};
  char letter, terminate_char;
  int word_count = 0, letter_count = 0;

  printf("Enter a sentence: ");

  while ((letter = getchar()) != '\n') {
    if (letter == ' ') {
      word_count++;
      letter_count = 0;

      continue;
    } else if (letter == '?' || letter == '!' || letter == '.') {
      word_count++;
      terminate_char = letter;

      break;
    } else {
      sentence[word_count][letter_count++] = letter;
    }
  }

  printf("Reversal of sentence: ");

  for (int word = word_count - 1; word >= 0; word--) {
    for (int letter = 0; sentence[word][letter] != 0; letter++) {
      putchar(sentence[word][letter]);
    }
    if (word != 0) {
      putchar(' ');
    }
  }

  printf("%c\n", terminate_char);

  return 0;
}
