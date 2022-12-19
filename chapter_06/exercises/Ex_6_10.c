/**
 * Show how to repalce a continue statement by an equivalent goto statement.
 *
 * --
 *
 * Assume identify is cont:
 * 1. Repalce `continue;` with `goto cont;`
 * 2. Add `cont:;` to the bottom of the loop body.
 */

#include <stdio.h>

int main(void) {
  int i;

  for (i = 0; i < 10; i++) {
    if (i == 5)
      continue;

    printf("%d ", i);
  }
  printf("\n");

  for (i = 0; i < 10; i++) {
    if (i == 5)
      goto cont;

    printf("%d ", i);
  cont:;
  }

  return 0;
}
