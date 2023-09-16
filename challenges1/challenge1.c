#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
int main(){
    char prenom[10] = "" ;
    char nom[10] = ""; 
    int age;
    char sexe[10]= "" ;
    char numeroTel[10];

    printf("Saisis Votre nom :");
    scanf("%s",&nom);

    printf("Saisis Votre prenom :");
    scanf("%s",&prenom);
    
    printf("Saisis Votre age :");
    scanf("%d",&age);
    
    printf("Saisis Votre sexe :");
    scanf("%s",&sexe);
    
    printf("Saisis Votre num de telephone :");
    scanf("%s",&numeroTel);
    
    printf("Vos donnes sont :\n Votre nom: %s\n Votre prenom: %s \n Votre age: %d\n Votre sexe: %s\n votre num de telephone :%s", nom,prenom,age,sexe,numeroTel);
}