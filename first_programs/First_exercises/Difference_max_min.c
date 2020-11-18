// Write a C program that accepts 4 real numbers from the keyboard and print out the difference of the maximum and minimum values of these four numbers. 

#include<stdio.h>

int main(){
    int num1, num2, num3, num4;
    int max, min, dif;

    printf("Enter a number: ");
    scanf("%d", &num1);
    printf("Enter a number: ");
    scanf("%d", &num2);
    printf("Enter a number: ");
    scanf("%d", &num3);
    printf("Enter a number: ");
    scanf("%d", &num4);

    if (num1 > num2 && num1 > num3 && num1 > num4){
        max = num1;
    }
    else if(num2 > num1 && num2 > num3 && num2 > num4){
        max = num2;
    }
      else if(num3 > num1 && num3 > num2 && num3 > num4){
        max = num3;
    }
      else if(num4 > num1 && num4 > num2 && num4 > num3){
        max = num4;
    }
    if (num1 < num2 && num1 < num3 && num1 < num4){
        min = num1;
    }
    else if(num2 < num1 && num2 < num3 && num2 < num4){
        min = num2;
    }
      else if(num3 < num1 && num3 < num2 && num3 < num4){
        min = num3;
    }
      else if(num4 < num1 && num4 < num2 && num4 < num3){
        min = num4;
    }
    dif = max - min;
    printf("Max: %d\nMin: %d\nDiFference: %d", max, min, dif);
    return 0;

}
