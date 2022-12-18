/**
 * Write a program that asks the user for a two-digit number, then prints the
 * English word for the number:
 *
 * Enter a two-digit number: 45
 * You entered the number forty-five.
 *
 * Hint: Break the number into two dights. Use one switch statement to print the
 * word for the first dight ("twenty," "thirty," and so forth). Use a second
 * switch statement to print the wrod for the second digit. Don't forget that
 * the numbers between 11 and 19 require special treatment.
 */

#include <stdio.h>

int main(void) {
  int num;

  printf("Enter a two-digit number: ");
  scanf("%d", &num);

  printf("You entered the number of ");
  if (num >= 10 && num <= 19) {
    switch (num) {
      case 10:
        printf("ten");
        break;
      case 11:
        printf("eleven");
        break;
      case 12:
        printf("twelve");
        break;
      case 13:
        printf("thirteen");
        break;
      case 14:
        printf("fourteen");
        break;
      case 15:
        printf("fifteen");
        break;
      case 16:
        printf("sixteen");
        break;
      case 17:
        printf("seventeen");
        break;
      case 18:
        printf("eightteen");
        break;
      case 19:
        printf("nineteen");
        break;
    }

    printf(".\n");
    return 0;
  }

  int first_digit, second_digit;
  first_digit = num / 10;
  second_digit = num % 10;

  switch (first_digit) {
    case 2:
      printf("twenty");
      break;
    case 3:
      printf("thirty");
      break;
    case 4:
      printf("forty");
      break;
    case 5:
      printf("fifty");
      break;
    case 6:
      printf("sixty");
      break;
    case 7:
      printf("seventy");
      break;
    case 8:
      printf("eighty");
      break;
    case 9:
      printf("ninety");
      break;
  }

  if (second_digit > 0) {
    printf("-");
    switch (second_digit) {
      case 1:
        printf("one");
        break;
      case 2:
        printf("two");
        break;
      case 3:
        printf("three");
        break;
      case 4:
        printf("four");
        break;
      case 5:
        printf("five");
        break;
      case 6:
        printf("six");
        break;
      case 7:
        printf("seven");
        break;
      case 8:
        printf("eight");
        break;
      case 9:
        printf("nine");
        break;
    }
  }

  printf(".\n");

  return 0;
}
