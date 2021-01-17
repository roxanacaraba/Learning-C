#include<stdio.h>

enum sapt{Luni,Marti, Miercuri, Joi, Vineri, Sambata, Duminica};

int main(){
    enum sapt zi; // am declarat "zi" ca variabila si valoarea 'Vineri" este alocata zilei, care este 4. 
    zi = Vineri;
    printf("%d", zi);
    return 0;
}