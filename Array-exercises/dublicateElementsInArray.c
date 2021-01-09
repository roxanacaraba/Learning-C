// Write a program in C to count a total number of duplicate elements in an array.

#include<stdio.h>

int main(){
    int arr1[6] = {1, 3, 4, 1, 4, 3};
    int arr2[6] = {};
    int arr3[6];
    
    int i, j, m = 1;
    int count = 0;


    for(i = 0; i < 6; i++){
		arr2[i] = arr1[i];
	    arr3[i] = 0;
    } 

    for(i = 0; i < 6; i++){
        for(j = 0; j < 6; j++){
            if(arr1[i] == arr2[j]){
                arr3[j] = m;
                m++;
            }
        }
        m = 1;
    }
    for(i = 0; i < 6; i++){
        if(arr3[i] == 2){
            count += 1;
        }         
    }
    printf("%d", count);

    return 0;
}