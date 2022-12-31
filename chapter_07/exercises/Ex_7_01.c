/**
 * Give the decimal value of each of the following integer constants.
 *
 * (a) 077   // 7 * 8 + 7 = 63
 * (b) 0x77  // 7 * 16 + 7 = 119
 * (c) 0XABC // 10 * 16 * 16 + 11 * 16 + 12 = 2748
 */

#include <stdio.h>

int main(void) {
  printf("077 = %d\n", 077);
  printf("0x77 = %d\n", 0x77);
  printf("0XABC = %d\n", 0XABC);

  return 0;
}
