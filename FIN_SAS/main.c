#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define MAX_rdv 100

typedef struct{
    char nom[MAX_rdv];
    char prenom[MAX_rdv];
    char telephone[MAX_rdv];
    int age;
    char statut[MAX_rdv];
    int reference;
    char date[MAX_rdv];
} rdv;

rdv list_res[MAX_rdv]={

                {"coundi","yahya","0745635423",21,"valide",1,"05/10/2024",},
                {"ANAS","TFITFI","06789340739",23,"valide",2,"05/10/2024",},
                {"mazine","FRIFIRA","076542328212",18,"valide",3,"05/10/2024",},
                {"mouad","tewil","06485978212",20,"annule",4,"05/10/2024",},
                {"ayoub","nemer","0642824254",18,"valide",5,"05/10/2024",},
                {"DOUNIA","dounia","073849023",18,"valide",6,"06/10/2024",},
                {"MERYEM","SALHI","078436923234",18,"raporté",7,"10/10/2024",},
                {"MOHAMMED","MOHAMMED","0765728438212",18,"valide",8,"05/10/2024",},
                {"ANWAR","M3AYSEB","06624894212",18,"traite",9,"11/10/2024",},
                {"AMIR","BAHJA","0765438212",18,"valide",10,"05/10/2024",},
};


void MENU() {
    printf("======================= MENU =======================\n");
    printf("=     1- Ajouter une reservation                   =\n");
    printf("=     2- Modifier une reservation                  =\n");
    printf("=     3- Supprimer une reservation                 =\n");
    printf("=     4- Afficher toutes les reservations          =\n");
    printf("=     5- Recherche une reservation                 =\n");
    printf("=     6- Quitter                                   =\n");
    printf("====================================================\n");
    printf("Choisissez une option: ");
}

int count = 10;
rdv list_res[MAX_rdv];

int ReferenceUnique() {
    return count + 1;
}

bool est_bissextile(int annee) {
    return (annee % 4 == 0 && (annee % 100 != 0 || annee % 400 == 0));
}

bool est_date_valide(const char *date) {
    int jour, mois, annee;
    if (sscanf(date, "%d/%d/%d", &jour, &mois, &annee) != 3) {
        return false;
    }
    if (mois < 1 || mois > 12 || jour < 1) {
        return false;
    }
    int jours_dans_mois[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (est_bissextile(annee)) {
        jours_dans_mois[1] = 29;
    }
    return jour <= jours_dans_mois[mois - 1];
}

void ajouter_rdv(){
    int R;
    printf("1-Ajouter une reservations :\n2-Ajouter plusieurs reservations :\n");
    scanf("%d",&R);
    if(R==1){
        if(count < MAX_rdv){
            printf("Nom: ");
            scanf(" %[^\n]", list_res[count].nom);
            printf("Prenom: ");
            scanf(" %[^\n]", list_res[count].prenom);
            printf("Numero de telephone: ");
            scanf("%s", list_res[count].telephone);
            printf("Age: ");
            scanf("%d", &list_res[count].age);
            while (1) {
                printf("La date (JJ/MM/AAAA) : ");
                scanf("%s", list_res[count].date);
                if (est_date_valide(list_res[count].date)) {

                    break;
                } else {
                    printf("Date invalide. Veuillez reessayer.\n");
                }
            }
            printf("Statut (1. valide, 2. reporte, 3. annule, 4. traite): ");
            scanf("%s", list_res[count].statut);
            list_res[count].reference = ReferenceUnique();
            printf("Reservation ajoutee avec la reference %d.\n", list_res[count].reference);
            count++;
            } else {
                printf("La liste de reservations est pleine.\n");
            }
        }else if(R==2){
        int N, i;
        printf("Donner le nombre de reservations que vous voulez ajouter :\n");
        scanf("%d",&N);
        i=0;
        while(N>i){
            if(count < MAX_rdv){
            printf(" N%d: \n", i+1);
            printf("Nom: ");
            scanf(" %[^\n]", list_res[count].nom);
            printf("Prenom: ");
            scanf(" %[^\n]", list_res[count].prenom);
            printf("Numero de telephone: ");
            scanf("%s", list_res[count].telephone);
            printf("Age: ");
            scanf("%d", &list_res[count].age);
            while (1) {
                printf("La date (JJ/MM/AAAA) : ");
                scanf("%s", list_res[count].date);
                if (est_date_valide(list_res[count].date)) {
                    printf("Date validee\n");
                    break;
                } else {
                    printf("Date invalide. Veuillez réessayer.\n");
                }
            }
            printf("Statut (1. valide, 2. reporte, 3. annule, 4. traite): ");
            scanf("%s", list_res[count].statut);
            list_res[count].reference = ReferenceUnique();
            printf("Reservation ajoute avec la reference %d.\n", list_res[count].reference);
            count++;
            } else {
                printf("La liste de reservations est pleine.\n");
                }
            }
        }
    }

void recherche() {
    int choix, reference, found = 0;
    char nom[MAX_rdv], date[MAX_rdv];

    printf("\n======================= RECHERCHE =======================\n");
    printf("=     1- Recherche par reference unique                 =\n");
    printf("=     2- Recherche par nom                              =\n");
    printf("=     3- Recherche par date                             =\n");
    printf("=========================================================\n");
    printf("Choisissez une option: ");
    scanf("%d", &choix);
    getchar();

    switch (choix) {
        case 1:
            printf("Entrez la reference de la reservation : ");
            scanf("%d", &reference);
            for (int i = 0; i < count; i++) {
                if (list_res[i].reference == reference) {
                    printf("\nReservation trouve :\n");
                    printf("Nom: %s\n", list_res[i].nom);
                    printf("Prenom: %s\n", list_res[i].prenom);
                    printf("Telephone: %s\n", list_res[i].telephone);
                    printf("Age: %d\n", list_res[i].age);
                    printf("Statut: %s\n", list_res[i].statut);
                    printf("Reference: %d\n", list_res[i].reference);
                    printf("Date: %s\n", list_res[i].date);
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("Aucune reservation trouve avec la reference %d.\n", reference);
            }
            break;

        case 2:
            printf("Entrez le nom de la reservation : ");
            scanf(" %[^\n]", nom);
            for (int i = 0; i < count; i++) {
                if (strcmp(list_res[i].nom, nom) == 0) {
                    printf("\nReservation trouvee :\n");
                    printf("Nom: %s\n", list_res[i].nom);
                    printf("Prenom: %s\n", list_res[i].prenom);
                    printf("Telephone: %s\n", list_res[i].telephone);
                    printf("Age: %d\n", list_res[i].age);
                    printf("Statut: %s\n", list_res[i].statut);
                    printf("Reference: %d\n", list_res[i].reference);
                    printf("Date: %s\n", list_res[i].date);
                    found = 1;
                }
            }
            if (!found) {
                printf("Aucune reservation trouvee avec le nom %s.\n", nom);
            }
            break;

        case 3:
            printf("Entrez la date de la reservation (JJ/MM/AAAA) : ");
            scanf(" %[^\n]", date);
            for (int i = 0; i < count; i++) {
                if (strcmp(list_res[i].date, date) == 0) {
                    printf("\nReservation trouvee :\n");
                    printf("Nom: %s\n", list_res[i].nom);
                    printf("Prenom: %s\n", list_res[i].prenom);
                    printf("Telephone: %s\n", list_res[i].telephone);
                    printf("Age: %d\n", list_res[i].age);
                    printf("Statut: %s\n", list_res[i].statut);
                    printf("Reference: %d\n", list_res[i].reference);
                    printf("Date: %s\n", list_res[i].date);
                    found = 1;
                }
            }
            if (!found) {
                printf("Aucune reservation trouvee avec la date %s.\n", date);
            }
            break;

        default:
            printf("Choix invalide. Veuillez reessayer.\n");
            break;
    }
}

void modifier_rdv() {
    int reference, found = -1;

    printf("Entrez la reference de la reservation a modifier : ");
    scanf("%d", &reference);

    for (int i = 0; i < count; i++) {
        if (list_res[i].reference == reference) {
            found = i;
            break;
        }
    }

    if (found == -1) {
        printf("Aucune reservation trouvee avec la reference %d.\n", reference);
        return;
    }

    printf("Modifier les informations:\n");

    printf("Entrez le prenom: ");
    scanf(" %[^\n]", list_res[found].prenom);

    printf("Entrez le nom: ");
    scanf(" %[^\n]", list_res[found].nom);

    printf("Entrez le telephone: ");
    scanf("%s", list_res[found].telephone);

    printf("Entrez l'age: ");
    scanf("%d", &list_res[found].age);

    while (1) {
        printf("Entrez la date (JJ/MM/AAAA): ");
        scanf("%s", list_res[found].date);
        if (est_date_valide(list_res[found].date)) {
            printf("Date valide\n");
            break;
        } else {
            printf("Date invalide, veuillez ressayer.\n");
        }
    }

    printf("Entrez le statut (1 - valide, 2 - reporte, 3 - annule, 4 - traite): ");
    scanf("%s", list_res[found].statut);

    printf("Reservation modifiee avec succes !\n");
}


void supprimer_rdv() {
    int reference, found = -1;
        printf("Entrez la reference de la reservation a supprimer : ");
    scanf("%d", &reference);
        for (int i = 0; i < count; i++) {
        if (list_res[i].reference == reference) {
            found = i;
            break;
        }
    }
    if (found == -1) {
        printf("Aucune reservation trouvee avec la reference %d.\n", reference);
        return;
    }
    for (int i = found; i < count - 1; i++) {
        list_res[i] = list_res[i + 1];
    }
    count--;
    printf("Reservation avec la reference %d supprimee avec succes.\n", reference);
}


void afficher_rdv() {
    printf("\n\n");
    printf("\n====================================================\n");
    printf("|           LISTE DES RESERVATIONS (%d total)       |\n", count);
    printf("====================================================\n");

    for (int i = 0; i < count; i++) {
        printf("\n----------------------------------------------------\n");
        printf("| Reservation %d                                    |\n", i + 1);
        printf("----------------------------------------------------\n");
        printf("| Nom           : %s\n", list_res[i].nom);
        printf("| Prenom        : %s\n", list_res[i].prenom);
        printf("| Telephone     : %s\n", list_res[i].telephone);
        printf("| Age           : %d\n", list_res[i].age);
        printf("| Statut        : %s\n", list_res[i].statut);
        printf("| Reference     : %d\n", list_res[i].reference);
        printf("| Date          : %s\n", list_res[i].date);
        printf("====================================================\n");

    }
    printf("\n\n");

    if (count == 0) {
        printf("|              AUCUNE RESERVATION TROUVEE          |\n");
        printf("====================================================\n");
        printf("\n\n");
    }
}

int main() {
    int choix;
    do {
        MENU();
        scanf("%d", &choix);
        getchar();
        switch (choix) {
            case 1:
                ajouter_rdv();
                break;
            case 2:
                modifier_rdv();
                break;
            case 3:
                supprimer_rdv();
                break;
            case 4:
                afficher_rdv();
                break;
            case 5:
                recherche();
                break;
            case 6:
                printf("EXISTING ... .\n");
                break;
            default:
                printf("Choix invalide.\n");
        }
    } while (choix != 6);
    return 0;
}
