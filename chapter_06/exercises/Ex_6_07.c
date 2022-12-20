/**
 * Translate the program fragment of Exercise 2(./Ex_6_02.c) into a single for
 * statement.
 */

#include <stdio.h>

int main(void) {
  int i = 9384;

  for (i = 9384; i > 0; i /= 10) {
    printf("%d ", i);
  }

  return 0;
}
