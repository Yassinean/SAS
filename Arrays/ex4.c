#include <stdio.h>
#include <stdlib.h>

int main(){
    float U[3] , V[3];
    int i;
    float ps;

    printf("Saisir les valeurs des vecteurs :");

    for ( i = 0; i < 3; i++)
    {
        printf("U[%d]",i);
        scanf("%f",&U[i]);
        printf("V[%d]",i);
        scanf("%f",&V[i]);
    }

    ps = 0 ;
    for (i = 0; i < 3; i++)
    {
        ps += U[i] * V[i];
    }
    printf("Le produit scalaire de deux vecteur est : %f",ps);
}