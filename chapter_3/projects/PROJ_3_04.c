/**
 * Write a program that prompts the user to enter a telephone number in the form
 * (xxx) xxx-xxxx and then displays the number in the from xxx.xxx.xxxx:
 *
 * Enter phone number [(xxx) xxx-xxxx]: (404) 817-6900
 * You entered 404.817.6900
 */

#include <stdio.h>

int main(void) {
  int front_number, middle_number, back_number;

  printf("Enter phone number [(xxx) xxx-xxxx]: ");
  scanf("(%d) %d-%d", &front_number, &middle_number, &back_number);

  printf("You entered %.3d.%.3d.%.4d\n", front_number, middle_number, back_number);

  return 0;
}
