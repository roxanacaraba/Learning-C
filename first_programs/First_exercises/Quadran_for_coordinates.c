//Write a C program to read the coordinates(x, y) (in Cartesian system) and find the quadrant to which it belongs (Quadrant -I, Quadrant -II, Quadrant -III, Quadrant -IV). 
//A Cartesian coordinate system is a coordinate system that specifies each point uniquely in a plane by a pair of numerical coordinates.
//These are often numbered from 1st to 4th and denoted by Roman numerals: I (where the signs of the (x,y) coordinates are I(+,+), II (−,+), III (−,−), and IV (+,−).

#include<stdio.h>

int main(){
    int x, y;
    printf("Enter a value other for x in the coordinate(x,y): ");
    scanf("%d", &x);
    printf("Enter a value other for y in the coordinate(x,y): ");
    scanf("%d", &y);

    if (x > 0 && y > 0){
        printf("(%d, %d) belongs to the quadrant I(+, +)", x, y);
    }
    else if (x < 0 && y >0){
        printf("(%d, %d) belongs to the quadrant II(-, +)", x, y);
    }
    else if(x < 0 && y < 0){
        printf("(%d, %d) belongs to the quadrant III(-, -)", x, y);
    }
    else if(x > 0 && y <0){
        printf("(%d, %d) belongs to the quadrant IV(+, -)", x, y);
    }
    else {
        printf("(0, 0) does not belong to any quadrant because it is in the center of the circle");
    }
    return 0;
    }
    


