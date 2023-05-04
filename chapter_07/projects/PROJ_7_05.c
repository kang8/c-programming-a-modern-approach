/**
 * In the SCRABBLE Crossword Game, players from words using small tiles, each
 * containing a letter and a face value. The face value varies from one letter
 * to another, based on the letters's rarity. (Here are the face values: 1:
 * AEILNORSTU, 2: DG, 3:BCMP, 4: FHVWY, 5: K, 8:JX, 10:QZ.) Write a program
 * that computes the value of a word by summing the values of its letters:
 *
 * Enter a word: pitfall
 * Scrabble value: 12
 *
 * Your program should allow any mixture of lower-case and upper-case letters in
 * the word. Hint: Use the toupper library function.
 */

#include <ctype.h>
#include <stdio.h>

int main(void) {
  char letter;
  int face_value = 0, total_face_value = 0;

  printf("Etner a word: ");

  while ((letter = toupper(getchar())) != '\n') {
    switch (letter) {
      case 'A':
      case 'E':
      case 'I':
      case 'L':
      case 'N':
      case 'O':
      case 'R':
      case 'S':
      case 'T':
      case 'U':
        face_value = 1;
        break;
      case 'D':
      case 'G':
        face_value = 2;
        break;
      case 'B':
      case 'C':
      case 'M':
      case 'P':
        face_value = 3;
        break;
      case 'F':
      case 'H':
      case 'V':
      case 'W':
      case 'Y':
        face_value = 4;
        break;
      case 'K':
        face_value = 5;
        break;
      case 'J':
      case 'X':
        face_value = 8;
        break;
      case 'Q':
      case 'Z':
        face_value = 10;
        break;
      default:
        face_value = 0;
        break;
    }

    total_face_value += face_value;
  }

  printf("Scrabble value: %d\n", total_face_value);

  return 0;
}
