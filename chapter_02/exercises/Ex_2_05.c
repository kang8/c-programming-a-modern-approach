/**
 * Which of the following are not legal C identifiers?
 * (a) 100_bottles ❌,begin with a digit
 * (b) _100_buttles
 * (c) one__hundred__bottles
 * (d) bottles_by_the_hundred_
 */

#include <stdio.h>

int main(void)
{
    int 100_bottles;
    int _100_buttles;
    int one__hundred__bottles;
    int bottles_by_the_hundred_;

    return 0;
}
