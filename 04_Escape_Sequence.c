#include <stdio.h>

int main() {
    // Newline
    printf("Hello\nWorld\n");
    
    // Horizontal Tab
    printf("Column1\tColumn2\tColumn3\n");
    
    // Backslash
    printf("This is a backslash: \\\n");
    
    // Single Quote
    printf("This is a single quote: \'\n");
    
    // Double Quote
    printf("This is a double quote: \"\n");
    
    // Null Character (note: it will terminate the string)
    char str[] = "Hello\0World";
    printf("%s\n", str); // Output stops at the null character
    
    // Backspace
    printf("Hello\bWorld\n"); // Output will be "HellWorld"
    
    // Carriage Return
    printf("Hello\rWorld\n"); // "World" overwrites "Hello"
    
    // Form Feed (effect may vary depending on environment)
    printf("Hello\fWorld\n");
    
    // Alert/Bell (may produce a sound depending on the system)
    printf("Alert sound\a\n");

    return 0;
}
