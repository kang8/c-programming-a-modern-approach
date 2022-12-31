/**
 * Assume that a program contains the following declarations:
 *
 * char c = '\1';
 * short s = 2;
 * int i = -3;
 * long m = 5;
 * float f = 6.5f;
 * double d = 7.5;
 *
 * Give the value and the type of each expression listed below.
 *
 * (a) c * i    // -3, int
 * (b) s + m    // 7, long
 * (c) f / c    // 6.5, float
 * (d) d / s    // 3.25, double
 * (e) f - d    // -1, double
 * (f) (int) f  // 6, int
 */

#include <stdio.h>

int main(void) {
  char c = '\1';
  short s = 2;
  int i = -3;
  long m = 5;
  float f = 6.5f;
  double d = 7.5;

  printf("%d\n", c * i);
  printf("%ld\n", s + m);
  printf("%f\n", f / c);
  printf("%lf\n", d / s);
  printf("%lf\n", f - d);
  printf("%d\n", (int) f);

  return 0;
}
