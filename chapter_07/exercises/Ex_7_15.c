/**
 * Use typedef to create types named Int8, Int16, and Int32. Define the types so
 * that they represent 8-bit, 16-bit, and 32-bit integers on your machine.
 */

#include <stdio.h>

int main(void) {
  typedef signed char Int8; // In C99, can use int8_t
  typedef short Int16;      // In C99, can use int16_t
  typedef int Int32;        // In C99, can use int32_t

  return 0;
}
