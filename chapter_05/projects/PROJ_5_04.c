/**
 * Here's a simplified version of the Beaufort scale(蒲福风级), which is used to
 * estimate(估算) wind force(风力):
 *
 * Speed(knots)     Description
 * Less than 1      Calm
 * 1-3              Light air
 * 4-27             Breeze
 * 28-47            Gale(大风)
 * 48-63            Storm(狂风)
 * Above 63         Hurricane(飓风)
 *
 * Write a program that asks the user to enter a wind speed(in knots(节)), then
 * displays the corresponding description.
 */

#include <stdio.h>

int main(void) {
  int wind_speed;

  printf("Enter a wind speed: ");
  scanf("%d", &wind_speed);

  printf("Wind force: ");
  if (wind_speed < 1) {
    printf("Calm");
  } else if (wind_speed < 3) {
    printf("Light air");
  } else if (wind_speed < 27) {
    printf("Breeze");
  } else if (wind_speed < 47) {
    printf("Gale");
  } else if (wind_speed < 63) {
    printf("Storm");
  } else {
    printf("Hurricane");
  }

  return 0;
}
