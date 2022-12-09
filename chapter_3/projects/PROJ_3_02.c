/**
 * Write a program that formats product information entered by the user. A
 * session with the program should look like this:
 *
 * Enter item number: 583
 * Enter unit price: 13.5
 * Enter purchase date (mm/dd/yyyy): 10/24/2010
 * Item            Unit            Purchase
 *                 Price           Date
 * 583             $  13.50        10/24/2010
 *
 * The item number and date should the be left justified; the unit price should
 * be right justified. Allow dollar amounts up to $9999.99. Hint: Use tabs to
 * line up the columns.
 */

#include <stdio.h>

int main(void) {
  int item_number, purchase_month, purchase_day, purchase_year;
  float unit_price;

  printf("Enter item number: ");
  scanf("%d", &item_number);

  printf("Enter unit price: ");
  scanf("%f", &unit_price);

  printf("Enter purchase date(mm/dd/yyyy): ");
  scanf("%d/%d/%d", &purchase_month, &purchase_day, &purchase_year);

  printf("Item\t\tUnit\t\tPurchase\n");
  printf("\t\tPrice\t\tDate\n");
  // Easy to make mistakes: use `$%7.2f\t\t` instead of `$%7.2f\t`.
  // `$%7.2f` occupy 8 characters, so there is only one `\t`
  printf("%-d\t\t$%7.2f\t%.2d/%.2d/%d\n", item_number, unit_price,
         purchase_month, purchase_day, purchase_year);

  return 0;
}
