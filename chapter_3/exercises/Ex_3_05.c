/**
 * Suppose that we call `scanf` as follows:
 * scanf("%f%d%f", &i, &x, &j);
 * If the user enters
 * 12.3 45.6 789
 * what will be the values of i, x, and j after the call?(Assume that i and j
 * are int variables and x is a float variable.)
 *
 * ---
 *
 * i = 12.3
 * x = 45
 * y = 0.6
 */

#include <stdio.h>

int main(void) {
  float i, j;
  int x;

  scanf("%f%d%f", &i, &x, &j);

  printf("%f, %d, %f", i, x, j);

  return 0;
}

