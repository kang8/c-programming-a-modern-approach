/**
 * Write a program that generates a "random walk" across a 10×10 array. The
 * array will contain characters (all '.' initially). The program must randomly
 * "walk" from element to element, always going up, down, left, or right by one
 * element. The elements visited by the program will be labeled with the letters
 * A through Z, in the order visited. Here's an example of the desired output:
 *
 * A . . . . . . . . .
 * B C D . . . . . . .
 * . F E . . . . . . .
 * H G . . . . . . . .
 * I . . . . . . . . .
 * J . . . . . . . Z .
 * K . . R S T U V Y .
 * L M P Q . . . W X .
 * . N O . . . . . . .
 * . . . . . . . . . .
 *
 * Hint: Use the srand and rand function (see ../deal.c) to generate random
 * numbers. After generating a number, look at its remainder when divided by 4.
 * There are four possible values for the remainder--0, 1, 2, and 3--indicating
 * the direction of the next move. Before performing a move, check that (a) it
 * won't go outside the array, and (b) it doesn't take us to an element that
 * already has a letter assigned. If either condition is violated, try moving in
 * another direction. If all four directions are blocked, the program must
 * terminate. Here's an example of premature termination:
 *
 * A B G H I . . . . .
 * . C F . J K . . . .
 * . D E . M L . . . .
 * . . . . N O . . . .
 * . . W X Y P Q . . .
 * . . V U T S R . . .
 * . . . . . . . . . .
 * . . . . . . . . . .
 * . . . . . . . . . .
 * . . . . . . . . . .
 *
 * Y is blocked on all four sides, so there's no place to put Z.
 *
 * ---
 *
 * 0 is go right, +1, 0
 * 1 is go down , 0, +1
 * 2 is go left , -1, 0
 * 3 is go up   , 0, -1
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main(void) {
  char board[SIZE][SIZE] = {'A'};
  int count = 1, previous_row, previous_column, current_row = 0,
      current_column = 0, direction;

  srand((unsigned)time(NULL));

  while (count != 26) {
    previous_row = current_row;
    previous_column = current_column;

    while (1) {
      current_row = previous_row;
      current_column = previous_column;

      direction = rand() % 4;

      switch (direction) {
        case 0:
          current_row = previous_row + 1;
          break;
        case 1:
          current_column = previous_column + 1;
          break;
        case 2:
          current_row = previous_row - 1;
          break;
        case 3:
          current_column = previous_column - 1;
          break;
      }

      if (current_row < 0 || current_column < 0 || current_row >= SIZE ||
          current_column >= SIZE || board[current_row][current_column] != 0) {
        continue;
      } else {
        break;
      }
    }

    board[current_row][current_column] =
        board[previous_row][previous_column] + 1;

    if (board[current_row + 1][current_column] != 0 &&
        board[current_row][current_column + 1] &&
        board[current_row - 1][current_column] &&
        board[current_row][current_column - 1]) {
      break;
    }

    count++;
  }

  for (int row = 0; row < SIZE; row++) {
    for (int column = 0; column < SIZE; column++) {
      printf("%c ", board[row][column] == 0 ? '.' : board[row][column]);
    }
    printf("\n");
  }

  return 0;
}
