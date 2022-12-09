/**
 * Write a program that computes the volume(体积) of a sphere with a 10-meter radius(半径), using the formula v=4/3πr^3. Write the fraction 4/3 as 4.0f/3.0f.(Try writing it as 4/3. What happens?)Hint: C doesn't have na exponentiation operator, so you'll need to multiply r by itself twice to compute r^3.
 *
 * ---
 *
 * Volume: 4186.666992.
 *
 * > Try writing it as 4/3. What happens?
 * The result is wrong. 4/3 = 1 but 4.0f / 3.0f = 1.333333
 */

#include <stdio.h>
#define PI 3.14f

int main(void)
{
    float r = 10.0f;

    float volume = 4.0f / 3.0f * PI * r * r * r;
    float volume_by_int = 4 / 3 * PI * r * r * r;

    printf("The volume of a shere: %f\n", volume);
    printf("The volume of a shere: %f\n", volume_by_int);

    return 0;
}
