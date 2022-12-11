/**
 * Repeat Exercise 5 for C99.
 *
 * (a)  8 %  5 // 3
 * (b) -8 %  5 // -3
 * (c)  8 % -5 // 3
 * (d) -8 % -5 // -3
 */

#include <stdio.h>

int main(void) {
  printf(" 8 %%  5 = %d\n", 8 % 5);
  printf("-8 %%  5 = %d\n", -8 % 5);
  printf(" 8 %% -5 = %d\n", 8 % -5);
  printf("-8 %% -5 = %d\n", -8 % -5);

  return 0;
}
