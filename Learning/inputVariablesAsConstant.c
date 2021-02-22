#include<stdio.h>

int get_user_input(){
    int user_input;
    printf("Input a integer: ");
    scanf("%d", &user_input);
    return user_input;
}

int main(){
    int const user_input = get_user_input();
    printf("%d", user_input);
    //user_input = 5; // incercand sa ii dam alta valoare constantei user_input rezulta o eroare
    //printf("%d", user_input);
    return 0;
}
