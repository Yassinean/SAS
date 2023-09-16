#include <stdio.h>
#include <stdio.h>
#include <string.h>

int a, b, max, min;

void etatSigne()
{
    if (a * b > 0)
    {
        printf("Ils ont le meme signe");
    }
    else
        printf("\nIls n'ont pas le meme signe");
}
int maximum(int x , int y)
{
    return (x > y) ? x : y;
}
int minimum(int x , int y)
{
  return (x < y) ? x : y;
}

// void birthday(char Name[30], int age)
// {
//     printf("Happy birthday dear %s \nYou have %d years old !!", Name, age);
// }

int main()
{
    // int age;
    // char Name[30];
    // printf("Entrer votre nom :");
    // scanf("%s", &Name);
    // printf("Entrer votre age :");
    // scanf("%d", &age);
    // birthday(Name, age);

    printf("Veuillez saisi  deux valeurs  : ");
    scanf("%d%d", &a, &b);
    etatSigne(a, b);
    max = maximum(a, b);
    min = minimum(a, b);
    printf("\nLe minimum est :%d", min);
    printf("\nLe maximum est :%d", max);
}