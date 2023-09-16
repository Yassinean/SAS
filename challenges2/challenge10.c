#include <stdio.h>
#include <stdlib.h>

int main(){
    int jour , annee ;
    int mois;
    printf("Ecris le jour:");
    scanf("%d",&jour);
    printf("Ecris l'annee : ");
    scanf("%d",&annee);

    do
    {
        printf("Ecris le mois :");
        scanf("%d",&mois);
        if (mois == 1)
        {
            printf("%d-Janvier-%d",jour,annee);
        }
        else if (mois == 2)
        {
            printf("%d-Fevrier-%d",jour,annee);
        }
        else if (mois == 3)
        {
            printf("%d-Mars-%d",jour,annee);
        }
        else if (mois == 4)
        {
            printf("%d-Avril-%d",jour,annee);
        }
        else if (mois == 5)
        {
            printf("%d-Mai-%d",jour,annee);
        }
        else if (mois == 6)
        {
            printf("%d-Juin-%d",jour,annee);
        }
        else if (mois == 7)
        {
           printf("%d-Juillet-%d",jour,annee);
        }
        else if (mois == 8)
        {
           printf("%d-Aout-%d",jour,annee);
        }
        else if (mois == 9)
        {
           printf("%d-Septmbre-%d",jour,annee);
        }
        else if (mois == 10)
        {
           printf("%d-Octobre-%d",jour,annee);
        }
        else if (mois == 11)
        {
           printf("%d-Nouvembre-%d",jour,annee);
        }
        else if (mois == 12)
        {
           printf("%d-Decembre-%d",jour,annee);
        }
        /*
        switch (mois)
        {
        case 1:
            printf("%d-Janvier-%d",jour,annee);
            break;
        case 2:
            printf("%d-Fevrier-%d",jour,annee);
            break;
        case 3:
            printf("%d-Mars-%d",jour,annee);
            break;
        case 4:
            printf("%d-Avril-%d",jour,annee);
            break;
        case 5:
            printf("%d-Mai-%d",jour,annee);
            break;
        case 6:
            printf("%d-Juin-%d",jour,annee);
            break;
        case 7:
            printf("%d-Juillet-%d",jour,annee);
            break;
        case 8:
            printf("%d-Aout-%d",jour,annee);
            break;
        case 9:
            printf("%d-Septembre-%d",jour,annee);
            break;
        case 10:
            printf("%d-Octobre-%d",jour,annee);
            break;
        case 11:
            printf("%d-Nouvembre-%d",jour,annee);
            break;
        case 12:
            printf("%d-Decembre-%d",jour,annee);
            break;
        
        default:
            break;
        }*/
        
    } while (mois < 1 && mois > 12);
    
}