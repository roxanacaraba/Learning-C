//Write a C program to input length and width of a rectangle and calculate perimeter and area of the rectangle. 

#include<stdio.h>

int main(){

    double lenght;
    double width;

    printf("Enter a number for lenght: ");
    scanf("%lf", &lenght);
    
    printf("Enter a number for width: ");
    scanf("%lf", &width);

    double perimetre = 2 * (lenght + width);
    printf("Perimetre of rectangle with lenght %f and width %f is %f. \n", lenght, width, perimetre);

    double area = lenght * width;
    printf("Area of rectangle with lenght %f and width %f is %f. ", lenght, width, area);

    return 0;

}
