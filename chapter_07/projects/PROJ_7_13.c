/**
 * Write a program that calculates the average word length for a sentence:
 *
 * Enter a sentence: It was deja vu all over again.
 * Average word length: 3.4
 *
 * For simplicity, your program should consider a punctunation mark to be part
 * of the word to which it is attached. Display the average word length to one
 * decimal place.
 */

#include <stdio.h>

int main(void) {
  int total_word_count = 0, total_word_length = 0, current_word_length = 0;
  char letter;

  printf("Enter a sentence: ");

  while ((letter = getchar()) != '\n') {
    if (letter == ' ') {
      if (current_word_length != 0) {
        total_word_count++;
        total_word_length += current_word_length;

        current_word_length = 0;
      }
    } else {
      current_word_length++;
    }
  }

  if (current_word_length != 0) {
    total_word_count++;
    total_word_length += current_word_length;
  }

  printf("Average word length: %.1f\n",
         (float)total_word_length / total_word_count);

  return 0;
}
