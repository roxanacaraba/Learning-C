//Write a C program to print 3 numbers in a line, starting from 1 and print n lines. Accept number of lines (n, integer) from the user. Go to the editor
//Test data:
//Input number of lines: 5
//Expected Output:
//1 2 3
//4 5 6
//7 8 9
//10 11 12
//13 14 15

#include<stdio.h>

int main(){
    int num_of_lines;
    int num_per_line  = 0;
    int i;
    int first_num = 1;
    printf("Enter numbers of lines: ");
    scanf("%d", &num_of_lines);

    for (i = 1; i <= num_of_lines; i++){
        while (num_per_line < 3){
            printf("%d ", first_num++);
            num_per_line ++;
        }
            num_per_line = 0;
            printf("\n");
        }
        return 0;
    }
  