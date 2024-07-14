#include<conio.h>
#include<stdio.h>
int main(){
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("You entered: %d\n", num);


    float fnum;
    printf("Enter a float: ");
    scanf("%f", &fnum);
    printf("You entered: %f\n", fnum);


    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    printf("You entered: %c\n", ch);

    char str[100];
    printf("Enter a string: ");
    scanf(" %s", &str);
    printf("You entered: %s\n", str);

    return 0;

    }