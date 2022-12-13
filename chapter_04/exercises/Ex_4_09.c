/**
 * Show the ouput produced by each of the following program fragments, Assume
 * that i, j, and k are int variables.
 *
 * (a) i = 7; j = 8;
 *     i *= j + 1;
 *     printf("%d %d", i, j); // 63 8
 * (b) i = j = k = 1;
 *     i += j += k;
 *     printf("%d %d %d", i, j, k); // 3 2 1
 * (c) i = 1; j = 2; k = 3;
 *     i -= j -= k;
 *     printf("%d %d %d", i, j, k); // 2 -1 3
 * (d) i = 2; j = 1; k = 0;
 *     i *= j *= k;
 *     printf("%d %d %d", i, j, k); // 0 0 0
 */

#include <stdio.h>

int main(void) {
  int i, j, k;

  i = 7; j = 8;
  i *= j + 1;
  printf("%d %d\n", i, j);

  i = j = k = 1;
  i += j += k;
  printf("%d %d %d\n", i, j, k);

  i = 1; j = 2; k = 3;
  i -= j -= k;
  printf("%d %d %d\n", i, j, k);

  i = 2; j = 1; k = 0;
  i *= j *= k;
  printf("%d %d %d\n", i, j, k);


  return 0;
}
