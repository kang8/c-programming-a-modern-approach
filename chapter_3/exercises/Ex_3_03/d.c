/**
 * (d) "%f,%f"    versus "%f, %f"
 *
 * ---
 *
 * two format strings are equivalent.
 *
 * test cases:
 *
 * ```
 * 123.1, 321.1
 * 123.1, 321.1
 * ```
 *
 * ```
 * 123.1,321.1
 * 123.1,321.1
 * ```
 *
 * ```
 * 123.1,321.1
 * 123.1, 321.1
 * ```
 *
 * ```
 * 123.1, 321.1
 * 123.1,321.1
 * ```
 */

#include <stdio.h>

int main(void) {
  float x1, x2;
  float y1, y2;

  scanf("%f,%f", &x1, &x2);
  scanf("%f, %f", &y1, &y2);

  printf("\"%%f,%%f\" represent: %f,%f\n", x1, x2);
  printf("\"%%f, %%f\" represent: %f,%f\n", y1, y2);

  return 0;
}
