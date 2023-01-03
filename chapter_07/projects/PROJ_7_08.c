/**
 * Modify Programming Project 8 form Chapter
 * 5(../../chapter_05/projects/PROJ_5_08.c) so that the user enters a time using
 * the 12-hour clock. The input will have the form hours:minutes followed by
 * either A, P, AM, or PM (either lower-case or upper-case). White space is
 * allowed (but not required) between the numerical time and the AM/PM
 * indicator. Examples of valid input:
 *
 * 1:15
 * 1:15PM
 * 1:15p
 * 1:15pm
 * 1:15 P
 * 1:15 PM
 * 1:15 p
 * 1:15 pm
 *
 * You may assume that the input has one of these forms; there is no need to
 * test for errors.
 */

#include <ctype.h>
#include <stdio.h>

int main(void) {
  int hour, minute;
  char period;

  printf("Enter a 12-hour clock: ");
  scanf("%d :%d %c", &hour, &minute, &period);

  int minutes_starting_at_midnight;

  switch (toupper(period)) {
    case 'A':
      minutes_starting_at_midnight = hour * 60 + minute;
      break;
    case 'P':
      minutes_starting_at_midnight = hour * 60 + minute + (12 * 60);
      break;
  }

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
