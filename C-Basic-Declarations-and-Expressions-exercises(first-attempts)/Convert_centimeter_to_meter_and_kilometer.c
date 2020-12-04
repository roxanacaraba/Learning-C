//Write a C program to input length in centimeter and convert it to meter and kilometer.

#include<stdio.h>

int main(){

    double centimeter;
    printf("Enter a number for centimeter: ");
    scanf("%lf", &centimeter);

    double meter = centimeter / 100;
    double kilometre = centimeter / 100000;

    printf(" %f centimeters = %f meters = %f kilometers", centimeter, meter, kilometre);

    return 0;
}