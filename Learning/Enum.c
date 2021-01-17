#include<stdio.h>

enum sapt{Luni,Marti, Miercuri, Joi, Vineri, Sambata, Duminica};

int main(){
    enum sapt ziua;
    ziua = Vineri;
    printf("%d", ziua+1);
    return 0;
}