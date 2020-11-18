//Swapping two Numbers using a Temporary Variable

#include<stdio.h>

int main(){
      int a = 20, b = 13, temp;
      temp = a;
      a = b;
      b = temp;

      printf("a = %d, b = %d", a, b);

      return 0;


}