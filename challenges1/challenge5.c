#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
 int x1, x2, y1, y2, distance;
 printf("Entrer les coordonnes des poin x1 et y1 :");
 scanf("%d%d",&x1,&y1);
 printf("Entrer les coordonnes des poin x1 et y2 :");
 scanf("%d%d",&x2,&y2); 
 distance = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
 printf("La distance entre les deux points est : %d\n", distance);
}
