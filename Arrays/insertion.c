#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[10];
    int taille, pos, n, i;
    printf("Saisir la taille du tab : ");
    scanf("%d", &taille);

    printf("Saisir les elements du tab ");

    for (i = 0; i < taille; i++)
    {
        printf("T[%d] = ", i + 1);
        scanf("%d", &T[i]);
    }

    printf("Entrer la valeur inserer : ");
    scanf("%d", &n);

    printf("Entrer sa position : ");
    scanf("%d", &pos);

    if(pos <= 0 || pos > taille + 1){
        printf("Position invalid ! Veuiller enter une valeur entre 1 et %d",taille + 1);
    }
    else{
        for ( i = taille; i >= pos; i--)
        {
            T[i] = T[i-1];
        }
        T[pos-1] = n;
        taille++;
        printf("Nouveau tableau est ");
        for ( i = 0; i < taille; i++)
        {
            printf("T[%d] = %d\n",i,T[i]);
        }
        
        
    }
}