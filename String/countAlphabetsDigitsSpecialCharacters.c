//Write a program in C to count total number of alphabets, digits and special characters in a string.

 #include<stdio.h>
 
 int main(){
    char str[] = "This is a string , 2 %% and 3 ***";
     int i = 0;
     int countL = 0;
     int countD = 0;
     int countSC = 0;
    
    while(str[i] != '\0'){
        if(str[i] >= 65 && str[i] <= 90 || str[i] >= 97  && str[i] <= 122){
            countL++;
        }
        else if(str[i] >= 48 && str[i] <= 57){
            countD++;
        }
        else{
            countSC++;
        }
        i++;
    }
    printf("Letters: %d\nDigits: %d\nSpecial Characters: %d", countL, countD, countSC);
    return 0;
    
 }