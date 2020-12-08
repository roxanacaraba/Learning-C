// Write a program in C to read n number of values in an array and display it in reverse order. Find the sum of all elements of the array.
// Test Data :
// Input the number of elements to store in the array :3
// Input 3 number of elements in the array :
// element - 0 : 2
// element - 1 : 5
// element - 2 : 7
// Expected Output :
// The values store into the array are :
// 2 5 7
// The values store into the array in reverse are :
// 7 5 2
// Sum: 14

#include<stdio.h>

int main(){

    int n, i;
    int arr[100] = {};
    int sum = 0;
     
    printf("Input the number of elements to store in the array: ");
    scanf("%d", &n);

    printf("Input %d number of elements in the array:\n", n);
    
    for(i = 0; i < n; i++){
    printf("Element %d: ", i+1);
    scanf("%d", &arr[i]);
    }
    
    printf("The values store into the array are: \n");
    for(i = 0; i < n; i++){
    printf("%d\n", arr[i]);
    }
    
    printf("The values store into the array in reverse are: \n");
    for(i = n-1; i >= 0; i--){
    printf("%d\n", arr[i]);
    }

    printf("Sum: ");
    for(i = 0; i < n; i++){
        sum += arr[i];
    }
    printf("%d\n", sum);
    
    return 0;

}
