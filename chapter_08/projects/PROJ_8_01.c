/**
 * Modify the ../repdigit.c program of Section 8.1 so that it shows shich digits
 * (if any) were repeated:
 *
 * Enter a number: 939577
 * Repeated digit(s): 7 9
 */

#include <stdbool.h>
#include <stdio.h>

int main(void) {
  int digit_seen[10] = {0}, digit;
  bool is_repeated = false;
  long n;

  printf("Enter a number: ");
  scanf("%ld", &n);

  while (n > 0) {
    digit = n % 10;
    digit_seen[digit]++;
    if (is_repeated == false && digit_seen[digit] == 2) {
      is_repeated = true;
    }
    n /= 10;
  }

  if (is_repeated) {
    printf("Repeated digit(s):");

    for (int i = 0; i < 10; i++) {
      if (digit_seen[i] > 1) {
        printf(" %d", i);
      }
    }
    printf("\n");

  } else {
    printf("No repeated digit\n");
  }

  return 0;
}
