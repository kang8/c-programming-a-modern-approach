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
#include <stdlib.h>

int main(void) {
  int hour, minute;
  int closest_time = 5000, closest_departure_time, closest_arrival_time;

  printf("Enter a 24-hour time: ");
  scanf("%d :%d", &hour, &minute);

  int user_time = hour * 60 + minute;

  printf("Closest departure time is ");

  if (abs(user_time - 480) < closest_time) {
    closest_time = abs(user_time - 480);
    closest_departure_time = 480;
    closest_arrival_time = 616;
  }

  if (abs(user_time - 583) < closest_time) {
    closest_time = abs(user_time - 583);
    closest_departure_time = 583;
    closest_arrival_time = 712;
  }

  if (abs(user_time - 679) < closest_time) {
    closest_time = abs(user_time - 679);
    closest_departure_time = 679;
    closest_arrival_time = 811;
  }

  if (abs(user_time - 767) < closest_time) {
    closest_time = abs(user_time - 767);
    closest_departure_time = 767;
    closest_arrival_time = 900;
  }

  if (abs(user_time - 840) < closest_time) {
    closest_time = abs(user_time - 840);
    closest_departure_time = 840;
    closest_arrival_time = 968;
  }

  if (abs(user_time - 945) < closest_time) {
    closest_time = abs(user_time - 945);
    closest_departure_time = 945;
    closest_arrival_time = 1075;
  }

  if (abs(user_time - 1140) < closest_time) {
    closest_time = abs(user_time - 1140);
    closest_departure_time = 1140;
    closest_arrival_time = 1280;
  }

  if (abs(user_time - 1305) < closest_time) {
    closest_time = abs(user_time - 1305);
    closest_departure_time = 1305;
    closest_arrival_time = 1430;
  }

  printf("%d:%.2d %c.m., ",
         (closest_departure_time >= 780 ? closest_departure_time - 720
                                        : closest_departure_time) /
             60,
         closest_departure_time % 60,
         closest_departure_time >= 720 ? 'p' : 'a');

  printf("arriving at %d:%.2d %c.m.\n",
         (closest_arrival_time >= 780 ? closest_arrival_time - 720
                                      : closest_arrival_time) /
             60,
         closest_arrival_time % 60, closest_arrival_time >= 720 ? 'p' : 'a');

  return 0;
}
