/**
 * Programming Project 8 in Chapter 2(../../chapter_02/projects/PROJ_2_08.c)
 * asked you to write a program that calculates the remainning balance on a loan
 * after the first, second, and third monthly payments, Modify the program so
 * that it also asks the user to enter the number of payments and then displays
 * the balance remainning after each of these payments.
 */

#include <stdio.h>

int main(void) {
  float amount, annual_interest_rate, monthly_payment;
  int num_of_payment;

  printf("Enter amount of loan: ");
  scanf("%f", &amount);

  printf("Enter interest rate: ");
  scanf("%f", &annual_interest_rate);

  printf("Enter monthly payment: ");
  scanf("%f", &monthly_payment);

  printf("Enter number of payments: ");
  scanf("%d", &num_of_payment);

  float monthly_interest_rate = annual_interest_rate / 12 / 100,
        balance_remaining = amount;

  for (int i = 1; i <= num_of_payment; i++) {
    balance_remaining =
        balance_remaining * (1 + monthly_interest_rate) - monthly_payment;

    printf("Balance remaining after %d payment: $%.2f\n", i, balance_remaining);
  }

  return 0;
}
