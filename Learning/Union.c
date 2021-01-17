#include<stdio.h>

union test {
    int x;
    char y;
    double z; // Size of a union is taken according the size of largest member in union.
};

int main()
{
     
     union test u;
     u.x = 7;
     u.y = 'B';
     printf(" x = %d, y = %d\n", u.x , u.y); //If we change y, we can see the changes being reflected in x.
    printf("sife of test = %lu", sizeof(u));
     return 0;
}