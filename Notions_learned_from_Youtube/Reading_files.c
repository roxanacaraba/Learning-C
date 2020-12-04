#include<stdio.h>
#include<stdlib.h>

int main(){

char line[255];
    FILE * fpointer = fopen("employees.txt", "r"); //citeste informatii din fisier
    fgets(line, 255, fpointer); //citeste prima linie din fisier si o stocheaza in variabila line
    fgets(line, 255, fpointer); //citeste a doua linie din fisier
    printf("%s", line);

    fclose(fpointer);
    return 0;
}
