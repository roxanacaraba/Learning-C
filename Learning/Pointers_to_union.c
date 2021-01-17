//Like structures, we can have pointers to unions and can access members using the arrow operator (->).

#include <stdio.h>

union test{
    int x;
    char y;
};

int main(){

    union test u;
    u.x = 65;

    union test* p = &u; // p este pointer catre u

    printf("%d %c", p->x, p->y); // acesarea membrilor uniunii utilizand pointeri

    return 0;
}