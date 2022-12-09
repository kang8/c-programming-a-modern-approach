/**
 * Write a program that declares serveral `int` and `float` variables - without initializing them - and then prints their values. Is there any pattern to the values? (Usually there isn't.)
 *
 * ---
 *
 * There's no pattern
 */

#include <stdio.h>

int main(void)
{
    int int_a, int_b, int_c;
    float float_a, float_b, float_c;

    printf("int_a = %d\n", int_a);
    printf("int_b = %d\n", int_b);
    printf("int_c = %d\n", int_c);

    printf("float_b = %f\n", float_b);
    printf("float_a = %f\n", float_a);
    printf("float_c = %f\n", float_c);

    return 0;
}

/**
 * output:
 * int_a = 1265074177
 * int_b = 73928824
 * int_c = 1
 * float_b = 305794185267077261637451776.000000
 * float_a = 0.000000
 * float_c = 0.000000
 */
