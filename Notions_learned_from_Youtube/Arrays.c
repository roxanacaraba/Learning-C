#include<stdio.h>
#include<stdlib.h>

int main()
{
    int array1[] = {1, 2, 3, 4, 5};
    printf("%d\n", array1[3]);
    int array2[10]; /* am creat un array care poate avea max 10 itemi*/
    array2[1] = 34;
    printf("%d\n", array2[1]);
    char array3[] = "Stringul asta este un array";
    printf("%s", array3);
    return 0;
}