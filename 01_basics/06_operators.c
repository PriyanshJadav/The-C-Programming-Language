// 06_operators.c

#include <stdio.h>

int main()
{
    int a = 10, b = 20;

    // Arithmatic Operators
    printf("Addition: %d + %d = %d \n", a, b, a + b);
    printf("Subraction: %d - %d = %d \n", a, b, a - b);
    printf("Division: %d / %d = %d \n", a, b, a / b);
    printf("Multiplication: %d * %d = %d \n", a, b, a * b);
    printf("Modulus: %d %% %d = %d \n", a, b, a % b);

    // Relational Operators
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);

    // Logical Operators
    printf("a > 0 && b > 0: %d \n", a > 0 && b > 0);
    printf("a > 0 || b > 0: %d \n", a > 0 || b > 0);
    printf("!(a == b): %d \n", !(a == b));

    return 0;
}