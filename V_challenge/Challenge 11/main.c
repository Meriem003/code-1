#include <stdio.h>
#include <stdlib.h>

int main()
{
    float largeur, longueur;
    printf("veuillez entre la valeur de largeur : ");
    scanf("%f",&largeur);
    printf("veuillez entre la valeur de longueur : ");
    scanf("%f",&longueur);
    printf("la surface :%.2f",longueur * largeur);
    return 0;
}
