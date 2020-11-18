#include<stdio.h>
#include<stdbool.h>

int main(){
    _Bool is_autumn = 10; // _Bool daca folosim doar stdio.h sau bool daca folosim si stdbool.h
    bool is_spring = false;
    bool is_cold = true;

    printf("Is autumn ? ( 1 for yes, 0 for no): %i \n", is_autumn);
    printf("Is spring ? ( 1 for yes, 0 for no): %i \n", is_spring);
    printf("is_spring + 12 = %i \n", is_spring + 12);
    printf("is_cold + 12 = %i ", is_cold + 12);
    return 0;

}