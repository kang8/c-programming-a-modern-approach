/**
 * Write a program that asks the user to enter a value for x and then displays
 * the value of the following polynomial(多项式):
 *
 * ((((3x + 2)x - 5)x - 1)x + 7)x - 6
 *
 * Note that the modified program performs fewer multiplications. This technique
 * for evaluating polynomials is known as Horners's Rule.
 */

#include <stdio.h>

int main(void) {
  float x;
  printf("Enter a value of x: ");
  scanf("%f", &x);

  float result = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

  printf("The result of the polynomial: %f\n", result);

  return 0;
}
