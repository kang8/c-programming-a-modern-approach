/**
 * Write a program that computes the factorial of a positie integer:
 *
 * Enter a positive integer: 6
 * Factorial of 6: 720
 *
 * (a) Use a short variable to store the value of the factorial. What is the
 * largest value of n for which the program correctly prints the factorial of n?
 * (b) Repeat part (a), using an int variable instead.
 * (c) Repeat part (a), using an long variable instead.
 * (d) Repeat part (a), using an long long variable instead (if your compiler
 * supports the long long type).
 * (e) Repeat part (a), using an float variable instead.
 * (f) Repeat part (a), using an double variable instead.
 * (g) Repeat part (a), using an long double variable instead.
 *
 * In cases (e)-(g), the program will display a close approximation of the
 * factorial, not neccessarily the exact value.
 *
 * ---
 *
 * a: 7
 * b: 12
 * c: 21
 * d: 21
 * e: 34
 * f: 171
 * g: 171
 */

#include <stdio.h>

int main(void) {
  int num;
  long double factorial = 1.0;

  printf("Enter a positive integer: ");

  scanf("%d", &num);

  for (int i = 2; i <= num; i++) {
    factorial *= i;
  }

  printf("Factorial of %d: %Lf", num, factorial);

  return 0;
}
