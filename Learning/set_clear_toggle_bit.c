//Set , clear and toggle a bit.

#include<stdio.h>

int main(){
    int var = 4;
    int bit_x = 5;

    // set bit_x

    var = var | ( 1 << bit_x);
    printf("Set : %d\n", var);

    //clear bit_x
    var = var &(~(1 << bit_x));
    printf("Clear: %d\n", var);

    // toggle bit_x
    var = var ^ ( 1 << bit_x);
    printf("Toggle: %d\n", var);

    return 0;
}
