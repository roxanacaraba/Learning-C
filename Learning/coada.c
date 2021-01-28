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

 int enqueue(int elem){ // addition of an element
     if(!isFull()){
         last = last + 1;
         coada[last] = elem;
     }
     else{
        printf("Tail is full!\n");
     }
 }

 int dequeue(){  // removal of an element 
     if(!isEmpty()){
         printf("Elementul sters din coada este: %d\n", coada[first]);
        
        }
     else{
         printf("Tail is empty!\\n");
     }
 }

int front(){   // get the first element
    return (coada[first]);
}

int display(){
    if(!isEmpty()){
        int i;
        printf("Elements: \n");
        for(i = first; i <= last; i++){
            printf("%d ", coada[i]);
        }
    }
}

int main(){
    
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);

    printf("First element in the tail: %d\n" , front());

    dequeue();
    display();

    printf("Tail full: %s\n" , isFull()?"true":"false");
    

    

    return 0;
}




