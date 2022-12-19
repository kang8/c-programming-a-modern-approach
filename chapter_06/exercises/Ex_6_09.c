/**
 * Translate the for statement of Exercise 8(./Ex_6_08.c) into an equivalent
 * while statement. You will need one statement in addition to the while loop
 * itself.
 */

#include <stdio.h>

int main(void) {
  int i;

  i = 10;
  while (i >= 1) {
    printf("%d ", i++);
    i /= 2;
  }

  return 0;
}
