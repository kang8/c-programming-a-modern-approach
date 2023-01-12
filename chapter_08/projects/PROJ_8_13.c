/**
 * Modify Programming Project 11 from Chapter
 * 7(../../chapter_07/projects/PROJ_7_11.c) so that the program labels its
 * output:
 *
 * Enter a frist and last name: Lloyd Fosdick
 * You entered the name: Fosdick, L.
 *
 * The program will need to store the last name (but not the first name) in an
 * array of characters until it can be printed. You may assume that the last
 * name is no more than 20 characters long.
 */

#include <stdio.h>

int main(void) {
  char letter, first_name_inital;
  char last_name[20] = {0};
  int length = 0;

  printf("Enter a first and last name: ");
  scanf(" %c", &first_name_inital);

  while (getchar() != ' ')
    ;

  while ((letter = getchar()) == ' ')
    ;

  do {
    last_name[length++] = letter;
  } while ((letter = getchar()) != '\n' && letter != ' ');

  for (int i = 0; i < length; i++) {
    putchar(last_name[i]);
  }

  printf(", %c.", first_name_inital);

  return 0;
}
