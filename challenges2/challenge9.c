#include <stdio.h>
#include <stdlib.h>

int main (){
    char c ;
    
    printf("Ecris un caractere : ");
    scanf("%c",&c);
    if (c >= 65 && c < 123)
    {    
        printf("\nCe caractere est il fait partie des alphabets ");
        
        if (c >= 65 && c <= 90)
        {
            printf("Ce caractere et Majuscule");
        }
        else if ( c >= 97 && c < 123 )
        {
            printf("\nCe caractere et miniscule");
        }
    }
    else if (c >= 91 && c <= 96)
    {
        printf("Ce caractere n'est il fait pas partie des alphabets");
    }
    else 
        printf("Ce caractere n'est il fait pas partie des alphabets");

    
    
}