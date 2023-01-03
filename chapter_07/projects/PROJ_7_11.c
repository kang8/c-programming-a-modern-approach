/**
 * Write a program that takes a first name and last name entered by the user and
 * displays the last name, a comma, and the first inital, followed by a period:
 *
 * Enter a first and last name: Lloyd Fosdick
 * Fosdick, L.
 *
 * The user's input may contain extra spaces before the first name, between the
 * first and last names, and after the last name.
 */

#include <stdio.h>

int main(void) {
  char letter, first_name_inital;

  printf("Enter a first and last name: ");
  scanf(" %c", &first_name_inital);

  while (getchar() != ' ')
    ;

  while ((letter = getchar()) == ' ')
    ;

  do {
    putchar(letter);
  } while ((letter = getchar()) != '\n' && letter != ' ');

  printf(", %c.", first_name_inital);

  return 0;
}
