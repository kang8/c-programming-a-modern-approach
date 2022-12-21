/**
 * Programming Project 9 in Chapter 5(../../chapter_05/projects/PROJ_5_09.c)
 * asked you to write a program that determines which of two dates comes earlier
 * on the calendar. Generalize the program so that the user may enter any number
 * of dates. The user will enter 0/0/0 to indicate that not more dates will be
 * entered:
 *
 * Enter a date (mm/dd/yy): 3/6/08
 * Enter a date (mm/dd/yy): 5/17/07
 * Enter a date (mm/dd/yy): 6/3/07
 * Enter a date (mm/dd/yy): 0/0/00
 * 5/17/07 is the earliest date
 */

#include <stdio.h>

int main(void) {
  int month, day, year, earliest_month = 20, earliest_day = 50,
                        earliest_year = 100;

  while (1) {
    printf("Enter a date (mm/dd/yy): ");
    scanf("%d /%d /%d", &month, &day, &year);

    if (month == 0 && day == 0 && year == 0) {
      break;
    }

    if (earliest_year > year) {
      earliest_year = year;
      earliest_month = month;
      earliest_day = day;
    }

    if (earliest_year == year && earliest_month > month) {
      earliest_month = month;
      earliest_day = day;
    }

    if (earliest_year == year && earliest_month == month &&
        earliest_day > day) {
      earliest_day = day;
    }
  }
  printf("%d/%d/%.2d is earliest date\n", earliest_month, earliest_day,
         earliest_year);

  return 0;
}
