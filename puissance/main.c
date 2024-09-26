#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base, exposant;
    int R, i;
    R=1;
    printf("veuillez entre la base : ");
    scanf("%d",&base);

    printf("veuillez entre la exposant : ");
    scanf("%d",&exposant);

    for(i=1; i<=exposant;i++){
        R = R*base;
    }
    printf("resultat = %d",R);
}