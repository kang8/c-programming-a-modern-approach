/**
 * Write a program that reads a 5×5 array of integers and then prints the rwo
 * sums and the column sums:
 *
 * Enter row 1: 8 3 9 0 10
 * Enter row 2: 3 5 17 1 1
 * Enter row 3: 2 8 6 23 1
 * Enter row 4: 15 7 3 2 9
 * Enter row 5: 6 14 2 6 0
 *
 * Row totals: 30 27 40 36 28
 * Column totals: 34 37 37 32 21
 */

#include <stdio.h>

#define N 5

int main(void) {
  int matrix[N][N] = {0};
  int total;

  for (int row = 0; row < N; row++) {
    printf("Enter row %d: ", row + 1);

    for (int column = 0; column < N; column++) {
      scanf("%d", &matrix[row][column]);
    }
  }

  printf("Row totals:");

  for (int row = 0; row < N; row++) {
    total = 0;

    for (int column = 0; column < N; column++) {
      total += matrix[row][column];
    }

    printf(" %d", total);
  }

  printf("\nColumn totals:");

  for (int column = 0; column < N; column++) {
    total = 0;

    for (int row = 0; row < N; row++) {
      total += matrix[row][column];
    }

    printf(" %d", total);
  }

  printf("\n");

  return 0;
}
