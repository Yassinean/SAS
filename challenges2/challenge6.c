#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Entrer un nbre : ");
    scanf("%d",&n);

    if (n > 0)
    {
        printf("Ce num est positive");
    }
    else if (n < 0)
    {
        printf("Ce num est negative");
    }
    else printf("Ce num est null");
    
}