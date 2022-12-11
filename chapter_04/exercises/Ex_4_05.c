/**
 * What is the value of each of the following expressions in C89?(Give all
 * possible values if an expression may have more than one value.)
 *
 * (a)  8 %  5 // 3
 * (b) -8 %  5 // -3 or 2
 * (c)  8 % -5 // 3 or -2
 * (d) -8 % -5 // -3 or 2
 */

#include <stdio.h>

int main(void) {
  printf(" 8 %%  5 = %d\n", 8 % 5);
  printf("-8 %%  5 = %d\n", -8 % 5);
  printf(" 8 %% -5 = %d\n", 8 % -5);
  printf("-8 %% -5 = %d\n", -8 % -5);

  return 0;
}
