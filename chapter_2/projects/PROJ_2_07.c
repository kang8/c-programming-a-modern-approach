/**
 * Write a program that asks the user to enter a U.S. dollar amount and then
 * shows how to pay that amount using the smallest number of $20, $10, $5 and $1
 * bills:
 *
 * Enter a dollar amount: 93
 * $20 bills: 4
 * $10 bills: 1
 *  $5 bills: 0
 *  $1 bills: 3
 *
 * Hint: Divide the amount by 20 to determine the number of $20 bills needed,
 * and then reduce the amount by the total value of the $20 bills. Repeat for
 * the other bill sizes. Be sure to use integer values throughout, not
 * floating-point numbers.
 */

#include <stdio.h>

#define DOLLAR_TWENTY 20
#define DOLLAR_TEN 10
#define DOLLAR_FIVE 5
#define DOLLAR_ONE 1

int main(void) {
  int amount;

  printf("Enter a dollar amount: ");
  scanf("%d", &amount);

  int number_of_20 = amount / DOLLAR_TWENTY;
  amount = amount - DOLLAR_TWENTY * number_of_20;

  int number_of_10 = amount / DOLLAR_TEN;
  amount = amount - DOLLAR_TEN * number_of_10;

  int number_of_5 = amount / DOLLAR_FIVE;
  amount = amount - DOLLAR_FIVE * number_of_5;

  int number_of_1 = amount / DOLLAR_ONE;
  amount = amount - DOLLAR_ONE * number_of_1;

  printf("$20 bills: %d\n", number_of_20);
  printf("$10 bills: %d\n", number_of_10);
  printf(" $5 bills: %d\n", number_of_5);
  printf(" $1 bills: %d\n", number_of_1);

  return 0;
}
