/**
 * Give the values of i and j after each of the following expression statements
 * has been executed. (Assume that i has the value 1 initially and j has the
 * value 2.)
 *
 * (a) i += j;    // i = 3, j = 2.
 * (b) i--;       // i = 0, j = 2;
 * (c) i * j / i; // i = 1, j = 2;
 * (d) i % ++j;   // i = 1, j = 3;
 */

#include <stdio.h>

int main(void) {
  int i, j;

  i = 1, j = 2;
  i += j;
  printf("i = %d, j = %d\n", i, j);

  i = 1, j = 2;
  i--;
  printf("i = %d, j = %d\n", i, j);

  i = 1, j = 2;
  i *j / i;
  printf("i = %d, j = %d\n", i, j);

  i = 1, j = 2;
  i % ++j;
  printf("i = %d, j = %d\n", i, j);
  return 0;
}
