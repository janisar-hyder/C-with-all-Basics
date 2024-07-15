#include <stdio.h>

int main() {

    // Basic Format Specifiers

    printf("\n\n\033[4mBasic Format Specifiers\033[0m\n");
    int i = 10;
    float f = 5.5;
    char c = 'A';
    char s[] = "Hello, World!";
    
    printf("Integer: %d\n", i);        // %d for integers
    printf("Float: %.2f\n", f);        // %.2f for floating-point numbers with 2 decimal places
    printf("Character: %c\n", c);      // %c for characters
    printf("String: %s\n", s);         // %s for strings
    


    // Format Specifiers for Different Types

    printf("\n\n\033[4mFormat Specifiers for Different Types\033[0m\n");
    int j = 255;
    unsigned int u = 255;
    long l = 1234567890;
    unsigned long ul = 1234567890;
    double d = 3.14159;
    
    printf("Hexadecimal: %x\n", j);    // %x for hexadecimal
    printf("Unsigned: %u\n", u);       // %u for unsigned integers
    printf("Long: %ld\n", l);          // %ld for long integers
    printf("Unsigned Long: %lu\n", ul);// %lu for unsigned long integers
    printf("Double: %lf\n", d);        // %lf for double floating-point numbers


    // Advanced Format Specifiers

    printf("\n\n\033[4mAdvanced Format Specifiers\033[0m\n");
    int k = 1234567;
    float r = 123.456;
    
    printf("Integer with width 5: %5d\n", k);          // %5d for width of 5
    printf("Integer with width 5 and leading zeros: %05d\n", k); // %05d for width of 5 with leading zeros
    printf("Float in exponential form: %e\n", r);      // %e for exponential notation
    printf("Float in shortest form: %g\n\n\n", r);         // %g for shorter of %e or %f


    return 0;
}
