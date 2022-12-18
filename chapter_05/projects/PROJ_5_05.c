/**
 * In one state, single residents are subject to the following income tax:
 *
 * Income           Amount of tax
 * Not over $750    1% of income
 * $750-$2,250      $7.50   plus 2% of amount over $750
 * $2,250-$3,750    $37.50  plus 3% of amount over $2,250
 * $3,750-$5,250    $82.50  plus 4% of amount over $3,750
 * $5,250-$7,000    $142.50 plus 5% of amount over $5,250
 * Over $7,000      $230.00 plus 6% of amount over $7,000
 *
 * Write a program that asks the user to enter the amount of taxable income,
 * then displays the tax due.
 */

#include <stdio.h>

int main(void) {
  float tax, income;

  printf("Enter the amount of taxable income: ");
  scanf("%f", &income);

  if (income < 750) {
    tax = income * .01f;
  } else if (income < 2250) {
    tax = 7.5f + (income - 750) * .02f;
  } else if (income < 3750) {
    tax = 37.5f + (income - 2250) * .03f;
  } else if (income < 5250) {
    tax = 82.5f + (income - 3750) * .04f;
  } else if (income < 7000) {
    tax = 142.5f + (income - 5250) * .05f;
  } else {
    tax = 230.0f + (income - 7000) * .06f;
  }

  printf("Tax due: %.2f\n", tax);

  return 0;
}
