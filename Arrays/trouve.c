#include <stdio.h>
#include <stdlib.h>

int main(){
    int T[5];
    int i , n , x;

    printf("Saisir les elements du tab :");
    for ( i = 0; i < 5; i++)
    {
        printf("T[%d]",i);
        scanf("%d",&T[i]);
    }
    printf("Saisir un nbre :");
    scanf("%d",&n);
    x = 0 ;
    for ( i = 0; i < 5; i++)
    {
        if(T[i] == n)
            x++;
    }
    
    if (x == 0)
    {
        printf("Ce nbre ne se trouve pas dans le tableau");
    }
    else  printf("Ce nbre se trouve dans le tableau");
    

    printf("Ce nbre se trouve dans le tableau %d fois",x);
    
    
}