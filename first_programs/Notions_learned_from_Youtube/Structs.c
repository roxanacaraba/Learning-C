/* struct e o structura de date in care putem stoca grupuri de tipuri de date */

#include<stdio.h>
#include<stdlib.h>

struct Elev{
    char nume[30];
    char materie[30];
    int varsta;
    double nota;

};
int main(){
     struct Elev elev1; /*elev1 va stoca cele 4 informatii de mai sus: nume, materie, varsta si nota */
    elev1.varsta = 12;
    elev1.nota = 8.5;
    strcpy(elev1.nume, "Matei");
    strcpy(elev1.materie, "Matematica");
    printf("Elevul %s in varsta de %d are la materia %s nota %f", elev1.nume, elev1.varsta, elev1.materie, elev1.nota);
    return 0;

}