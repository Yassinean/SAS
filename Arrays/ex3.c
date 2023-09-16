#include <stdio.h>
#include <stdlib.h>

int main(){
    float num[10];
    int i ;
    float somme , moy , prod;
    printf("Entrer 10 nombres reels :");
    for ( i = 0; i < 10; i++)
    {
        scanf("%f",&num[i]);
    }
    somme = 0;
    prod = 1;
    for ( i = 0; i < 10; i++)
    {
        somme += num[i];
        prod *= num[i];
    }
    printf("\nLa somme est : %f",somme);
    printf("\nLe produit est : %f",prod);
    moy = somme / 10;

    printf("\nLa moyenne est : %f",moy);  
    
}