#include <stdio.h>
#include <stdlib.h> 
 int main(){
    int x , y , somme;
    printf("Ecris le premier nbre : ");
    scanf("%d",&x);

    printf("Ecris le deuxieme nbre : ");
    scanf("%d",&y);

    if(x == y){
        somme = (x + y) * 3;
        printf("Les deux nbres sont identiques donc la valeur est : %d",somme);
    }
    else {
        printf("La somme de x et y est : %d", x + y);
    }
 }