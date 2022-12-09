/**
 * Write a program that accepts a date from the user in the form mm/dd/yyyy and
 * then displays it in the from yyyymmdd:
 *
 * Enter a date (mm/dd/yyyy): 2/17/2011
 * You entered the date 20110217
 */

#include <stdio.h>

int main(void) {
  int month, day, year;

  printf("Enter a date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month, &day, &year);

  printf("You entered the date %.4d%.2d%.2d\n", year, month, day);

  return 0;
}
