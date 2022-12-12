/**
 * The algorithm for computing the UPC check digit end with the following steps:
 *
 * Subtract 1 from the total.
 * Compute the remainder when the adjusted total is divided by 10.
 * Subtract the remainder from 9.
 *
 * Is't tempting to try to simplify the algorithm by using these steps instead:
 *
 * Compute the remainder when the total is divided by 10.
 * Subtract the remainder from 10.
 *
 * Why doesn't this technique work?
 *
 * ---
 *
 * The expression of the first algorithm is: 9 - ((total - 1) % 10)
 * The expression of the second algorithm is: 10 - (total % 10)
 *
 * Assume that total is generate than or equal to 0(If total is less than 0
 * that, the situation will be more complicated):
 *
 * For the first algorithm:
 * total -> [0, ∞]
 * (total - 1) -> [-1, ∞]
 * ((total - 1) % 10) -> [-1, 9]
 * (9 - (total - 1) % 10) -> [0, 10]
 *
 * For the second algorithm:
 * total -> [0, ∞]
 * (total % 10) -> [0, 9]
 * (10 - (total % 10)) -> [1, 10]
 *
 * Run the following program, and you will get that when total is a multiple of
 * 10 ,the fist algorithm result not same with the second algorithm result.
 */

#include <stdio.h>

int main(void) {
  for (int i = 0; i <= 100; i++) {
    int first = 9 - ((i - 1) % 10);
    int second = 10 - (i % 10);

    if (first != second) {
      printf("Not same with %3d, First result is %d, Second result is %d.\n", i,
             first, second);
    }
  }

  return 0;
}
