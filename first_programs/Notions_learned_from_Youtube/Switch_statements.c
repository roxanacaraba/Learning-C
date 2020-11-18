#include<stdio.h>
#include<stdlib.h>

int main()
{
    char grade = 'M';
    switch(grade)
    {
    case 'A':
        printf("You got a A! Congratulatios!");
        break;
    case 'B':
        printf("You got a B! You can better!");
        break;
    case 'C':
        printf("You got a C! You did poorly!");
        break;
    case 'D':
        printf("You got a D! You did very bad!");
        break;  
    case 'E':
        printf("You got a E! You failed!");
        break;
    default:
        printf("Invalid grade!");


    }
}