/**
 * Modify Programming Project 4 from Chapter
 * 7(../../chapter_07/projects/PROJ_7_04.c) so that the program labels its
 * output:
 *
 * Enter phone number: 1-800-COL-LECT
 * In numeric form: 1-800-265-5328
 *
 * The program will need to store the phone number (either in its original form
 * or in its numeric form) in an array of characters until it can be printed.
 * You may assume that the phone number is no more than 15 characters long.
 */

#include <stdio.h>

int main(void) {
  char number;
  char phone[15] = {0};
  int length = 0;

  printf("Enter phone number: ");

  while ((number = getchar()) != '\n') {
    phone[length++] = number;
  }

  printf("In numeric form: ");

  for (int i = 0; i < length; i++) {
    if (phone[i] < 'A' || phone[i] > 'Z') {
      continue;
    }

    if (phone[i] == 'Z') {
      phone[i] = '9';
      continue;
    }

    phone[i] = ((phone[i] - 'A') / 3) + 2 + '0';
  }

  for (int i = 0; i < length; i++) {
    putchar(phone[i]);
  }

  return 0;
}
