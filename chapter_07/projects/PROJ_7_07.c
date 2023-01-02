/**
 * Modify Programming Project 6 from Chapter
 * 3(../../chapter_03/projects/PROJ_3_06.c) so that the user may add, subtract,
 * multiply, or divide two fractions (by entering either +, -, *, or / between
 * the fractions).
 */

#include <stdio.h>

int main(void) {
  int num1, denom1, num2, denom2, result_num, result_denom;
  char operator;

  printf("Enter two fractions separated by operator(+, -, *, or /): ");
  scanf("%d/%d%c%d/%d", &num1, &denom1, &operator, & num2, &denom2);

  switch (operator) {
    case '+':
      result_num = num1 * denom2 + num2 * denom1;
      result_denom = denom1 * denom2;
      break;
    case '-':
      result_num = num1 * denom2 - num2 * denom1;
      result_denom = denom1 * denom2;
      break;
    case '*':
      result_num = num1 * num2;
      result_denom = denom1 * denom2;
      break;
    case '/':
      result_num = num1 * denom2;
      result_denom = denom1 * num2;
      break;
    default:
      printf("Error: not support operator: %c", operator);
      return 1; /* operation error */
  }

  if (result_num == 0) {
    printf("The result is 0\n");
    return 0;
  }

  int a = result_num, b = result_denom, temp;

  while (b != 0) {
    temp = a;
    a = b;
    b = temp % b;
  }

  int gcd = a;

  result_num /= gcd;
  result_denom /= gcd;

  if (result_denom == 1) {
    printf("The result is %d\n", result_num);
    return 0;
  }

  printf("The result is %d/%d\n", result_num, result_denom);

  return 0;
}
