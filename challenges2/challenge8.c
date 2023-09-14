#include <stdio.h>
#include <stdlib.h>

int main()
{
    float moyenne;
    
    printf("Saisis la moyenne d'eleve : ");
    scanf("%f", &moyenne);

        if (moyenne < 10)
        {
            printf("l'eleve est recale");
        }
        else if (moyenne >= 10 && moyenne <= 12)
        {
            printf("Montion passable");
        }
        else if (moyenne >= 12 && moyenne < 14)
        {
            printf("Montion assez bien");
        }
        else if (moyenne >= 14 && moyenne <= 16)
        {
            printf("Montion bien");
        }
        else
            printf("Montion tres bien");
}