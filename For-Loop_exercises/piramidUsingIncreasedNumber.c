// Write a program in C to make such a pattern like a pyramid with numbers increased by 1.
//    1 
//   2 3 
//  4 5 6 
// 7 8 9 10

#include<stdio.h>

int main(){

    int i, j, space, k, t = 1;
    int  number_rows = 4;
    space = number_rows + 4 - 1;

   for(i = 1; i <= number_rows; i++)
   {
         for(k = space; k >=  1; k--)
            {
              printf(" ");
            }
	   for(j = 1; j <= i; j++)
	   printf("%d ", t++);
	printf("\n");
    space--;
   }
   return 0;
}