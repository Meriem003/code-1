#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base, exposant;
    int R, i;
    R=1;
    printf("\n\nveuillez entre la base : ");
    scanf("%d",&base);

    printf("\n\nveuillez entre la exposant : ");
    scanf("%d",&exposant);

    for(i=1; i<=exposant;i++){
        R *= base;
    }
    printf("\n\nresultat = %d",R);
}