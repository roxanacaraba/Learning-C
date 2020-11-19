//Write a C program to read an array of length 5 and print the position and value of the array elements of value less than 5. 
// Test Data:
// Input the 5 members of the array:
// 15
// 25
// 4
// 35
// 40
// Expected Output:
// A[2] = 4.0

#include<stdio.h>

int main(){

    double arr[5];
    int i;

    printf("Enter first element: ");
    scanf("%lf", &arr[0]);

    printf("Enter second element: ");
    scanf("%lf", &arr[1]);

    printf("Enter third element: ");
    scanf("%lf", &arr[2]);

    printf("Enter fourth element: ");
    scanf("%lf", &arr[3]);

    printf("Enter fifth element: ");
    scanf("%lf", &arr[4]);

    for (i = 0; i <5; i++){
        if (arr[i] < 5.0){
            printf("arr[%d] = %0.1f", i, arr[i]);
        }
    }

    return 0;

}
