#include <stdio.h>

int main() {
    int a = 10;
    double b = 4.5;
    int c;
    double d;

    // Implicit type conversion
    d = a + b;  // 'a' is implicitly converted to double before addition

    printf("Value of d (after implicit conversion): %lf\n", d); // Output: 14.500000

    // Explicit type casting
    c = (int)b; // Explicitly casts 'b' to int

    printf("Value of c (after explicit casting): %d\n", c); // Output: 4

    return 0;
}
