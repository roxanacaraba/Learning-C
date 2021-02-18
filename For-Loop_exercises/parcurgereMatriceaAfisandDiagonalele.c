// Sa se afiseze diagonala principala si diagonala secundara a unei matrici cu 4 randuri si 4 coloane.

#include<stdio.h>

int main(){
    int n = 4;
    int matrice[4][4] = {{1, 2, 3, 4},
                         {5, 6, 7, 8},
                         {9, 10, 11, 12}, 
                         {13, 14, 15, 16}};
    int i, j;
    
    printf("Diagonala principala:\n");
    for(i = 0; i < n; i++){
          printf("%d, ", matrice[i][i]);
        }

  printf("\n");
  
  printf("Diagonala secundara:\n");

    for(i = 0; i < n; i++){
      for(j = n; j >= 0 ; j--){
        if ( i + j == n-1 ){
          printf("%d, ", matrice[i][j]);
        }
      }
    }
    return 0;
}

