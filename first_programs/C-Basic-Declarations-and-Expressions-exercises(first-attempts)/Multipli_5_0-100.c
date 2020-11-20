#include<stdio.h>

int main(){
    int i = 0;
    int count = 0;
    for (i = 0; i <= 100 ; i ++){
        if (i % 5 == 0){
            count++;
        }
    }
    printf("Am gasit %d multipli de 5 de la 0 - 100", count );
    return 0;
}

