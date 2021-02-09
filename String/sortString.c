//Write a C program to sort a string array in ascending order. Go to the editor

/*Test Data :
Input the string : w3resource

Expected Output :

After sorting the string appears like : 
3ceeorrsuw */

#include<stdio.h>
#include<string.h>

int main(){
    char str[] = "w3resource";
    int i,j;
    int l = strlen(str); 

    for(i = 1; i < l; i++){ 
        for(j = 0; j < l-i; j++){ 
            if(str[j] > str[j+1]){
                char temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
            }
        }
    }
    printf("%s ", str);
    return 0;
}
