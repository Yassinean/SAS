#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, nbre;
    printf("Veuillez entrer un nbre :");
    scanf("%d", &nbre);
    for (i = 2; i < nbre; i++)
    {
        if (nbre % i == 0)
        {
            printf("le nombre n'est pas premier");
            return 0;
        }
    }
            printf("le nombre est premier");

}