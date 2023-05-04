/**
 * Modify the ../repdigit.c program of Section 8.1 so that the user can enter
 * more than one number to be tested for repeated digits. The program should
 * terminate when the user enters a number that's less than or equal to 0.
 */

#include <stdbool.h>
#include <stdio.h>

int main(void) {
  bool digit_seen[10] = {false}, is_repeated = false;
  int digit;
  long n, temp;

  printf("Enter a number: ");

  do {
    scanf("%ld", &n);
    temp = n;

    while (is_repeated == false && temp > 0) {
      digit = temp % 10;
      if (digit_seen[digit]) {
        is_repeated = true;
      }

      digit_seen[digit] = true;
      temp /= 10;
    }

  } while (n > 0);

  if (is_repeated) {
    printf("Repeated digit\n");
  } else {
    printf("No repeated digit\n");
  }

  return 0;
}
