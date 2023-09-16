#include <stdio.h>
#include <stdlib.h>

int main(){
    float tab[5];
    float moy;
    int i;
    printf("Veuillez entrer les notes des étudiants : ");

    for ( i = 0; i < 4; i++)
    {
        printf("\nDonner la note de l'etudiant num %d :",i+1);
        scanf("%f",&tab[i]);
    }
    float som;
    for ( i = 0; i < 4; i++)
    {
        som+= tab[i];
    }
    printf("\nLa somme des notes est : %f",som);
    moy = som / 4;
    printf("\nla moyenne des notes des etudiant est : %f",moy);

}