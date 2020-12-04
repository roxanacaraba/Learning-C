// Write a program in C to make such a pattern like right angle triangle with number increased by 1.
// The pattern like :

//    1
//    2 3
//    4 5 6
//    7 8 9 10

#include<stdio.h>

int main(){

    int numbers_rows = 4;
    int i;
    int j;
    int k = 1;

    for(i = 1; i <= numbers_rows; i++){
        for (j = 1; j <= i; j++){
            printf("%d", k++);
        }
        printf("\n");
    }
    return 0;
}