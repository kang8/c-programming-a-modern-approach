/**
 * Write a single expression whose value is either -1, 0, or +1, depending on
 * whether i is less than, equal to, or greater than j, respectively.
 *
 * --
 *
 * (i > j) - (i < j)
 */

#include <stdio.h>

int main(void) {
  int i, j;

  i = 1, j = 1;
  printf("%d\n", (i > j) - (i < j));

  i = 1, j = 0;
  printf("%d\n", (i > j) - (i < j));

  i = 0, j = 1;
  printf("%d\n", (i > j) - (i < j));

  return 0;
}
