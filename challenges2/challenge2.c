#include <stdio.h>
#include <stdlib.h>

int main(){
    char c;
    printf("entrer un caractere :");
    scanf("%c",&c);
    switch (c)
    {
    case 'a':
        printf("Voyelle");
        break;
    case 'o':
        printf("Voyelle");
        break;
    case 'i':
        printf("Voyelle");
        break;
    case 'u':
        printf("Voyelle");
        break;
    case 'e':
        printf("Voyelle");
        break;
    case 'y':
        printf("Voyelle");
        break;
    default: printf("Ou non");
        break;
    }
}