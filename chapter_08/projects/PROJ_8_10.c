/**
 * Modify Programming Project 8 from Chapter
 * 5(../../chapter_05/projects/PROJ_5_08.c) so that the departure times are
 * stored in an array and the arrival times are stored in a second array. (The
 * times are integers, representing the number of minutes since midnight.) The
 * program will use a loop to search the array of departure times for the one
 * closest to the time entered by the user.
 */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int hour, minute, interval_time;
  int closest_departure_time, closest_arrival_times, closest_time = 5000;

  int departure_times[] = {480, 583, 679, 767, 840, 945, 1140, 1305};
  int arrival_times[] = {616, 712, 811, 900, 968, 1075, 1280, 1438};

  int length = (int)(sizeof(departure_times) / sizeof(departure_times[0]));

  printf("Enter a 24-hour time: ");
  scanf("%d :%d", &hour, &minute);

  int minutes_starting_at_midnight = hour * 60 + minute;

  printf("Closest departure time is ");

  for (int i = 0; i < length; i++) {

    interval_time = abs(minutes_starting_at_midnight - departure_times[i]);

    if (interval_time < closest_time) {
      closest_time = interval_time;
      closest_departure_time = departure_times[i];
      closest_arrival_times = arrival_times[i];
    }
  }

  printf("%d:%.2d %c.m., ",
         (closest_departure_time >= 780 ? closest_departure_time - 720
                                        : closest_departure_time) /
             60,
         closest_departure_time % 60,
         closest_departure_time >= 720 ? 'p' : 'a');

  printf("arriving at %d:%.2d %c.m.\n",
         (closest_arrival_times >= 780 ? closest_arrival_times - 720
                                       : closest_arrival_times) /
             60,
         closest_arrival_times % 60, closest_arrival_times >= 720 ? 'p' : 'a');

  return 0;
}
