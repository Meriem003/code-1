#include <stdio.h>
#include <stdlib.h>

int main()
{
    int annee ;
    printf("l'annee : ");
    scanf("%d",&annee);
    printf("l'annee => mois = %d\n",annee*12);
    printf("l'annee => jours = %d\n",annee*365);
    printf("l'annee => heures = %d\n",annee*365*24);
    printf("l'annee => minutes = %d\n",annee*365*24*60);
    printf("l'annee => secondes = %d",annee*365*24*60*60);
    return 0;
}