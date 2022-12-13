/**
 * Extend the program in programming Project 1(./PROJ_4_01.c) to handle three-digit numbers.
 */

#include <stdio.h>

int main(void) {
  int num;

  printf("Enter a three-digit number: ");
  scanf("%d", &num);

  int last_digit = num % 10;
  int second_digit = num % 100 / 10;
  int first_digit = num / 100;

  int reversed_num = last_digit * 100 + second_digit * 10 + first_digit;

  printf("The reversal is: %d\n", reversed_num);

  return 0;
}
