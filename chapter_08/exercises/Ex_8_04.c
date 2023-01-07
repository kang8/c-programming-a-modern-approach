/**
 * (C99) Repeat Exercise 3(./Ex_8_03.c), but this time use a designated
 * initializer. Make the initializer as short as possible.
 */

#include <stdbool.h>
#include <stdio.h>

int main(void) {
  bool weekend[7] = {[0] = true, [6] = true};

  for (int i = 0; i < 7; i++) {
    if (weekend[i]) {
      printf("Is Holiday!!!\n");
    } else {
      printf("Is WorkDay.\n");
    }
  }

  return 0;
}
