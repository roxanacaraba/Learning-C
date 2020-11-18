/*#include<stdlib.h>
#include<stdio.h>

int main(){

    int index = 1;
    while (index <=4){
        printf("%d \n", index);
        index++;
    }
     return 0;
}
 putem folosi do while , dar nu se va mai verifica conditia prima data, ci se va printa , si apoi se va verifica*/

#include<stdlib.h>
#include<stdio.h>

int main(){
    int index = 5;
     do {
        printf("%d \n", index);
        index++;
    }while (index <=4);
     return 0;
}
