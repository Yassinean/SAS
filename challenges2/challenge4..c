#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a,b,c;
    float delta , x1 , x2 , x;
    printf("Entrez 3 nbre nbre de l'equation ax^2 + bx + c : ");
    scanf("%d%d%d",&a,&b,&c);

    delta = pow(b,2) - 4 * a * c ;
    printf("La valeur de delta est : %.2f",delta);

    if(delta > 0 ){
        x1 = (-b-sqrt(delta))/(2*a);
        x2 = (-b+sqrt(delta))/(2*a);
        printf("L'equation admet deux valeurs \n valeur x1 = %.2f\nvaleur x2 = %.2f",x1,x2);
    }else if (delta == 0)
    {
        x = -b / (2*a);
        printf("L'equation admet une solution unique c'est : %.2f",x);
    }else
        printf("L'equation n'admet pas des solution reels");
    
}