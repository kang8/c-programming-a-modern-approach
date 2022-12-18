/**
 * Write a program that prompts the user to enter two dates and then indicates
 * which date comes earlier on the calendar:
 *
 * Enter first date (mm/dd/yy): 3/6/08
 * Enter second date (mm/dd/yy): 5/17/07
 * 5/17/07 is earlier than 3/6/08
 */

#include <stdio.h>

int main(void) {
  int first_month, first_day, first_year, second_month, second_day, second_year;

  printf("Enter first date (mm/dd/yy): ");
  scanf("%d /%d /%d", &first_month, &first_day, &first_year);

  printf("Enter second date (mm/dd/yy): ");
  scanf("%d /%d /%d", &second_month, &second_day, &second_year);

  if (first_year > second_year) {
    printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", second_month, second_day,
           second_year, first_month, first_day, first_year);
  } else if (first_year < second_year) {
    printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", first_month, first_day,
           first_year, second_month, second_day, second_year);
  } else if (first_month > second_month) {
    printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", second_month, second_day,
           second_year, first_month, first_day, first_year);
  } else if (first_month < second_month) {
    printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", first_month, first_day,
           first_year, second_month, second_day, second_year);
  } else if (first_day > second_day) {
    printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", second_month, second_day,
           second_year, first_month, first_day, first_year);
  } else if (first_day < second_day) {
    printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", first_month, first_day,
           first_year, second_month, second_day, second_year);
  } else {
    printf("Two dates are the same\n");
  }

  return 0;
}
