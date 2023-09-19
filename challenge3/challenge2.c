#include <stdio.h>
#include <stdlib.h>

 int main()
{

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
}
*/

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

/*int L ;
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
}*/

// Fonction pour calculer le PGCD de deux nombres
/*int pgcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int a, b, res;
    printf("Enterer a ");
    scanf("%d", &a);

    printf("Enterer b ");
    scanf("%d", &b);

    res = pgcd(a, b);
    printf("%d %d = %d", a, b, res);
}
*/
    int T[5];

    printf("Veuillez entrer 5 valeurs du tab:");
    for ( int i = 0; i < 5; i++)
    {
        scanf("%d",&T[i]);
    }
    for (int j = 0; j < 5; j++)
    {
        for ( int k = j+1; k < 5; k++)
        {
          
            if (T[j] > T[k])
            {
                int temp = T[j];
                T[j] = T[k];
                T[k] = temp;
            }
             
        }
        
    }
    
    printf("l'ordre est : ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",T[i]);
    }
      
}
