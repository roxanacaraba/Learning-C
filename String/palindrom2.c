#include<stdio.h>
#include<string.h>

int main(){
    char str[] = {"madam"};
    char reverse[10];
    int i, j;
    int len = strlen(str);

    for(i = 0; i < len; i++){
        for(j = len -1; j >= 0; j--){
            reverse[i] = str[j];
        }
    }
    reverse[10] += '\0';
    printf("%s\n", reverse);

    if(reverse == str){
        printf("The string is palindrom");
    }
    else{
        printf("The string is not palindrom");
    }
    return 0;

}
