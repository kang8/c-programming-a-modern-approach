/**
 * Write a program that translates an alphabetic phone number into numeric form:
 *
 * Enter phone number: CALLATT
 * 2255288
 *
 * (In case you don't have a telephone nearby, here are the letters on the keys:
 * 2=ABC, 3=DEF, 4=GHI, 5=JKL, 6=MNO, 7=PRS, 8=TUV, 9=WXYZ.) If the original
 * phone number contains nonalphabetic characters (digits or punctuation, for
 * example), leave them unchanged:
 *
 * Enter phone number: 1-800-COL-LECT
 * 1-800-265-5328
 *
 * You may assume that any letters entered by the user are upper case.
 */

#include <stdio.h>

int main(void) {
  char number;

  printf("Enter phone number: ");

  while ((number = getchar()) != '\n') {
    if (number < 'A' || number > 'Z') {
      putchar(number);
      continue;
    }

    if (number == 'Z') {
      putchar('9');
      continue;
    }

    int key = (number - 'A') / 3;
    printf("%d", key + 2);
  }

  return 0;
}
