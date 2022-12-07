/**
 * (a) "%d"       versus " %d"
 *
 * ---
 *
 * two format strings are equivalent.
 *
 * test case(use `·` to represent the space character):
 *
 * ```
 * 30
 * 40
 * ```
 *
 * ```
 * ·30
 * ·40
 * ```
 *
 * ```
 * 30
 * ·40
 * ```
 *
 * ```
 * ·30
 * 40
 * ```
 *
 * ```
 * 30·40
 * ```
 */

#include <stdio.h>

int main(void) {
  int x, y;

  scanf("%d", &x);
  scanf(" %d", &y);

  printf("\"%%d\" represent: %d\n", x);
  printf("\" %%d\" represent: %d\n", y);

  return 0;
}
