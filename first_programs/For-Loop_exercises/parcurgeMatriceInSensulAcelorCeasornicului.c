// Sa se afiseze elementele unei matrici parcurgand matricea in ordinea acelor de ceasornic.

#include<stdio.h>

int main(){
    int n = 4;
    int matrice[4][4] = {{1, 2, 3, 4},
                         {5, 6, 7, 8},
                         {9, 10, 11, 12}, 
                         {13, 14, 15, 16}};
    int i, j, k, t, u, w;
    for(i = 0; i < n; i++){
        printf("%d, ", matrice[n-n][i]);
    }
    for(j = 1; j < n; j++){
        printf("%d, ", matrice[j][n-1]);
    }
    for(k = 2; k >= 0; k--){
        printf("%d, ", matrice[n-1][k]);
    }
    for(t = 2; t >= 1; t--){
        printf("%d, ", matrice[t][n-n]);
    }
    for(u = 1; u <= 2; u++){
        printf("%d, ", matrice[n-3][u]);
    }
    for(w = 2; w >= 1; w--){
        printf("%d, ", matrice[n-2][w]);
    }
    return 0;
}

    