#include<stdio.h>
#include<stdlib.h>

int main(){
    int secret_number = 8;
    int guess;
    int guess_count = 0;
    int guess_limit = 3;
    int out_of_guesses = 0;

    while(guess != secret_number && out_of_guesses == 0){
        if (guess_count <guess_limit){
            printf("Enter a number between 1-10: ");
            scanf("%d", &guess);
            guess_count ++;
        }
        else{
            out_of_guesses = 1; /* True - adica userul a ramas fara incercari */

        }
    }
    if (out_of_guesses == 1){
        printf("You lost!");
    }
        else {
    printf("You win!");
        }
    return 0;

}