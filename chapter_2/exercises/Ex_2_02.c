/**
 * Consider the following program:
 *
 * #include <stdio.h>
 *
 * int main(void)
 * {
 *   printf("Parkinson's Law:\nWork expands so as to ");
 *   printf("fill the time\n");
 *   printf("available for its completion.\n");
 *   return 0;
 * }
 *
 * (a) Identify the directives and statements in this program.
 * (b) What output does the program produce?
 *
 * ---
 *
 * > (a) Identify the directives and statements in this program.
 *  directives:
 *  #include <stdio.h>
 *
 *  statements:
 *  printf("Parkinson's Law:\nWork expands so as to ");
 *  printf("fill the time\n");
 *  printf("available for its completion.\n");
 *  return 0;
 *
 * > (b) What output does the program produce?
 *  Parkinson's Law:
 *  Work expands so as to fill the time
 *  available for its completion.
 */

#include <stdio.h>

int main(void)
{
  printf("Parkinson's Law:\nWork expands so as to ");
  printf("fill the time\n");
  printf("available for its completion.\n");
  return 0;
}

