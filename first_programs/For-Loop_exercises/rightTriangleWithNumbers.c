// Write a program in C to display the pattern like right angle triangle with a number.

#include<stdio.h>

int main(){
    int number_of_rows = 10;
    int i, j;

    for(i = 1;i <= number_of_rows; i++){
        for (j = 1; j <= i; j++){
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}