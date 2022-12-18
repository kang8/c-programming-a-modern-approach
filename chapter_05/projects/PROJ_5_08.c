/**
 * The following table shows the daily fights from one city to another:
 *
 * Departure time     Arrival time
 *  8:00 a.m.          10:16 a.m.
 *  9:43 a.m.          11:52 a.m.
 * 11:19 a.m.           1:31 p.m.
 * 12:47 p.m.           3:00 p.m.
 *  2:00 p.m.           4:08 p.m.
 *  3:45 p.m.           5:55 p.m.
 *  7:00 p.m.           9:20 p.m.
 *  9:45 p.m.          11:58 p.m.
 *
 * Write a program that asks user to enter a time(expressed in hours and
 * minutes, using 24-hour clock). The program then displays the departure and
 * arrival times for the flight whose departure time is closest to that entered
 * by the user:
 *
 * Enter a 24-hour time: 13:15
 * Closest departure time is 12:47 p.m., arriving at 3:00 p.m.
 *
 * Hint: Covert the input into a time expressed in minutes since midnight, and
 * compare it to the departure times, also expressed in minutes since midnight.
 * For example, 13:15 is 13 ✕ 60 + 15 = 795 minutes since midnight, which is
 * closer to 12:47 p.m.(767 minutes since midnight) that to any of the other
 * departure times.
 */

#include <stdio.h>

int main(void) {
  int hour, minute;

  printf("Enter a 24-hour time: ");
  scanf("%d :%d", &hour, &minute);

  int minutes_starting_at_midnight = hour * 60 + minute;

  printf("Closest departure time is ");
  if (minutes_starting_at_midnight > (12 + 9) * 60 + 45 ||
      minutes_starting_at_midnight <= 8 * 60) {
    printf("8:00 a.m., arriving at 10:16 a.m.");
  } else if (minutes_starting_at_midnight <= 9 * 60 + 43) {
    printf("9:43 a.m., arriving at 11:52 a.m.");
  } else if (minutes_starting_at_midnight <= 11 * 60 + 19) {
    printf("11:19 a.m., arriving at 1:31 p.m.");
  } else if (minutes_starting_at_midnight <= (12 + 12) * 60 + 47) {
    printf("12:47 p.m., arriving at 3:00 p.m.");
  } else if (minutes_starting_at_midnight <= (12 + 2) * 60) {
    printf("2:00 p.m., arriving at 4:08 p.m.");
  } else if (minutes_starting_at_midnight <= (12 + 3) * 60 + 45) {
    printf("3:45 p.m., arriving at 5:55 p.m.");
  } else if (minutes_starting_at_midnight <= (12 + 7) * 60) {
    printf("7:00 p.m., arriving at 9:20 p.m.");
  } else if (minutes_starting_at_midnight <= (12 + 9) * 60 + 45) {
    printf("9:45 p.m., arriving at 11:58 p.m.");
  }

  return 0;
}
