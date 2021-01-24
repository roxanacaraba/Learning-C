// 0 1 1 2 3 5 8 13

#include<stdio.h>

int fibonaci(int k){
    if(k < 0){
        return -1;
    }
    if(k == 0){
        return 0;
    }
    if(k == 1){
        return 1;
    }

    else {
        int i;
        int num1 = 0;
        int num2 = 1;
        int sum = 0;
        for(i = 2; i < k; i++){
           sum = num1 + num2;
           num1 = num2;
           num2 = sum;

        }
    
        k = 6;
        return sum;
    }
}
int main(){
    int result = fibonaci(6);
    printf("%d", result);
    return 0;
}
    
