#include <stdio.h>
#include <stdlib.h>

int main (){
    char c[6];
    int i ;
    c[0] = 'A';
    c[1] = 'O';
    c[2] = 'I';
    c[3] = 'U';
    c[4] = 'Y';
    c[5] = 'E';
    printf("Les voyelles sont :");
    for ( i = 0; i <= 5; i++)
    {
        printf("%c\n",c[i]);
    }
    

}