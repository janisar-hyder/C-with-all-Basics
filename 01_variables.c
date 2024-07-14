#include <stdio.h>

int main() {
    int a = 3;       // a is assigned the integer value 3
    float b = 4.7;   // b is assigned the floating-point value 4.7
    char c = 'A';    // c is assigned the character value 'A'
    
    printf("Printing the values 1st time\n");
    printf("a = %d\n", a);
    printf("b = %f\n", b);
    printf("c = %c\n", c);

    // Changing the values
    a = 10;
    b = 8.2;
    c = 'B';
    
    printf("Printing the values after change\n");
    printf("a (new) = %d\n", a);
    printf("b (new) = %f\n", b);
    printf("c (new) = %c\n", c);

    return 0;
}
