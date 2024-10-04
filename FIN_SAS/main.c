#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_rdv 100

typedef struct{
    char nom[MAX_rdv];
    char prenom[MAX_rdv];
    char telephone[MAX_rdv];
    int  age[MAX_rdv];
    char statut[MAX_rdv];
    char date[MAX_rdv];
}rdv;

int count=0;
rdv list_res[MAX_rdv];

void ajouter_rdv(){
    if (count >= MAX_rdv){
        printf("la list reservations et plein.\n");
        return;
        }
    rdv reservation;
    printf("Ajouter une nouvelle réservation:\n");
    printf("Nom: ");
    scanf("%s",reservation.nom);
    printf("Prenom: ");
    scanf("%s",reservation.prenom);
    printf("telephone: ");
    scanf("%s",reservation.telephone);
    printf("age: ");
    scanf("%d",reservation.age);
    printf("les statut: 1:valide  2: reporte  3:annule  4:traite");
    scanf("%s",reservation.statut);
    printf("la date de réservation(JJ/MM/AAAA): ");
    scanf("%s",reservation.date);
    count++;
    printf("Réservation ajoutée avec succès!");
}










int main() {
    int choix;

    do {
        printf("\nMenu Principal:\n");
        printf("1. Ajouter une réservation\n");
        printf("2. Quitter\n");
        printf("Choix: ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                ajouter_rdv();
                break;
            case 2:
                printf("Au revoir!\n");
                break;
            default:
                printf("Choix invalide. Veuillez réessayer.\n");
        }
    } while (choix != 2);

    return 0;
}
