#include<stdio.h>
#include<string.h>

struct  car{
    char name[10];
    int year_manufactured;
    float engine_capacity;
};

void fun(struct car mycar){
    printf("Name: %s\n", mycar.name);
    printf("Year: %d\n", mycar.year_manufactured);
    printf("Capacity: %f\n", mycar.engine_capacity);
}

int main(){
    struct car mycar;
    strcpy(mycar.name, "Toyota");
    mycar.year_manufactured = 2008;
    mycar.engine_capacity = 5.5;

    fun(mycar);
    return 0;
}