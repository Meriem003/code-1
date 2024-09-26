#include <stdio.h>

int main() {
    int  age, type, accidents;
    float  primeB, primeF;

    printf("Entrez l'âge du conducteur : ");
    scanf("%d", &age);

    printf("le type (1 pour sportive, 2 pour utilitaire, 3 pour familiale) : ");
    scanf("%d", &type);

    printf("Entrez le nombre d'accidents 5ans : ");
    scanf("%d", &accidents);

    printf("Entrez la prime de base (en euros) : ");
    scanf("%f", &primeB);

    if (age < 25) {
        primeF = primeB * 1.5;
    } else if (age <= 65) {
        primeF = primeB;
    } else {
        primeF = primeB * 1.2;
    }

    switch(type) {
        case 1:
            primeF = 2;
            break;
        case 2:
            primeF= 1.2; 
            break;
        case 3:
            primeF = 1.1;
            break;
        default:
            printf("Type de voiture non valide");
            return 1;
    }

    if (accidents > 1) {
        primeF= 1.3;
    }
    printf("La prime d'assurance finale = %.2f", primeF);

    return 0;
}