/**
 * Write a program that asks the user to enter a dollars-and-cents amount, then
 * displays the amount with 5% tax added:
 *
 * Enter an amount: 100.00
 * With tax added: $105.00
 */

#include <stdio.h>
#define RATE_OF_TAX_PLUS_PRINCIPAL 1.05f

int main(void) {
  float amount;
  printf("Enter an amount: ");
  scanf("%f", &amount);

  printf("With tax added: $%.2f\n", amount * RATE_OF_TAX_PLUS_PRINCIPAL);

  return 0;
}
