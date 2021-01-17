#include <stdio.h>
#include <string.h>

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
    char stradaModificata[20] = "Garleanu";
    struct Adresa adr1 = {"Toparceanu", 23, 'C', 'B', 273342};
    
    strcpy(adr1.strada, stradaModificata);
    adr1.numar = 31;
    
    printf("%s, %d", adr1.strada, adr1.numar);
    
    return 0;
}   

