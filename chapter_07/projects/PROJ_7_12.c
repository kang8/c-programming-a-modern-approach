/**
 * Write a program that evaluates an expression:
 *
 * Enter an expression: 1+2.5*3
 * Value of expression: 10.5
 *
 * The operands in the expression are floating-point numbers; the operators are
 * +, -, *, and /. The expression is evaluated from left to right (no operator
 * takes precendence over and other operator).
 */

#include <math.h>
#include <stdio.h>

int main(void) {
  char letter, previous_operand = 0;
  int negative_exponent = -1;
  float current_num = 0.0f, previous_num = 0.0f, current_value;

  printf("Enter an expression: ");

  while ((letter = getchar()) == ' ')
    ;

  do {
    switch (letter) {
      case '+':
      case '-':
      case '*':
      case '/':
        if (negative_exponent >= 0) {
          current_num /= powf(10, negative_exponent);
        }

        switch (previous_operand) {
          case '+':
            previous_num = previous_num + current_num;
            break;
          case '-':
            previous_num = previous_num - current_num;
            break;
          case '*':
            previous_num = previous_num * current_num;
            break;
          case '/':
            previous_num = previous_num / current_num;
            break;
          default:
            previous_num = current_num;
            break;
        }

        current_num = 0.0f;
        negative_exponent = -1;
        previous_operand = letter;

        break;
      case '.':
        negative_exponent = 0;

        break;
      default:
        current_value = (float)(letter - '0');
        current_num = current_num * 10.0f + current_value;

        if (negative_exponent >= 0) {
          negative_exponent++;
        }

        break;
    }

  } while ((letter = getchar()) != '\n');

  if (negative_exponent >= 0) {
    current_num /= powf(10, negative_exponent);
  }

  switch (previous_operand) {
    case '+':
      previous_num = previous_num + current_num;
      break;
    case '-':
      previous_num = previous_num - current_num;
      break;
    case '*':
      previous_num = previous_num * current_num;
      break;
    case '/':
      previous_num = previous_num / current_num;
      break;
  }

  printf("Value of expressin: %f", previous_num);

  return 0;
}
