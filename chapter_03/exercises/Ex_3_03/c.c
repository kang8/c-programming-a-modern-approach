/**
 * (c) "%f"       versus "%f "
 *
 * ---
 *
 * two format strings are not equivalent.
 *
 * "%f " must input non-blank character after input a float-point number.
 *
 * test case(use `·` to represent the space character):
 *
 * not same
 * ```
 * 123.123
 * 123.123·.
 * ```
 */

#include <stdio.h>

int main(void) {
  float x, y;

  scanf("%f", &x);
  scanf("%f ", &y);

  printf("\"%%f\" represent: %f\n", x);
  printf("\"%%f \" represent: %f\n", y);

  return 0;
}
