/**
 * What does the following statement print if i has the value 17? What does it
 * print if i has the value -17?
 *
 * printf("%d\n", i >= 0 ? i : -i)
 *
 * --
 *
 * When i = 17, it will print 17.
 * When i = -17, it will print 17.
 */

#include <stdio.h>

int main(void) {
  int i;

  i = 17;
  printf("%d\n", i >= 0 ? i : -i);

  i = -17;
  printf("%d\n", i >= 0 ? i : -i);

  return 0;
}
