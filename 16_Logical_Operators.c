#include <stdio.h>

int main() {
    int A = 1;
    int B = 0;

    // Logical AND (&&)
    printf("A && B = %d\n", A && B);

    // Logical OR (||)
    printf("A || B = %d\n", A || B);

    // Logical NOT (!)
    printf("!A = %d\n", !A);

    return 0;
}

/*

Logical AND (&&)

| A     | B     | A && B |
|-------|-------|--------|
| false | false | false  |
| false | true  | false  |
| true  | false | false  |
| true  | true  | true   |


Logical OR (||)

| A     | B     | A || B |
|-------|-------|--------|
| false | false | false  |
| false | true  | true   |
| true  | false | true   |
| true  | true  | true   |


Logical NOT (!)

A	    !A
false	true
true	false

In C, true is typically represented by any non-zero value (often 1), and false is represented by 0.

*/