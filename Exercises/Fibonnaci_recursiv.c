#include<stdio.h>

int fibonnaci(int num){
    if(num < 0){
        return -1;
    }
    if (num == 0){
        return 0;
    }
    if(num == 1){
        return 1;
    }
    else{
        return (fibonnaci(num-1) + fibonnaci(num-2));
    }
}   

int main(){
    int num = 4;
    int result = fibonnaci(num);
    printf("%d", result);
    return 0;
}