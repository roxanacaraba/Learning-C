#include<stdio.h>

int max = 10; ///stiva poate avea max 10 elemente
int stiva[10];
int top=-1; // stiva este goala, de aceea varful este setat la -1

int isEmpty(){
    if(top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(){
    if(top == max){
        return 1;
    }
    else{
        return 0;
    }
}

int peek(){
    return stiva[top];
}

int pop(){
    int data;
    if (!isEmpty()){
        data = stiva[top];
        top = top -1;
        
        return data;
    }
    else{
        printf("Stiva este goala!\n");
    }
}

int push(int data){
    if(!isFull()){
        top = top + 1;
        stiva[top] = data;
    }
    else{
        printf("Stiva este plina!\n");
    }
}

int main(){
    printf("Este stiva goala? \nRaspuns: %s\n" , isEmpty?"Adevarat":"Fals");

    push(3);
    push(8);
    push(1);
    push(2);

    printf("Element at top of the stack: %d\n" ,peek());
    printf("varf: %d \n", top);
    printf("Stack full: %s\n" , isFull()?"true":"false");
    printf("Stack empty: %s\n" , isEmpty()?"true":"false");
    // printarea elementelor stivei
    while(!isEmpty()){
        int data = pop();
        printf("%d\n", data);
    }
    printf("varf: %d \n", top);
    printf("Stack full: %s\n" , isFull()?"true":"false");
    printf("Stack empty: %s\n" , isEmpty()?"true":"false");
    
    return 0;
}