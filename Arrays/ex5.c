#include <stdio.h>
#include <stdlib.h>

int main(){
    int T[3];
    int i , m;

    printf("Entrer les valeurs du tableau :");

    // for ( i = 0; i < 3; i++)
    // {
    //     printf("T[%d] = ",i);
    //     scanf("%d",&T[i]);
    // }
    // m = T[0];
    // for ( i = 1; i < 3; i++)
    // {
    //     if (m > T[i])
    //     {
    //         m = T[i];
    //     }
    // }
    //     printf("Le minimum est: %d",m);
    for ( i = 0; i < 3; i++)
    {
        printf("T[%d] = ",i);
        scanf("%d",&T[i]);
    }
    m = T[0];
    for ( i = 1; i < 3; i++)
    {
        if (m < T[i])
        {
            m = T[i];
        }
    }
        printf("Le Maximum est: %d",m);
}