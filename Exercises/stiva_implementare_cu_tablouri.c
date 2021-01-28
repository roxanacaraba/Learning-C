#include<stdio.h>

int push(int elem){
    int stiva[10];                                    // stiva cu 10 elemente
    int lungime = sizeof(stiva)/ sizeof(stiva[0]);   // lungimea stivei = 10
    int max = lungime + 1;                              // maximul de elemente din stiva = 10
    int varf = stiva[lungime];                   // varful = ultimul element din stiva
    if(varf == max - 1){
        return -1;                                 //error
    }
    else{
        varf = varf + 1;
        stiva[varf]= elem;
    }
}
int main(){
    int stiva[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
    push(11);
    int lungime = sizeof(stiva)/ sizeof(stiva[0]);
    int i;
    for (i = 0; i < lungime; i++){
        printf("%d ", stiva[i]);    
    }
    return 0;
}