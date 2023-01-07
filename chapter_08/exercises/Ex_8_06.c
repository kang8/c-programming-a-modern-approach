/**
 * Calculators, watches, and other electronic devices often rely on
 * seven-segment displays for numerical output. To form a digit, such devices
 * "turn on" some of the seven segments while leaving other "off":
 *
 *  _       _  _       _   _  _   _   _
 * | |   |  _| _| |_| |_  |_   | |_| |_|
 * |_|   | |_  _|   |  _| |_|  | |_|  _|
 *
 * Suppose that we want to set up an array that remebers which segements should
 * be "on" for each digit. Let's number the segements as follows:
 *
 *  _       0
 * |_| =>  561
 * |_|     432
 *
 * Here's what the array might look like, with each row representing one digit:
 *
 * const int segments[10][7] = {{1, 1, 1, 1, 1, 1, 0}, ...};
 *
 * I've given you the first row of the initializer; fill in the rest.
 */

#include <stdio.h>

int main(void) {
  // clang-format off
  const int segements[10][7] = {
    {1, 1, 1, 1, 1, 1, 0},
    {0, 1, 1, 0, 0, 0, 0},
    {1, 1, 0, 1, 1, 0, 1},
    {1, 1, 1, 1, 0, 0, 1},
    {0, 1, 1, 0, 0, 1, 1},
    {1, 0, 1, 1, 0, 1, 1},
    {1, 0, 1, 1, 1, 1, 1},
    {1, 1, 1, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 0, 1, 1},
  };
  // clang-format on

  for (int i = 0; i < 10; i++) {
    printf(" ");
    printf("%c", segements[i][0] ? '_' : ' ');
    printf(" \n");

    printf("%c", segements[i][5] ? '|' : ' ');
    printf("%c", segements[i][6] ? '_' : ' ');
    printf("%c\n", segements[i][1] ? '|' : ' ');

    printf("%c", segements[i][4] ? '|' : ' ');
    printf("%c", segements[i][3] ? '_' : ' ');
    printf("%c\n", segements[i][2] ? '|' : ' ');
  }

  return 0;
}
