// Write a C program to input a number from user and find Prime factors of the given number using loop. 

#include<stdio.h>

int main(){
    int num;
    int i, j;
    int isPrime;
    printf("Enter a pozitive number: ");
    scanf("%d", &num);

    for(i = 2; i <= num/2; i++){
        if( num % i == 0){ // se verifica daca i este factor pt num
            isPrime = 1; 
            for(j = 2; j <= i / 2; j++){ // se verifica daca i este prim
                if(i % j == 0){
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime == 1)
            {
                printf("%d, ", i);
            }
        }
    }
    return 0;

}