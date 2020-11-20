//Write a C program to input radius of a circle from user and find diameter, circumference and area of the circle.

#include<stdio.h>

int main(){

    double radius;
    printf("Enter a number for radius: ");
    scanf("%lf", &radius);

    double diameter = 2 * radius;
    double circumference = 2 * (3.14) * radius;
    double area = (3.14) * (radius * radius);

    printf("For the circle with radius %f:\ndiameter = %f\ncircumference = %f\narea = %f", radius, diameter, circumference, area);
    
    return 0 ;


}