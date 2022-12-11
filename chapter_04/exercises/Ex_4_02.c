/**
 * If i and j are positive integers, dose (-i)/j always have the same value as
 * -(i/j)? Justify your answer.
 *
 * ---
 *
 * Same with C99 and higher version;
 * Not same with C89;
 *
 * e.g. i = 9, j = 7.
 * In C99, the result of a division is **always truncated toward zero**. so
 * (-9)/7 = -1, -(9/7) = -1.
 *
 * But In C89, the result of a division can be **rounded either up or
 * down**(depending on the implementation). so (-9)/7 could be either -1 or -2;
 * (9/7) = -1.
 */

#include <stdio.h>

int main(void) {
  int i = 9, j = 7;

  printf("(-i)/j = %d\n", (-i) / j);
  printf("-(i/j) %d\n", -(i / j));

  return 0;
}
