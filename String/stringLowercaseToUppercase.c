//  Write a program in C to convert a string to uppercase. 

#include<stdio.h>
#include<ctype.h>

int main(){
    char str[] = {"string"};
    int i = 0;
    int char_str;
 
    while (str[i])
	{
		char_str = str[i];
        putchar (toupper(char_str));
		i++;
	}
    printf("\n\n");
    return 0;
}