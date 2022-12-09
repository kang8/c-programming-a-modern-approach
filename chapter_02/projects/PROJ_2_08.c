/**
 * Write a program that calculates the remaining balance on a loan after the
 * first, second, and third monthly payments:
 *
 * Enter amount of loan: 20000.00
 * Enter interest rate: 6.0
 * Enter monthly payment: 386.66
 *
 * Balance remaining after first payment: $19713.34
 * Balance remaining after second payment: $19425.25
 * Balance remaining after third payment: $19135.71
 *
 * Display each balance with two digits after the decimal point.
 *
 * Hint: Each month, the balance is decreased by the amount of the payment, but
 * increased by the balance times the monthly interest rate. To find the monthly
 * interest rate, convert the interest rate entered by the user to a percentage
 * and divide it by 12.
 */

#include <stdio.h>

int main(void) {
  float amount, annual_interest_rate, monthly_payment;

  printf("Enter amount of loan: ");
  scanf("%f", &amount);

  printf("Enter interest rate: ");
  scanf("%f", &annual_interest_rate);

  printf("Enter monthly payment: ");
  scanf("%f", &monthly_payment);

  float monthly_interest_rate = annual_interest_rate / 12 / 100;

  float balance_remaining_after_first_payment =
      amount * (1 + monthly_interest_rate) - monthly_payment;

  printf("Balance remaining after first payment: $%.2f\n",
         balance_remaining_after_first_payment);

  float balance_remaining_after_second_payment =
      balance_remaining_after_first_payment * (1 + monthly_interest_rate) -
      monthly_payment;

  printf("Balance remaining after second payment: $%.2f\n",
         balance_remaining_after_second_payment);

  float balance_remaining_after_third_payment =
      balance_remaining_after_second_payment * (1 + monthly_interest_rate) -
      monthly_payment;

  printf("Balance remaining after third payment: $%.2f\n",
         balance_remaining_after_third_payment);

  return 0;
}
