//Write a program that converts Centigrade to Fahrenheit. 

#include<stdio.h>

int main(){
    double celsius;
    double fahrenheit;

    printf("Enter a temperature in centigrade (Celsius): ");
    scanf("%lf", &celsius);
    
    fahrenheit = (9.0 * celsius + (32.0 * 5.0)) / 5.0 ;
    printf("Centigrade: %f\nFahrenheit: %f", celsius, fahrenheit);

    return 0;

}