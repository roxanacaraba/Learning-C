#include<stdio.h>

int position( int e){
    int lista[10] = {10, 21, 23, 4, 15, 60, 57, 8, 49, 1};
    int p = 0;
    int n = sizeof(lista)/sizeof(lista[0]);
    int q = lista[n-1];
    int m = (p + q)/2;

    while( lista[m] != e && p < q){
        if( e < lista[m]){
            q = m - 1;
        }
        else{
            p = m +1;
            m = (p + q)/2;
        }
    }
    if( lista[m] == e){
        return m;
    }
    else{
        return -1;
    }
}

int main(){
    int result = position(60);
    printf("%d", result);
}




