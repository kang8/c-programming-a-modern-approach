/**
 * Would the ../upc.c program still work if the expression `9 - ((total - 1) %
 * 10)` were replaced by `(10 - (total % 10)) % 10`?
 *
 * ---
 *
 * Not work.
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
 * ((10 - (total % 10)) % 10)-> [0, 9]
 *
 * Run the following program, and you will get that when total is 0 ,the fist
 * algorithm result not same with the second algorithm result.
 */

#include <stdio.h>

int main(void) {
  for (int i = 0; i <= 100; i++) {
    int first = 9 - ((i - 1) % 10);
    int second = (10 - (i % 10)) % 10;

    if (first != second) {
      printf("Not same with %d, First result is %d, Second result is %d.\n", i,
             first, second);
    }
  }

  return 0;
}
