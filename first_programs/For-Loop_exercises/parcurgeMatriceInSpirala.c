#include<stdio.h>
#define R 3
#define C 6

void spiral(int end_row_index, int end_column_index, int matrice[R][C]){
   
   int i, start_row_index = 0, start_column_index = 0; 

    while (start_row_index < end_row_index && start_column_index < end_column_index){
        for(i = start_column_index; i < end_column_index; ++i){      // Print the first row 
            printf("%d, ", matrice[start_row_index][i]);
        }
        start_row_index ++;
       
        for(i = start_row_index; i < end_row_index; i++){           // Print the last column
            printf("%d, ", matrice[i][end_column_index - 1]);
        }
        end_column_index --;

        if(start_row_index < end_row_index){
            for (i = end_column_index - 1; i >= start_column_index; --i){     // Print the last row from the remaining rows
                printf("%d, ", matrice[end_row_index-1][i]);
            }
            end_row_index--;
        }
        
        if(start_column_index < end_column_index){
            for(i = end_row_index - 1; i >= start_row_index; --i){
                printf("%d, ", matrice[i][start_column_index]);
            }
            start_column_index ++;
        }
    }
}


int main(){

    int matrice[R][C] = {{1, 2, 3, 4, 5, 6}, 
                         {7, 8, 9, 10, 11, 12}, 
                         {13, 14, 15, 16, 17, 18}};

    spiral(R,C, matrice);
    return 0;
}