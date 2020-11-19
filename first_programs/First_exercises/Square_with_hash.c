//Write a C program that reads the side (side sizes between 1 and 10 ) of a square and prints square using hash (#) character.
// Sample Input: 10
// Sample Output:

// Input the size of the square: 
//  # # # # # # # # # #
//  # # # # # # # # # #
//  # # # # # # # # # #
//  # # # # # # # # # #
//  # # # # # # # # # #
//  # # # # # # # # # #
//  # # # # # # # # # #
//  # # # # # # # # # #
//  # # # # # # # # # #
//  # # # # # # # # # #

#include<stdio.h>

int main(){
    
    int size_square = 6;
    int i;
    int j;

    for (i = 0; i < size_square; i++){
        for (j = 0; j < size_square; j++){
            printf(" #");

        }
        printf("\n");
    }
    return 0;
}