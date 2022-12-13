/**
 * Write a program that asks the use to enter a two-digit number, then prints
 * the number with its digits reversed. A session with the program should have
 * the following appearance:
 *
 * Enter a two-digit number: 28
 * The reversal is: 82
 *
 * Read the number using %d, then break it into two digits. Hint: IF n is an
 * integer. then n % 10 is the last digit in a and n / 10 is n with the last
 * digit removed.
 */

#include <stdio.h>

int main(void) {
  int num;

  printf("Enter a two-digit number: ");
  scanf("%d", &num);

  int last_digit = num % 10;
  int removed_last_digit = num / 10;

  int reversed_num = last_digit * 10 + removed_last_digit;

  printf("The reversal is: %d\n", reversed_num);

  return 0;
}
