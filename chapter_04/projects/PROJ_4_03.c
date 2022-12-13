/**
 * Rewrite the program in Programming Project 2(./PROJ_4_02.c) so that it prints
 * the reversal of a three-digit number without using arithmetic to split the
 * number into digits. Hint: See the ../upc.c program of Section 4.1.
 */

#include <stdio.h>

int main(void) {
  int first_digit, second_digit, last_digit;

  printf("Enter a three-digit number: ");
  scanf("%1d%1d%1d", &first_digit, &second_digit, &last_digit);

  printf("The reversal is: %d%d%d\n", last_digit, second_digit, first_digit);

  return 0;
}
