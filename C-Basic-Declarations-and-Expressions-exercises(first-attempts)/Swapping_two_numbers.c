//Swapping two Numbers using a Temporary Variable

#include<stdio.h>

int swap1(){
      int a = 20, b = 13, temp;
      temp = a;
      a = b;
      b = temp;

     printf("a = %d , b = %d\n", a , b);
}

// swapp with addition and substraction

int swap2(){
      int a = 20, b = 13;
      a = a + b;  
      b = a - b;
      a = a - b;
      
      printf("a = %d , b = %d\n", a , b);
}

// swap with multiplication and division

int swap3(){
      int a = 20, b = 13;
      a = a * b;  
      b = a / b;
      a = a / b;

      printf("a = %d , b = %d\n", a , b);

}


//swap with xor

int swap4(){
      int a = 20, b = 13;
      a = a ^ b;
      b = a ^ b;
      a = a ^ b;

      printf("a = %d , b = %d\n", a , b);
}

int main(){
      swap1();
      swap2();
      swap3();
      swap4();
      return 0;
}