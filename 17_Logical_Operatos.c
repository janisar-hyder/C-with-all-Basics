#include <stdio.h>

int main() {
    int a = 5, b = 10, c=-8;

    if (a > 0 && b > 0) {
        printf("Both a and b are positive numbers.\n");
    }
    if (c > 0 || b > 0) {
        printf("At least one of c or b is a positive number.\n");
    }
    if (!(a < 0)) {
        printf("a is not a negative number.\n");
    }
    return 0;
}