/**
 * Which one of the following statements is not equivalent to the other
 * two(assuming that the loop bodies are the same)?
 *
 * (a) for (i = 0; i < 10; i++) ...
 * (b) for (i = 0; i < 10; ++i) ...
 * (c) for (i = 0; i++ < 10;) ...
 *
 * --
 *
 * c is not equivalent to a and b. With c, ill display `i + 1` in loop
 * body, but the other two will display `i` in loop body.
 */

#include <stdio.h>

int main(void) {
  int i;

  for (i = 0; i < 10; i++) {
    printf("%d ", i);
  }
  printf("\n");

  for (i = 0; i < 10; ++i) {
    printf("%d ", i);
  }
  printf("\n");

  for (i = 0; i++ < 10;) {
    printf("%d ", i);
  }
  printf("\n");

  return 0;
}
