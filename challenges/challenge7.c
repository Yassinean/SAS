#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main(){
    int n , inverse;
    printf("Veuillez saisir  un entier de 3 nbres : ");
    scanf("%d",&n);

    inverse = (n % 10) * 100 + ((n / 10) % 10) * 10 + (n / 100);
    printf("L'inverse est : %d", inverse);
}