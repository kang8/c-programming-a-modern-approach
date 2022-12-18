/**
 * Write a program that finds the largest and smallest of four integers entered
 * by the user:
 *
 * Enter four integers: 21 43 10 35
 * Largest: 43
 * Smallest: 10
 *
 * Use as few if statements as possible. Hint: Four if statement are
 * sufficient(足够).
 */

#include <stdio.h>

int main(void) {
  int i1, i2, i3, i4, largest, smallest, max12, max34, min12, min34;

  printf("Enter four integers: ");
  scanf("%d%d%d%d", &i1, &i2, &i3, &i4);

  if (i1 > i2) {
    max12 = i1;
    min12 = i2;
  } else {
    max12 = i2;
    min12 = i1;
  }

  if (i3 > i4) {
    max12 = i3;
    min12 = i4;
  } else {
    max12 = i4;
    min12 = i3;
  }

  if (max12 > max34) {
    largest = max12;
  } else {
    largest = max34;
  }

  if (min12 < min34) {
    smallest = min12;
  } else {
    smallest = min34;
  }

  printf("Largest: %d\n", largest);
  printf("Smallest: %d\n", smallest);

  return 0;
}
