#include <stdio.h>

int main() {

    float R;
    int Scredit; 
    int Dpret;

    printf("revenu annuel en euros : ");
    scanf("%f", &R);

    printf("score de crédit sur 1000 : ");
    scanf("%d", &Scredit);

    printf("la durée du prêt en années : ");
    scanf("%d", &Dpret);

    if (R >= 30000 && Scredit >= 700 && Dpret <= 10) {
        printf("Vous êtes éligible");
    }
    else if (R >= 30000 && Scredit >= 650 && Dpret <= 15) {
        printf("Éligible avec conditions");
    }
    else {
        printf("Non éligible");
    }
    return 0;
}