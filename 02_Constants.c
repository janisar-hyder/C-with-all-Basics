#include <stdio.h>
#define MAX_BUFFER_SIZE 1024  // MAX_BUFFER_SIZE is a constant with value 1024 that can be used globally

int main() {
    const int DAYS_IN_YEAR = 365;  // DAYS_IN_YEAR is a constant integer with value 365
    const float PI = 3.14159;      // PI is a constant float with value 3.14159
    const char DOLLAR = '$';     // DOLLAR is a constant character with value '\n'

    // Printing the constant values
    printf("Days in a year: %d\n", DAYS_IN_YEAR);
    printf("Value of PI: %f\n", PI);
    printf("Dollar character: %c\n", DOLLAR); 
    printf("MAX_BUFFER_SIZE: %d\n", MAX_BUFFER_SIZE);

    // Trying to change the value of a constant (will cause an error)
    // Uncommenting line will cause a compilation error
    // DAYS_IN_YEAR = 366; 

    return 0;
}
