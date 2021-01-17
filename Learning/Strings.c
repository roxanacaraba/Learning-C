#include <stdio.h>
 
int main()
{
    
    char string[256];                               
 
    printf( "Please enter a long string: " );
 
    /* notice stdin being passed in */
    fgets ( string, 256, stdin );           
 
    printf( "You entered a very long string, %s", string );
 
    getchar();
}
 