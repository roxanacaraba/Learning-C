#include<stdio.h>
#include<string.h>

int main(){
    char str[] = {"madam"};
    char reverse[0];
    int i = -1, j;
    int len = strlen(str); //5
    

        for(j = len -1; j >= 0; j--){ // j decrementeaza de la 4 la 0
           ++ i;
            reverse[i] = str[j];      // i incrementeaza de la 0 la 5
            
        }

    int len2 = strlen(reverse);
    reverse[len2] += '\000';

    for(i = 0; i < len2; i++){
        printf("Elem lui reverse: %c\n", reverse[i]);
    }
     for(i = 0; i < len; i++){
        printf("Elem lui str: %c\n", str[i]);
     }

    printf("reverse : %s\n", reverse);
    printf("str : %s\n", str);

    if(str == reverse){
        printf("The string is palindrom");
    }
    else{
        printf("The string is not palindrom");
    }
    return 0;

}
