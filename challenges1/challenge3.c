#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a , b ;
    int add , sub , mult , mod ;
    float div;
    printf("Donner la valeur du a :");
    scanf("%d",&a);
    printf("Donner la valeur du b :");
    scanf("%d",&b);

    add = a + b ;
    sub = a - b ;
   mult = a * b ;
    div = a / b ;
    mod = a % b ;

    printf("La somme de a et b est : %d\n",add);
    printf("La substraction de a et b est : %d\n",sub);
    printf("La multiplication de a et b est : %d\n",mult);
    if (b != 0)
    {
        printf("La division de a sur b est : %f\n",div);
    }
    else{
        printf("La division sur 0 est impossible !!");
    }
    printf("Le rest de la division de a sur b est : %d",mod);

}