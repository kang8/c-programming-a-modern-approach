/**
 * Is the following if statement legal?
 *
 * if (n == 1 - 10)
 *   printf("n is between 1 and 10\n");
 *
 * If so, what does it do when n is equal to 5?
 *
 * --
 *
 * The statement is legal.
 *
 * (n == 1 - 10) => (n == (1 - 10)) => (n == 9)
 *
 * When n = 5, (n == 9) return false.
 */

#include <stdio.h>

int main(void) {
  int n = 5;

  if (n == 1 - 10) 
    printf("n is between 1 and 10\n");

  return 0;
}
