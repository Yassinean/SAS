#include <stdio.h>
#include <stdlib.h>

int main()
{
    // int T[50];
    // int n,i,echo;
    // printf("Veuillez taper la dimension du tableau : ");
    // scanf("%d",&n);

    // printf("Avant le tri : \n");
    // for ( i = 0; i < n; i++)
    // {
    //     printf("Entrer l'element %d: ",i+1);
    //     scanf("%d",&T[i]);
    // }
    // printf("Apres le tri :\t");
    // do
    // {
    //     echo = 0;
    //     for (i = 0; i < n-1; i++)
    //     {
    //         if (T[i]>T[i+1])
    //         {
    //             int tmp = T[i];
    //             T[i] = T[i+1];
    //             T[i+1]  = tmp;
    //             echo ++;
    //         }

    //     }

    // } while (echo > 0);
    // for ( i = 0; i < n; i++)
    // {
    //     printf("%4d ",T[i]);
    // }
    int T[50] ;
    int i, temp, n , j;

    printf("Enter the number of cases :");
    scanf("%d",&n);

    for ( i = 0; i < n; i++)
    {
        printf("case %d = ",i+1);
        scanf("%d",&T[i]);
    }
    
    for (i = 0; i < n-1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (T[i] > T[j])
            {
                temp = T[i];
                T[i] = T[j];
                T[j] = temp;
            }
        }
    }
    printf("The new table is:");
    for (i = 0; i < n; i++)
    {
        printf("%d  \t", T[i]);
    }
}
