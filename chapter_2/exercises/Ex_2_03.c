/**
 * Condense the ../dweight.c program by
 * (1) replacing the assignments to height, length, and width with initalizers and
 * (2) removing the weight variable, instead calculating (volume + 165) / 166 within the last printf
 */

#include <stdio.h>
#define INCHES_PER_POUND 166

int main(void)
{
    int length = 12, width = 10, height = 8, volume;

    volume = length * width * height;

    printf("Dimensional: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND);

    return 0;
}
