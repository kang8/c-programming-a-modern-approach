/**
 * Using the shortcuts described in Section 8.2, shrink the initializer for the
 * segments array(Exercise 6(./Ex_8_06.c)) as much as you can.
 */

#include <stdio.h>

int main(void) {
  // clang-format off
  const int segements[10][7] = {
    {1, 1, 1, 1, 1, 1, 0},
    {0, 1, 1},
    {1, 1, 0, 1, 1, 0, 1},
    {1, 1, 1, 1, 0, 0, 1},
    {0, 1, 1, 0, 0, 1, 1},
    {1, 0, 1, 1, 0, 1, 1},
    {1, 0, 1, 1, 1, 1, 1},
    {1, 1, 1},
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
