#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a,b,c,d;
    float m;
    printf("Entrer premier nombre :");
    scanf("%d",&a);
    printf("Entrer deuxieme nombre :");
    scanf("%d",&b);
    printf("Entrer troisieme nombre :");
    scanf("%d",&c);
    printf("Entrer 4eme nombre :");
    scanf("%d",&d);
    printf("La somme de ces nombres est : %d\n", a+b+c+d);
    m = (a + b + c + d) / 4;
    printf("La moyenne de ces nombres est : %f", m);   
}