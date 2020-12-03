// // Write a C program to find the eligibility of admission for a professional course based on the following criteria: 
// Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and Total in all three subject >=190 or Total in Maths and Physics >=140 
//   Input the marks obtained in Physics :65
//   Input the marks obtained in Chemistry :51
//   Input the marks obtained in Mathematics :72 
//   Total marks of Maths, Physics and Chemistry : 188 
//   Total marks of Maths and Physics : 137
// Expected Output :
// The candidate is not eligible for admission

#include<stdio.h>

int main(){
    int maths, phy, chem, total, total_maths_phy;

    printf("Input the marks obtained in Mathematics: ");
    scanf("%d", &maths);

    printf("Input the marks obtained in Physics: ");
    scanf("%d", &phy);

    printf("Input the marks obtained in Chemistry: ");
    scanf("%d", &chem);

    printf("Input the marks obtained in Maths, Physics and Chemistry: ");
    scanf("%d", &total);

    printf("Input the marks obtained in Maths and Physics: ");
    scanf("%d", &total_maths_phy);

    if(maths >= 65 && phy >= 55 && chem >= 50 && total >= 190 && total_maths_phy >= 140){
        printf("The candidate is eligible for admission");
        }
    else{
        printf("The candidate is not eligible for admission");

        }
    return 0;
}