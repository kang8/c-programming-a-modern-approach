/**
 * The value of the mathematical constant e can be expressed as an infinite
 * series:
 *
 * e = 1 + 1/1! + 1/2! + 1/3! + ...
 *
 * Write a program that approximates e by computing the value of
 *
 * 1 + 1/1! + 1/2! + 1/3! + ... + 1/n!
 *
 * where n is an integer entered by the user.
 */

#include <stdio.h>

int main(void) {
  int n, temp;
  float e = 1.0f;

  printf("Enter a number of n: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    temp = 1;
    for (int j = 2; j <= i; j++) {
      temp *= j;
    }

    e += (1.0f / temp);
  }

  printf("The approximates data: %f", e);

  return 0;
}
