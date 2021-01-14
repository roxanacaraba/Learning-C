#include<stdio.h>

int main(){
    int arr [10], n, i, *p, sum = 0;
    printf("Enter the \"n\", n <= 10: ");
    scanf("%d", &n);

    printf("Enter the numbers: ");
    for( i = 0; i < n ; i++){
        scanf("%d", &arr[i]);
        p = &arr[i];
        sum += *p;
    }
    printf("%d", sum);

    return 0;
}
