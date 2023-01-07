/**
 * Write a program fragment that declares an 8×8 char array named checker_board
 * and then uses a loop to store the following data into the array(one character
 * per array element):
 *
 * B R B R B R B R
 * R B R B R B R B
 * B R B R B R B R
 * R B R B R B R B
 * B R B R B R B R
 * R B R B R B R B
 * B R B R B R B R
 * R B R B R B R B
 * B R B R B R B R
 * R B R B R B R B
 *
 * Hint: The element in row i, column j, should be the letter B if i+j is an
 * even number.
 */

#include <stdio.h>

#define CHESS_BOARD_SIZE 8

int main(void) {
  char checker_board[CHESS_BOARD_SIZE][CHESS_BOARD_SIZE] = {0};

  for (int row = 0; row < CHESS_BOARD_SIZE; row++) {
    for (int col = 0; col < CHESS_BOARD_SIZE; col++) {
      checker_board[row][col] = (row + col) % 2 == 0 ? 'B' : 'R';
    }
  }

  for (int row = 0; row < CHESS_BOARD_SIZE; row++) {
    for (int col = 0; col < CHESS_BOARD_SIZE; col++) {
      printf("%c ", checker_board[row][col]);
    }
    printf("\n");
  }

  return 0;
}
