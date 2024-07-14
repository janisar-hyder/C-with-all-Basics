#include <stdio.h>

int main(){
    
    int l,w,a;

    printf("Enter length of rectangle: ");
    scanf("%d", &l);

    printf("Enter width of rectangle: ");
    scanf("%d", &w);

    a=l*w;

    printf("The Area of Rectangle with length \'%d\' and width \'%d\' is = %d", l,w,a);
    return 0;
}