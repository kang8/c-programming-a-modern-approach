/**
 * The ../../chapter_06/square2.c program of Section 6.3 will fail (susally by
 * printing strage answers) if i * i exceeds the maximum int value. Run the
 * program and determine the smallest value of n that causes failure. Try
 * changing the type of i to short and running the program again. (Don't forget
 * to update the conversion specifications in the call of printf!) Then try
 * long. From these expreiments, what can you conclude abount the number of bits
 * used to store integer types on your machine?
 *
 * ---
 *
 * In may machine, short is 16 bits, int is 32 bits, long is 64 bits.
 */

#include <stdio.h>

int main(void) {
  int n, i = 46340;
  short min_short = 181;
  int min_int = 46340;
  long min_long = 3037000499;

  printf("Success value:\n");
  printf("%22hd%22hd\n", min_short, (short)(min_short * min_short));
  printf("%22d%22d\n", min_int, min_int * min_int);
  printf("%22ld%22ld\n", min_long, min_long * min_long);

  printf("Fail value:\n");
  printf("%22hd%22hd\n", (short)(min_short + 1),
         (short)((min_short + 1) * (min_short + 1)));
  printf("%22d%22d\n", (min_int + 1), (min_int + 1) * (min_int + 1));
  printf("%22ld%22ld\n", (min_long + 1), (min_long + 1) * (min_long + 1));

  return 0;
}
