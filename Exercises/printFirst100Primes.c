// Writing an algorithm which is generating first 100 primes.

#include<stdio.h>

int main(){
    int num = 2;
    int i;
    int flag;
    int count = 0;
    while(count <= 100){
        i = 1;
        flag = 0;
        while(i <= num){
            if(num % i == 0){
                flag ++;
            }
            i++;
        }
        if(flag <= 2){
            printf("%d ",num);
            count++;
        }
        num++;
    }
    return 0;
}