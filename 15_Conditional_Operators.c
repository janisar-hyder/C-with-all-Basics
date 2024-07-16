#include <stdio.h>

int main() {
    int score;

    printf("Enter the student's score (0-100): ");
    scanf("%d", &score);

    if (score >= 90) {
        printf("Grade: A\n");
    } else if (score >= 80) {
        printf("Grade: B\n");
    } else if (score >= 70) {
        printf("Grade: C\n");
    } else if (score >= 60) {
        printf("Grade: D\n");
    } else if (score >= 0) {
        printf("Grade: F\n");
    } else {
        printf("Invalid score.\n");
    }

    return 0;
}

// Explanation

// 1
// if (score >= 90):
// This condition checks if the score is 90 or above.
// If true, it prints "Grade: A".

// 2
// else if (score >= 80):
// This condition is checked if the previous if condition is false.
// It checks if the score is 80 or above (but less than 90).
// If true, it prints "Grade: B".

// 3
// else if (score >= 70):
// This condition is checked if the previous else if condition is false.
// It checks if the score is 70 or above (but less than 80).
// If true, it prints "Grade: C".

// 4
// else if (score >= 60):
// This condition is checked if the previous else if condition is false.
// It checks if the score is 60 or above (but less than 70).
// If true, it prints "Grade: D".

// 5
// else if (score >= 0):
// This condition is checked if the previous else if condition is false.
// It checks if the score is 0 or above (but less than 60).
// If true, it prints "Grade: F".

// 6
// else:
// This block is executed if none of the previous conditions are true, which means the score is a negative value.
// It prints "Invalid score."
