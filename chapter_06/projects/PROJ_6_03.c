/**
 * Write a program that asks the user to enter a fraction, then reduces the
 * fraction to lowest terms:
 *
 * Enter a fraction: 6/12
 * In lowest terms: 1/2
 *
 * Hint: To reduce a fraction to lowest terms, first compute the GCD of the
 * numerator and denominator. Then divide both the numerator and denominator by
 * the GCD.
 */

#include <stdio.h>

int main(void) {
  int numerator, denominator, n, m, temp, gcd;

  printf("Enter a fraction: ");
  scanf("%d/%d", &numerator, &denominator);

  n = numerator;
  m = denominator;

  while (n != 0) {
    temp = m % n;
    m = n;
    n = temp;
  }

  gcd = m;

  printf("In lowest terms: %d/%d\n", numerator / gcd, denominator / gcd);

  return 0;
}
