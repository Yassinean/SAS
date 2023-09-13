#include <stdio.h>

int main() {
    int nombre;

    printf("Entrez un nombre entier : ");
    scanf("%d", &nombre);

    printf("La valeur en octal est : %o\n", nombre);
    printf("La valeur en hexadecimal est : %X\n", nombre);

    return 0;
}
