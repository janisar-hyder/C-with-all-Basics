#include <stdio.h>

int main() {
    int a = 10, b = 3;
    int sum, difference, product, quotient, remainder;

    // Addition
    sum = a + b;
    printf("Sum: %d + %d = %d\n", a, b, sum);

    // Subtraction
    difference = a - b;
    printf("Difference: %d - %d = %d\n", a, b, difference);

    // Multiplication
    product = a * b;
    printf("Product: %d * %d = %d\n", a, b, product);

    // Division
    quotient = a / b;
    printf("Quotient: %d / %d = %d\n", a, b, quotient);

    // Modulus
    // when the numerator is negative in a modulus operation, the result will also be negative
    remainder = a % b;
    printf("Remainder: %d %% %d = %d\n", a, b, remainder);

    return 0;
}
