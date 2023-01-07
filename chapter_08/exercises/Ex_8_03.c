/**
 * Write a declaration of an array named weekend containing seven bool values.
 * Include an initializer that makes the first and last values true; all other
 * values should be false.
 */

#include <stdbool.h>
#include <stdio.h>

int main(void) {
  bool weekend[7] = {true, false, false, false, false, false, true};

  for (int i = 0; i < 7; i++) {
    if (weekend[i]) {
      printf("Is Holiday!!!\n");
    } else {
      printf("Is WorkDay.\n");
    }
  }

  return 0;
}
