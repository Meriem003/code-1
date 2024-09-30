#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n, compteur = 0;

    printf("Donner un nombre : ");
    scanf("%d",&n);

    while(n > 0){
        n = n/10;
        compteur++;
    }

    printf("Nombre de chiffres = %d ",compteur);
    return 0;
}