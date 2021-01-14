#include <stdio.h>

struct Adresa {
    char strada[20];
    int numar;
    char bloc;
    char scara;
    double codPostal;
} ;           // adr1; declarare cu structure declaration//

/* sau declarare ca un tip de date basic
int main(){
    struct Adresa adr1;
}
*/

int main(){
    struct Adresa adr1 = {"Toparceanu", 23, 'C', 'B', 273342};
    adr1.strada = "Garleanu";
    adr1.numar = 31;
    printf("%s, %d, %lf", adr1.strada, adr1.numar, adr1.codPostal);
    return 0;
}   

