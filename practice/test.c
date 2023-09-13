#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    //int x = 21;
    int x;
    int y;
    printf("Bonjour, Saisis un nbre : ");
    scanf("%d",&x);
    printf("Saisis le second nbre : ");
    scanf("%d",&y);
    int z = pow (x,y);
    printf ("La puissance est : %d", z);

  return 0;
}