#include<stdio.h>
#include<stdlib.h>

double cube(double num)  /* putem pune functia cube inainte de functia main , daca lasam aici doar semnatura, adica ...
double cube(double num); ... si punem functia cube din nou dupa functia main */
{
    double result = num * num * num ;
    return result;
}

int main()
{ 
    printf("%f" , cube(4.0));
    return 0;
}