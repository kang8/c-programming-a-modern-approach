/**
 * Modify Programming Project 11(./PROJ_6_11.c) so that the program continues
 * adding terms until the current term becomes less than ε, where ε is a small
 * (floating-point) number entered by the user.
 */

#include <stdio.h>

int main(void) {
  int factorial = 1;
  float e = 1.0f, epsilon, current_term = 1.0f;

  printf("Enter a small number of ε: ");
  scanf("%f", &epsilon);

  for (int i = 1; current_term >= epsilon; i++) {
    factorial *= i;

    current_term = 1.0f / factorial;

    e += current_term;
  }

  printf("The approximates data: %f", e);

  return 0;
}
