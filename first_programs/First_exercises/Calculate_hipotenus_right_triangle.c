//Create a program that takes two double as inputs, calculates the hypotenuse of a right triangle and ouputs it.

#include<stdio.h>
#include<math.h>


int main(){
    double side1;
    double side2;
    printf("Enter a number for first side: ");
    scanf("%lf", &side1);
    printf("Enter a number for second side: ");
    scanf("%lf", &side2);

    double squart_hypotenuse = (side1 * side1) + (side2 *side2);
    double hypotenuse = sqrt(squart_hypotenuse);

    printf("The hypotenuse of the right triangle with sides %f and %f is %f" , side1, side2, hypotenuse);
    
    return 0;
}
