 //Write a C program that accepts a real number x and prints out the corresponding value of sin(1/x) and cos(x) using 4-decimal places.

 #include<stdio.h>
 #include<math.h>

 int main(){
     double num;
     double sinus;
     double cosinus;

     printf("Enter a non zero number: ");
     scanf("%lf", &num);

     sinus =  sin(1 / num);
     cosinus =  cos(num);
     printf("Number: %0.4lf\nSin: %0.4lf\nCos: %0.4lf", num, sinus, cosinus);
     return 0;

 }