#include <stdio.h>
#include <stdlib.h>

int main(){
    float F ,C;
    printf("Veuillez saisir la temperature en Fahrenheit :");
    scanf("%f",&F);
    C = (F-32)/1.8;
    printf("La temperature en Celsius est : %f\n",C);
    if (C < -2)
    {
        printf("tres froid !!");
    }
    else if (C > -2 && C < 10)
    {
        printf("froid :|");
    }
    else if (C > 10 && C < 27)
    {
        printf("Normale :)");
    }
    else if (C > 27 && C < 45)
    {
        printf("chaud :|");
    }
    else 
        printf("tres chaud !!");
    
    
    
    
}