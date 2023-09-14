//  #include <stdio.h>
//  #include <stdlib.h>

//  int main(){
//     int annee ;
//     int mois , jours, heure , minute , seconde ;
//     printf("Entrer une annee :");
//     scanf("%d",&annee);
//     mois = annee * 12;
//     jours = annee * 365;
//     heure = jours * 24;
//     minute = heure * 60;
//     seconde = minute * 60;    
//     printf("En mois : %d\n",mois);
//     printf("En jours : %d\n",jours);
//     printf("En heure : %d\n",heure);a=
//     printf("En minute : %d\n",minute);
//     printf("En seconde : %d\n",seconde);
     
//  }


// // #include <stdio.h>

// // int main() {
// //     int annee;
// //     int mois, jours, heures, minutes, secondes;

// //     printf("Entrez une année : ");
// //     scanf("%d", &annee);

// //     // Conversion en mois, jours, heures, minutes et secondes
// //     mois = annee * 12;
// //     jours = annee * 365;
// //     heures = jours * 24;
// //     minutes = heures * 60;
// //     secondes = minutes * 60;

// //     // Affichage des résultats
// //     printf("En mois : %d\n", mois);
// //     printf("En jours : %d\n", jours);
// //     printf("En heures : %d\n", heures);
// //     printf("En minutes : %d\n", minutes);
// //     printf("En secondes : %d\n", secondes);

// //     return 0;
// // }


#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

int main()
{
   int annee;
   int mois;
   int jours;
   int heures;
   int munites;
   int seconds;
   int conv;
   char choice;
   printf("donner nombre  un annee pour le convetir : ");
   scanf("%d",&annee);
   do{
     printf("convetir en \n");
     printf("1-Mois \n");
     printf("2-jours \n");
     printf("3-heures \n");
     printf("4-munites \n");
     printf("5-seconds \n");
     scanf("%d",&conv);
     if(conv>0 && conv<6){
        switch(conv){
      case 1 :
        mois = annee *12;
         printf("les nombre des mois pour cette nombre annee est : %d \n",mois);
           break;

      case 2 :
        jours= annee*365;
         printf("les nombre des jours pour cette nombre annee est : %d \n",jours);
           break;
      case 3 :
        jours= annee *365;
        heures = jours*12;
         printf("les nombre des heures pour cette nombre annee est : %d \n",heures);
           break;
      case 4 :
        jours= annee *365;
        heures = jours*12;
        munites = heures * 60;
         printf("les nombre des munites pour cette nombre annee est : %d \n",munites);
           break;
     case 5 :
        jours= annee* 365;
        heures = jours*12;
        munites = heures * 60;
        seconds = munites *60;
         printf("les nombre des seconds pour cette nombre annee est : %d \n",seconds);
           break;

      default :
        printf(" nombre invalid pour les options");
        break;
        }
        /*getchar();*/
        printf(" do you want to  continue (y/n)\n") ;
        scanf("%c",&choice);
     }




   }while(choice=='y');





    return 0;
}