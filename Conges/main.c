#include <stdio.h>

int main() {
    int jours_accordes, jours_utilises, statut;
    int jours_restants;

    printf("total de jours de congés accordés : ");
    scanf("%d", &jours_accordes);

    printf(" jours de congés utilisés : ");
    scanf("%d", &jours_utilises);

    printf("Entrez le statut de l'employé 0 pour temps partiel , 1 pour temps plein) : ");
    scanf("%d", &statut);

    if (statut == 1) {
        jours_restants = jours_accordes - jours_utilises;
    } else if (statut == 0) {
        jours_restants = (jours_accordes / 2) - jours_utilises;
    } else {
        printf("Statut non valide.\n");
        return 1;
    }

    if (jours_restants < 0) {
        printf("Vous avez dépassé le nombre de jours de congés accordés");
    } else {
        printf("Il vous reste %d jours de congés", jours_restants);
    }
    return 0;
}