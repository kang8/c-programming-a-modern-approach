/**
 * The prototypical Internet newbie is a fellow named B1FF, who has a unique way
 * of writing messages. Here's a typical B1FF communiqué:
 *
 * H3Y DUD3, C 15 R1LLY COOL!!!!!!!!!!
 *
 * Write a "B1FF filter" that reads a message entered by the user and translates
 * it into B1FF-speak:
 *
 * Enter message: Hey dude, C is rilly cool
 * In B1FF-speak: H3Y DUD3, C 15 R1LLY COOL!!!!!!!!!!
 *
 * Your program should covert the message to upper-case letters, substitue
 * digits for certain letters (A->4, B->8, E->3, I->1, O->0, S->5), and then
 * append 10 or so exclamation marks. Hint: Store the original message in an
 * array of characters, then go back through the array, translating and
 * printing characters one by one.
 */

#include <ctype.h>
#include <stdio.h>

#define MAX_SIZE 100

int main(void) {
  char message[MAX_SIZE] = {0};
  char c;
  int length = 0;

  printf("Enter message: ");

  while ((c = getchar()) != '\n') {
    message[length++] = c;
  }

  printf("In B1FF-speak: ");

  for (int i = 0; i < length; i++) {
    c = toupper(message[i]);

    switch (c) {
      case 'A':
        putchar('4');
        break;
      case 'B':
        putchar('8');
        break;
      case 'E':
        putchar('3');
        break;
      case 'I':
        putchar('1');
        break;
      case 'O':
        putchar('0');
        break;
      case 'S':
        putchar('5');
        break;
      default:
        putchar(c);
        break;
    }
  }

  for (int i = 0; i < 10; i++) {
    printf("!");
  }
  printf("\n");

  return 0;
}
