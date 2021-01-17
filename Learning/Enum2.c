#include<stdio.h>

enum an{Ian, Feb, Mar, Apr, Mai, Iun, Iul, Aug, Sept, Oct, Noi, Dec};

int main(){
    enum an luna;
    int i;
    for (i = Ian; i <= Dec; i++){
        printf("luna:%d, ", i+1);
    }
    return 0;
}