/**
 * (b) "%d-%d-%d" versus "%d -%d -%d"
 *
 * ---
 *
 * two format strings are not equivalent.
 *
 * test case(use `·` to represent the space character):
 *
 * equivalent:
 * ```
 * 30-40-50
 * 40-40-50
 * ```
 *
 * not equivalent:
 * ```
 * 30·-40·-50
 * 30·-40·-50
 * ```
 *
 * equivalent:
 * ```
 * 30-40-50
 * 30·-40·-50
 * ```
 *
 */

#include <stdio.h>

int main(void) {
  int x1, x2, x3;
  int y1, y2, y3;

  scanf("%d-%d-%d", &x1, &x2, &x3);
  scanf("%d -%d -%d", &y1, &y2, &y3);

  printf("\"%%d-%%d-%%d\" represent: %d,%d,%d\n", x1, x2, x3);
  printf("\"%%d -%%d -%%d\" represent: %d,%d,%d\n", y1, y2, y3);

  return 0;
}
