#include <stdio.h>

int main() {
    int year;
    int startYear = 1900;
    int endYear = 2100;

    printf("Enter a year: ");
    scanf("%d", &year);

    // Check if the year is a leap year
    int isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    // Check if the year is within the specified range
    int isWithinRange = (year >= startYear && year <= endYear);

    if (isLeapYear && isWithinRange) {
        printf("%d is a leap year and is within the range %d to %d.\n", year, startYear, endYear);
    } else if (!isLeapYear && isWithinRange) {
        printf("%d is not a leap year but is within the range %d to %d.\n", year, startYear, endYear);
    } else if (isLeapYear && !isWithinRange) {
        printf("%d is a leap year but is not within the range %d to %d.\n", year, startYear, endYear);
    } else {
        printf("%d is not a leap year and is not within the range %d to %d.\n", year, startYear, endYear);
    }

    return 0;
}

