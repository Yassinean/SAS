#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
  
  /*----------- La division ----------------*/
  //  float a ,b ,c;
  //  printf("Veuillez saisi le 1er nbr :");
  //  scanf("%f",&a);
  //  printf("Veuillez saisi le 2eme nbr :");
  //  scanf("%f",&b);
  //  c = a /b ;
  //  if (b != 0)
  //  {
  //     printf("La division est: %.2f", c);    
  //  }else{
  //     printf("La division sur 0 est impossible");
  //  }

  /*------ Calcule de chiffre d'affaire -------*/ 
    // int prduits_vendu;
    // float prix_vente , CA;
    // printf("Veuillez entrer le nombre des produits vendus:");
    // scanf("%d",&prduits_vendu);
    // printf("Entrer le prix de vente :");
    // scanf("%f",&prix_vente);
    // CA = prduits_vendu * prix_vente ;
    // printf("Le chiffre d'affaires est : %.2f", CA);

    /*-----------LES CONDITIONS--------------------------*/
    
    /*--------- Le max des nombres -----------*/
    // float a , b , max ;
    // printf("Saisir le nbre 1 :");
    // scanf("%f",&a);
    // printf("Saisir le nbre 2 :");
    // scanf("%f",&b);
    // max = a ;
    // if(b > max ){
    //   printf("le max est : %f",b);
    // }else printf("le max est : %f",a);


  /*------- L'etat de liquide -----------------*/
  // int x;
  // printf("Entrer la temperature de liquide : ");
  // scanf("%d",&x);
  // if(x < 0)
  //   printf("L'etat du liquide est GLACE");
  // else if (x > 0 && x < 100)
  // {
  //   printf("L'etat du liquide est liquide");
  // }
  // else 
  //   printf("L'etat du liquide est vapeur");
    /*--------------------SWITCH----------------*/
    /*------- Le nom du jour -------------*/
    // int j ;
    // printf("Entrer un nombre entre 1 et 7 :");
    // scanf("%d",&j);
    // switch (j)
    // {
    // case 1:
    //   printf("Lundi");
    // break;
    // case 2:
    //   printf("Madi");
    // break;
    // case 3:
    //   printf("Mercredi");
    // break;
    // case 4:
    //   printf("Jeudi");
    // break;
    // case 5:
    //   printf("Vendredi");
    // break;
    // case 6:
    //   printf("Samedi");
    // break;
    // case 7:
    //   printf("Dimanche");
    // break;
    
    // default: printf("J'ai dis un nbre entre 1 et 7");
    //   break;
    // }
  /*------------------------LES BOUCLES----------------*/
  /*------ Table de multiplication -------------------*/
  /*
  int M , i , N;
  printf("Veuillez saisi le nbre que tu veux : ");
  scanf("%d",&M);
   for(i = 0 ; i <= 10 ; i++){
     N = M * i;
     printf("%d x %d = %d \n", M, i , N);          //    %8espace.2le nbre apres la virgule f  
   }*/




  /*int N , i ;
  printf("Veuillez entrer un nbre entre 1 et 10 :");
  scanf("%d",&N);

  while ( N < 0 || N > 10)
   {   
     printf("Veuillez entrer un nbre entre 1 et 10 :");
     scanf("%d",&N);
   }
   i = 1;
   while(i <= 10){
    printf("%d x %d = %d\n", N, i , N * i );
    i++;
   }*/


/*
  do
  {
     M = 7 * i ;
     printf("7 x %d = %d \n",i,M);
     i++;
  } while (i<=10);
*/
 
 /*------------------------- Exercice boucle -------------------*/
  int N ;
  printf("Entrer un nbre entre 10 et 20 : ");
  scanf("%d",&N);
  while(N < 10 || N > 20){
    if (N > 20 )
    {
      printf("Plus grand !"); 
    }
    else
      printf("plus petit !");
    printf("Entrer un nbre entre 10 et 20 : ");
    scanf("%d",&N);
  }
  printf("Le nbre que tu as choisis est  : %d", N);
  return 0;
}