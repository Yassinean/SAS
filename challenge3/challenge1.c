#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
/*------ Table de multiplication -------------------*/
  
   int i,M,N;
   printf("Entrer le nbre que tu veux :");
   scanf("%d",&M);

   for ( i = 0; i <= 10; i++)
   {
    N = M * i ;
    printf("%d x %d = %d \n", M , i , N);
   }    
   



/*
  int N , i ;
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
}