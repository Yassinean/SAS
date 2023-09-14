#include <stdio.h>
#include <stdlib.h>

int main(){
    char n;
    printf("Entrer un caractere : ");
    scanf("%c",&n);

    if (n >= 65 && n < 90)
    {
        printf("Ce caractere est Majuscule");
    }
    else if (n > 96 && n < 123)
    {
        printf("Ce caractere est miniscule");
    }

    
}