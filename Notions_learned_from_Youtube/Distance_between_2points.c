//Write a C program to calculate the distance between the two points. Go to the editor
//Test Data :
//Input x1: 25
//Input y1: 15
//Input x2: 35
//Input y2: 10
//Expected Output:
//Distance between the said points: 11.1803

#include<stdio.h>
#include<math.h>
 
int main(){
    int x1;
    int y1;
    int x2;
    int y2;
    double distance;

    printf("Enter a value for x1: ");
    scanf("%d", &x1);
    printf("Enter a value for y1: ");
    scanf("%d", &y1);
    printf("Enter a value for x2: ");
    scanf("%d", &x2);
    printf("Enter a value for y2: ");
    scanf("%d", &y2);
    
    distance = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    printf("%f", distance);

    return 0;

}