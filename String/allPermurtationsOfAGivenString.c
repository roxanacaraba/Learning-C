//Write a program to print all permutations of a given string.

#include<stdio.h>
#include<string.h>

void swap(char *x, char *y){ // fuctie pentru interschimbarea valorilor a doi pointeri
    char temp = *x;
    *x = *y;
    *y = temp;
}
void permute(char *str, int start, int end){
    int i; 
    if(start == end)
        printf("%s\n", str);
    else{
        for(i = start; i <= end; i++){
            swap((str + start), (str + i));
            permute(str, start + 1, end);
            swap((str + start), (str + i));
        }
    }
}
int main(){
    char str[5] = "ABC";
    int len = strlen(str);
    permute(str, 0, len-1);
    return 0;
}
