/**
 * Translate the program fragment of Exercise 1(./Ex_6_01.c) into a single for
 * statement.
 */

#include <stdio.h>

int main(void) {
  int i;

  for (i = 1; i <= 128; i *= 2) {
    printf("%d ", i);
  }

  return 0;
}
