#include <stdio.h>  

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);   // Read an integer from user input
    printf("You entered: %d\n", num);   // Print the entered integer

    float fnum;
    printf("Enter a float: ");
    scanf("%f", &fnum);   // Read a float from user input
    printf("You entered: %f\n", fnum);   // Print the entered float

    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);   // Read a character from user input
    printf("You entered: %c\n", ch);   // Print the entered character

    char str[100];
    printf("Enter a string: ");
    scanf(" %s", &str);   // Read a string from user input
    printf("You entered: %s\n", str);   // Print the entered string

    return 0;
}
