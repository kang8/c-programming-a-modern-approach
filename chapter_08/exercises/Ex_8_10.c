/**
 * Write a declaration for an 8×8 char array named chess_board. Include an
 * initializer that puts the following data into the array (on character per
 * array element):
 *
 * r n b q k b n r
 * p p p p p p p p
 *   .   .   .   .
 * .   .   .   .
 *   .   .   .   .
 * .   .   .   .
 * P P P P P P P P
 * R N B Q K B N R
 */

#include <stdio.h>

#define CHESS_BOARD_SIZE 8

int main(void) {
  char chess_board[CHESS_BOARD_SIZE][CHESS_BOARD_SIZE] = {
      {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
      {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
      {' ', '.', ' ', '.', ' ', '.', ' ', '.'},
      {'.', ' ', '.', ' ', '.', ' ', '.', ' '},
      {' ', '.', ' ', '.', ' ', '.', ' ', '.'},
      {'.', ' ', '.', ' ', '.', ' ', '.', ' '},
      {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
      {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
  };

  for (int row = 0; row < CHESS_BOARD_SIZE; row++) {
    for (int col = 0; col < CHESS_BOARD_SIZE; col++) {
      printf("%c ", chess_board[row][col]);
    }
    printf("\n");
  }

  return 0;
}
