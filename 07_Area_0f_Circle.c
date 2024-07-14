#include <stdio.h>
#define PI 3.14159
int main(){
    float r,h;

    printf("Enter the radius of the circle: ");
    scanf("%f",&r);

    printf("The Area of Circle with Radius \'%.1f\' is = %.2f", r, PI*r*r);

    printf("\nEnter the height of the cylinder: ");
    scanf("%f",&h);
    printf("The volume of the cylinder with Radius \'%.1f\' and Height \'%.1f\' is = %.2f", r, h, PI*r*r*h);

    return 0;
}