/**
 * Create and run Kernighan and Ritchie's famous "hello, world" program:
 * 
 * #include <stdio.h>
 *
 * int main(void)
 * {
 *   printf("hello, world\n");
 * }
 *
 * Do you get a warning message from the compiler? If so, what's needed to make it away?
 *
 * ---
 *
 * > Do you get a warning message from the compiler?
 * No, But use `gcc -Wall -std=c89`, the compiler will output warning message:
 * warning: control reaches end of non-void functoin [-Wreturn-type]
 *
 * > If so, what's needed to make it away?
 * Add `return 0;` statement.
 */

#include <stdio.h>

int main(void)
{
    printf("hello, world\n");
}

