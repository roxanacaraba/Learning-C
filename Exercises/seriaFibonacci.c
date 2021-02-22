// Printeaza primele 10 numere fibonacci

#include<stdio.h>

int main(){
    int n1 = 0;
    int n2 = 1;

    printf("%d ", n1);
    printf("%d ", n2);

    for( int i = 3; i < 10; i++){
        int sum = n1 + n2;
        printf("%d ", sum);
        n1 = n2;
        n2 = sum;
    }
    return 0;
}