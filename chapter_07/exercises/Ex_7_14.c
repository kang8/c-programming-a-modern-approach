/**
 * Does the following statement always compute the fractional part of f
 * correctly (assuming that f and frac_part are float variable)?
 *
 * frac_part = f - (int) f;
 *
 * If not, what's the problem?
 *
 * ---
 *
 * not, float max value is 3.4e38 greater than int max value(2147483647). When
 * the value in f exceeds the largest value of type int, will get error value of
 * frac_part.
 */

#include <stdio.h>

int main(void) {
  float f = 3.3e20f, frac_part;

  frac_part = f - (int)f;

  printf("%f\n", frac_part);

  return 0;
}
