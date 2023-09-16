#include <stdio.h>
#include <stdlib.h>

int main (){

    /*-------- Drawing rectangle ----------*/
    /*int L , C;
    int i , j;

    printf("Entrer le nombre de lignes :");
    scanf("%d",&L);
    
    printf("Entrer le nombre de colonnes :");
    scanf("%d",&C);

    for ( i = 1; i <= L; i++)
    {
        for ( j = 1; j <= C; j++)
        {
            printf("* ");
        }
        printf("\n");
    }*/




    /*---------- Drawing triangle ------------*/
    /*int L ;
    int i , j;

    printf("Entrer le nombre de lignes :");
    scanf("%d",&L);
 
    for ( i = 1; i <= L; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }*/

    /*------ Drawing the perimetre of rectangle --------*/

    int L ;
    int i , j , k;

    printf("Entrer le nombre de lignes :");
    scanf("%d",&L);

    for ( i = 1; i <= L; i++)
    {
        for ( j = 1; j <= L-i; j++)
        {
            printf(" ");
        }
        for ( k = 1 ; k <= i; k++)
        {
            printf("*");
        }
        for ( k = 1 ; k <= i-1; k++)
        {
            printf("*");
        }
        printf("\n"); 
    }
       
}
