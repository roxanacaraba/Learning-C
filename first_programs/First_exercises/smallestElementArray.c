// Write a C program to read an array of length 6 and find the smallest element and its position. 
// Test Data:
//  Input the array elements:
// 25
// 35
// 20
// 14
// 45
// 60
// Expected Output:
// Smallest Value: 14
// Position of the element: 3

#include<stdio.h>

int main(){

    int arr[6];
    int i;
    int min;
    int position;
    
    printf("Enter first element: ");
    scanf("%d", &arr[0]);

    printf("Enter second element: ");
    scanf("%d", &arr[1]);

    printf("Enter third element: ");
    scanf("%d", &arr[2]);

    printf("Enter fourth element: ");
    scanf("%d", &arr[3]);

    printf("Enter fifth element: ");
    scanf("%d", &arr[4]);

    printf("Enter sixth element: ");
    scanf("%d", &arr[5]);
    
    min = arr[0];
    position = 0;

    for (i = 0; i < 6; i++){
        if(min > arr[i]){
            min = arr[i];
            position = i;
        }
    }
       
    printf("Smallest value: %d\nPosition: %d", min, position);
    return 0;
}