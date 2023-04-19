/**
 * The following program fragments illustrate the short-circuit behavior of
 * logical expressions. Show the output produced by each, assuming that i, j,
 * and k are variables.
 *
 * (a) i = 3; j = 4; k = 5;
 *     printf("%d ", i < j || ++j < k);     // 1
 *     printf("%d %d %d\n", i, j, k);       // 3, 4, 5
 * (b) i = 7; j = 8; k = 9;
 *     printf("%d ", i - 7 && j++ < k);     // 0
 *     printf("%d %d %d\n", i, j, k);       // 7, 8, 9
 * (c) i = 7; j = 8; k = 9;
 *     printf("%d ", (i = j) || (j = k));   // 1
 *     printf("%d %d %d\n", i, j, k);       // 8, 8, 9
 * (d) i = 1; j = 1; k = 1;
 *     printf("%d ", ++i || ++j && ++k);    // 1
 *     printf("%d %d %d\n", i, j, k);       // 2, 1, 1
 */

#include <stdio.h>

int main(void) {
  int i, j, k;

  i = 3; j = 4; k = 5;
  printf("%d ", i < j || ++j < k);
  printf("%d %d %d\n", i, j, k);
  i = 7; j = 8; k = 9;
  printf("%d ", i - 7 && j++ < k);
  printf("%d %d %d\n", i, j, k);
  i = 7; j = 8; k = 9;
  printf("%d ", (i = j) || (j = k));
  printf("%d %d %d\n", i, j, k);
  i = 1; j = 1; k = 1;
  printf("%d ", ++i || ++j && ++k); // explain: https://stackoverflow.com/a/61714907
  printf("%d %d %d\n", i, j, k);


  return 0;
}
