#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    const float Pi = 3.14;
    float r , C;
    printf("Entrer le rayon d'une cercle : ");
    scanf("%f",&r);
    C = 2 * Pi * r;
    printf("la circonférence du cercle est : %f", C);
}