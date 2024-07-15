#include <stdio.h>

int main() {
    int a = 10, b = 5, c = 2;
    int result;

// Operator Precedence: Multiplication (*) has higher precedence than Addition (+)
    result = a + b * c; // Evaluates as a + (b * c)
    printf("Result of a + b * c is =  %d\n", result); // 10 + (5 * 2) = 20

// Operator Precedence: Parentheses () change the order of evaluation
    result = (a + b) * c;
    printf("Result of (a + b) * c is =  %d\n", result); // (10 + 5) * 2 = 30

// Operator Associativity: Left-to-right for addition (+) and subtraction (-)
    result = a - b + c; // Evaluates as (a - b) + c
    printf("Result of a - b + c is =  %d\n", result); // (10 - 5) + 2 = 7


// Multiplication (*) and Division (/) have the same precedence and left-to-right associativity.
    
    printf("The value of (a * b / c + 7) is = %d\n", a * b / c + 7);

/*  Explanation:
    a * b / c + 7
    Multiplication (*) and Division (/) have the same precedence and left-to-right associativity.
    So, it will be evaluated as:
    (a * b) / c + 7
    (10 * 5) / 2 + 7
    50 / 2 + 7
    25 + 7
    32
*/

    printf("The value of (3*b/2*c + 7*a) is = %d\n", 3 * b / 2 * c + 7 * a);
/*
    Explanation:
    3 * b / 2 * c + 7 * a
    Multiplication (*) and Division (/) have the same precedence and left-to-right associativity.
    So, it will be evaluated as:
    3 * b / 2 * c + 7 * a
    3 * 5 / 2 * 2 + 7 * 10
    (15 / 2) * 2 + 70
    7 * 2 + 70
    14 + 70
    84
*/

// Operator Associativity: Right-to-left for assignment (=)
    
    int x;
    x = result = a; // Evaluates as x = (result = a)
    printf("Result of x = result = a is : %d\n", x); // result = a = 10, so x = 10

    return 0;
}
