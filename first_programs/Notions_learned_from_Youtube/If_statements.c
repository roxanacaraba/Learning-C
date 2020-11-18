 
 /* exemplul 1
 #include<stdio.h>
#include<stdlib.h>
 
int maxfunct(int num1, int num2)
{   
  
    int result;
    if (num1 > num2)
    {
        result = num1;
    }
    else {
        result = num2;

    }
    return result;


}
int main()
{
    printf("Numarul cel mai mare este : %d", maxfunct(2,5));
    
    return 0;
}


 exemplul 2 */
#include<stdio.h>
#include<stdlib.h>
 
int maxfunct(int num1, int num2, int num3)
{   
  
    int result;
    if (num1 >= num2 && num1 >= num3)
    {
        result = num1;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        result = num2;

    }
    else 
    {
        result = num3;
    }
    return result;


}
int main()
{
    printf("Numarul cel mai mare este : %d", maxfunct(2,5,9));
    
    return 0;
}
