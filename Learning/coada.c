#include<stdio.h>

int coada[5];
int max = sizeof(coada)/sizeof(coada[0]);
int last = -1;
int first = -1;

int isEmpty(){
    if(last == -1){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(){
   if(last == max){
       return 1;
   }
   else{
       return 0;
   }
}

 int insertion(int elem){
     if(!isFull()){
         last = last + 1;
         coada[last] = elem;
     }
     else{
        printf("Tail is full");
     }
 }

 int elimination(){
     if(!isEmpty()){
        int i;
        for(i = first; i <= last; i++){
            coada[i+1] = coada[i];
            printf("%d", coada[i]);
        }
     }
     else{
         printf("Tail is empty");
     }
 }

int read(){
    return (coada[first]);
}

int main(){
    int coada[5] ={1, 2, 3, 4};
    
    insertion(5);
    printf("Elements:\n");

    
    
    while(!isEmpty()){
    int elem = elimination();
        printf("%d, \n", elem);
    }

    printf("Tail full: %s\n" , isFull()?"true":"false");

    elimination();
    

    printf("First element in the tail: %d\n" , read());

    return 0;
}




