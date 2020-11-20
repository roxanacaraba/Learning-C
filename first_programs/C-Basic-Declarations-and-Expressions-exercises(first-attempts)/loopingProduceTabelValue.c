// Write a C program using looping to produce the following table of values. Go to the editor
//Sample Output:
// x       x+2     x+4     x+6
// ---------------------------
// 1       3       5       7
// 4       6       8       10
// 7       9       11      13
// 10      12      14      16
// 13      15      17      19

#include<stdio.h>

int main(){

    int x;
    printf("x\tx+2\tx+4\tx+6\n");
    printf("----------------------------\n");
    for (x = 1; x <= 13; x += 3){
        printf("%d\t%d\t%d\t%d\n", x, x+2 , x+4 , x+6);
    }
    return 0;
}