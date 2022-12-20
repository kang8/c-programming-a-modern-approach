/**
 * What output does the following for statement produce?
 *
 * for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1)
 *   printf("%d ", i); // 5 4 3 2
 *
 * --
 *
 * `--i, j = i - 1`. first run `--i`, i will decrement 1 immediately; then run
 * `j = i - 1`, so j will subtract 2 with i.
 */

#include <stdio.h>

int main(void) {
  int i, j;

  for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1) {
    printf("%d ", i);
  }

  return 0;
}
