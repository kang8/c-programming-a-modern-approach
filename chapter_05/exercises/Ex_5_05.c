/**
 * Is the following if statement legal?
 *
 * if (n >= 1 <= 10)
 *   printf("n is between 1 and 10\n");
 *
 * If so, what does it do when n is equal to 0?
 *
 * --
 *
 * The statement is legal.
 *
 * (n >= 1 <= 10) => ((n >= 1) <= 10) => ((0 or 1) <= 10) => (1).
 *
 * Whatever what n is, always return 1.(include n = 0)
 */

#include <stdio.h>

int main(void) {
  int n = 0;

  if (n >= 1 <= 10)
    printf("n is between 1 and 10\n");

  return 0;
}
