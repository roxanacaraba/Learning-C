#include<stdio.h>
#include<stdlib.h>

int main(){

    FILE * fpointer1 = fopen("employees.txt", "w"); // creeaza un fisier nou
    fprintf(fpointer1, "Jim, Salesman \nPam, Receptionist \nMike, Manager"); // scrie in fisier 3 angajati
    
    FILE * fpointer2 = fopen("employees.txt", "a");
    fprintf(fpointer2, "\nKeo , Costumer service"); // adauga in fisierul creat inca un angajat

   
    fclose(fpointer1);
    fclose(fpointer2);
    
    return 0;
}