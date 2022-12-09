/**
 * Modify the program of Programming Project 2(./PROJ_2_02.c) so that it prompts
 * the user to enter the radius of the shpere.
 */

#include <stdio.h>
#define PI 3.14f

int main(void) {
  float r;
  printf("Enter the raduis of the shpere: ");
  scanf("%f", &r);

  float volume = 4.0f / 3.0f * PI * r * r * r;

  printf("The volume of a shere: %f\n", volume);

  return 0;
}
