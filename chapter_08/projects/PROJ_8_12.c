/**
 * Modify Programming Project 5 from Chapter
 * 7(../../chapter_07/projects/PROJ_7_05.c) so that the SCRABBLE value of the
 * letters are stored in an array. The array will have 26 elemtns, corresponding
 * to the 26 letters of the alphabet. For example, element 0 of the array will
 * store 1 (because the SCRABBLE value of the letter A is 1), element 1 of the
 * array will store 3 (because the SCRABBLE value of the letter B is 3), and so
 * forth. As each character of the input word is read, the program will use the
 * array to determine the SCRABBLE value of that character. Use an array
 * initalizer to set up the array.
 */

#include <ctype.h>
#include <stdio.h>

int main(void) {
  char letter;
  int total_face_value = 0;
  char scrabble[26] = {1, 3, 3, 2,  1, 4, 2, 4, 1, 8, 5, 1, 3,
                       1, 1, 3, 10, 1, 1, 1, 1, 3, 3, 8, 4, 10};

  printf("Etner a word: ");

  while ((letter = toupper(getchar())) != '\n') {
    total_face_value += scrabble[letter - 'A'];
  }

  printf("Scrabble value: %d\n", total_face_value);

  return 0;
}
