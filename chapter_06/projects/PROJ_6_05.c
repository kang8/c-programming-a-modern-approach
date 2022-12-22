/**
 * Programming Project 1 in Chapter 4(../../chapter_04/projects/PROJ_4_01.c)
 * asked you to write a program that displays a two-digit number with its digits
 * reversed. Generalize the program so that the number can have one, two, three,
 * or more digits. Hint: Use a do loop that repeatedly divides the number by 10,
 * stopping whe it reaches 0.
 */

#include <stdio.h>

int main(void) {
  int num, remainder;

  printf("Enter a number: ");
  scanf("%d", &num);

  printf("The reversal is: ");

  do {
    int remainder = num % 10;
    num /= 10;
    printf("%d", remainder);
  } while (num != 0);

  return 0;
}
