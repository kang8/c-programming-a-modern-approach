/**
 * Write a program that asks the user to enter the numbers from 1 to 16 (in any
 * order) and then displays the numbers in a 4 by 4 arrangement(排列), followed
 * by the sums of the rows, columns, and diagonals(对角线):
 *
 * Enter the numbers from 1 to 16 in any order:
 * 16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1
 * 16  3  2 13
 *  5 10 11  8
 *  9  6  7 12
 *  4 15 14  1
 * Row sums: 34 34 34 34
 * Column sums: 34 34 34 34
 * Diagonal sums: 34 34
 *
 * If the row, column, and diagonal sums are all the same (as they are in this
 * example), the numbers are said to form a **magic square**(幻方). The magic
 * square shown here appears in a 1514 engraving(版画) by artist and
 * mathematician Albrecht Dürer. (Note that the middle numbers in the last row
 * give the date of the engraving.)
 */

#include <stdio.h>

int main(void) {
  int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, num12,
      num13, num14, num15, num16;

  printf("Enter the numbers from 1 to 16 in any order:\n");
  scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &num1, &num2, &num3,
        &num4, &num5, &num6, &num7, &num8, &num9, &num10, &num11, &num12,
        &num13, &num14, &num15, &num16);

  printf("%2d %2d %2d %2d\n", num1, num2, num3, num4);
  printf("%2d %2d %2d %2d\n", num5, num6, num7, num8);
  printf("%2d %2d %2d %2d\n", num9, num10, num11, num12);
  printf("%2d %2d %2d %2d\n", num13, num14, num15, num16);

  int row1, row2, row3, row4;
  int col1, col2, col3, col4;
  int diagonal1, diagonal2;

  row1 = num1 + num2 + num3 + num4;
  row2 = num5 + num6 + num7 + num8;
  row3 = num9 + num10 + num11 + num12;
  row4 = num13 + num14 + num15 + num16;

  printf("Row sums: %2d %2d %2d %2d\n", row1, row2, row3, row4);

  col1 = num1 + num5 + num9 + num13;
  col2 = num2 + num6 + num10 + num14;
  col3 = num3 + num7 + num11 + num15;
  col4 = num4 + num8 + num12 + num16;

  printf("Column sums: %2d %2d %2d %2d\n", col1, col2, col3, col4);

  diagonal1 = num1 + num6 + num11 + num16;
  diagonal2 = num4 + num7 + num10 + num13;

  printf("Diagonal sums: %2d %2d\n", diagonal1, diagonal2);
  return 0;
}
