#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_CONTACTS 100

typedef struct {
    char nom[50];
    char telephone[15];
    char email[50];
} Contact;

Contact carnet[MAX_CONTACTS];
int nombreContacts = 0;

void OFFMENU() {
    printf("1. Ajouter un contact\n2. Modifier un contact\n3. Supprimer un contact\n4. Afficher tous les contacts\n5. Rechercher un contact\n6. Afficher les statistiques\n7. Quitter\nChoisissez une option: \n");
}

void toLowerCase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

void TCC() {
    Contact temp;
    for (int i = 0; i < nombreContacts - 1; i++) {
        for (int j = i + 1; j < nombreContacts; j++) {
            if (strcasecmp(carnet[i].nom, carnet[j].nom) > 0) {
                temp = carnet[i];
                carnet[i] = carnet[j];
                carnet[j] = temp;
            }
        }
    }
}

void TCD() {
    Contact temp;
    for (int i = 0; i < nombreContacts - 1; i++) {
        for (int j = i + 1; j < nombreContacts; j++) {
            if (strcasecmp(carnet[i].nom, carnet[j].nom) < 0) {
                temp = carnet[i];
                carnet[i] = carnet[j];
                carnet[j] = temp;
            }
        }
    }
}

void ajouterContact() {
    int C;
    printf("1-Ajouter un contact :\n2-Ajouter multiple contact :\n");
    scanf("%d", &C);
    if (C == 1) {
        if (nombreContacts < MAX_CONTACTS) {
            printf("Nom: ");
            scanf(" %[^\n]", carnet[nombreContacts].nom);
            toLowerCase(carnet[nombreContacts].nom);
            printf("Numéro de téléphone: ");
            scanf("%s", carnet[nombreContacts].telephone);
            toLowerCase(carnet[nombreContacts].telephone);
            printf("Adresse e-mail: ");
            scanf("%s", carnet[nombreContacts].email);
            toLowerCase(carnet[nombreContacts].email);
            nombreContacts++;
        } else {
            printf("Carnet de contacts plein.\n");
        }
    } else if (C == 2) {
        int N, i = 0;
        printf("Donner le nombre de contact que vous voulez :\n");
        scanf("%d", &N);
        while (i < N) {
            if (nombreContacts < MAX_CONTACTS) {
                printf("CONTACT N°%d: \n", i + 1);
                printf("Nom: ");
                scanf(" %[^\n]", carnet[nombreContacts].nom);
                toLowerCase(carnet[nombreContacts].nom);
                printf("Numéro de téléphone: ");
                scanf("%s", carnet[nombreContacts].telephone);
                toLowerCase(carnet[nombreContacts].telephone);
                printf("Adresse e-mail: ");
                scanf("%s", carnet[nombreContacts].email);
                toLowerCase(carnet[nombreContacts].email);
                nombreContacts++;
            } else {
                printf("Carnet de contacts plein.\n");
            }
            i++;
        }
    } else {
        printf("Erreur !! Choix invalide\n");
    }
}

void rechercherContact() {
    if (nombreContacts == 0) {
        printf("Aucun contact trouvé, le répertoire est vide.\n");
    } else {
        char nom[50];
        printf("Entrez le nom du contact à rechercher: ");
        scanf("%s", nom);
        for (int i = 0; i < nombreContacts; i++) {
            if (strcmp(carnet[i].nom, nom) == 0) {
                printf("Nom: %s\n", carnet[i].nom);
                printf("Numéro de téléphone: %s\n", carnet[i].telephone);
                printf("Adresse e-mail: %s\n", carnet[i].email);
                return;
            }
        }
        printf("Contact non trouvé.\n");
    }
}

void modifierContact() {
    int CONF;
    char nom[50];
    printf("Entrez le nom du contact à modifier: ");
    scanf("%s", nom);
    int index = -1;
    for (int i = 0; i < nombreContacts; i++) {
        if (strcmp(carnet[i].nom, nom) == 0) {
            index = i;
            break;
        }
    }
    if (index != -1) {
        printf("Tapez 1 pour confirmer ou 0 pour annuler :\n");
        scanf("%d", &CONF);
        if (CONF == 1) {
            printf("Nouveau nom: ");
            scanf("%s", carnet[index].nom);
            printf("Nouveau numéro de téléphone: ");
            scanf("%s", carnet[index].telephone);
            printf("Nouvelle adresse e-mail: ");
            scanf("%s", carnet[index].email);
            printf("Contact modifié avec succès.\n");
        } else {
            printf("Modification annulée.\n");
        }
    } else {
        printf("Contact non trouvé.\n");
    }
}

void supprimerContact() {
    char nom[50];
    int SUP;
    printf("Entrez le nom du contact à supprimer: ");
    scanf("%s", nom);
    int index = -1;
    for (int i = 0; i < nombreContacts; i++) {
        if (strcmp(carnet[i].nom, nom) == 0) {
            index = i;
            break;
        }
    }
    if (index != -1) {
        printf("Tapez 1 pour confirmer la suppression ou 0 pour annuler:\n");
        scanf("%d", &SUP);
        if (SUP == 1) {
            for (int j = index; j < nombreContacts - 1; j++) {
                carnet[j] = carnet[j + 1];
            }
            nombreContacts--;
            printf("Contact supprimé.\n");
        } else {
            printf("Suppression annulée.\n");
        }
    } else {
        printf("Contact non trouvé.\n");
    }
}

void afficherContacts() {
    int CH;
    if (nombreContacts == 0) {
        printf("Aucun contact trouvé, le répertoire est vide.\n");
    } else {
        printf("1.Affichage Simple\n2.Affichage croissant\n3.Affichage decroissant\nChoisissez une option:\n");
        scanf("%d",&CH);
        switch(CH){
            case 1 :
            for (int i = 0; i < nombreContacts; i++) {
            printf("Nom: %s\t| ", carnet[i].nom);
            printf("Numéro de téléphone: %s\t| ", carnet[i].telephone);
            printf("Adresse e-mail: %s\n", carnet[i].email);
            }
            break;
            case 2:
                TCC();
                for (int i = 0; i < nombreContacts; i++) {
                    printf("Nom: %s\t| ", carnet[i].nom);
                    printf("Numéro de téléphone: %s\t| ", carnet[i].telephone);
                    printf("Adresse e-mail: %s\n", carnet[i].email);
                }
                break;
            case 3:
                TCD();
                for (int i = 0; i < nombreContacts; i++) {
                    printf("Nom: %s\t| ", carnet[i].nom);
                    printf("Numéro de téléphone: %s\t| ", carnet[i].telephone);
                    printf("Adresse e-mail: %s\n", carnet[i].email);
                }
                break;

            default : printf("Choix invalide.\n");
        }

    }
}

int main() {
    int choix;
    do {
        OFFMENU();
        scanf("%d", &choix);
        switch (choix) {
            case 1:
                ajouterContact();
                break;
            case 2:
                modifierContact();
                break;
            case 3:
                supprimerContact();
                break;
            case 4:
                afficherContacts();
                break;
            case 5:
                rechercherContact();
                break;
            case 6:
                rechercherContact();
                break;
            case 7:
                printf("Au revoir!\n");
            break;
            default:
                printf("Choix invalide.\n");
        }
    } while (choix != 7);
    return 0;
}


















void MODSUPRES() {
    void SUPRES(int reference) {
    int index = RECHUID(reference);
    if (index == -1) {
        printf("Réservation non trouvée.\n");
        return;
    }
    for (int i = index; i < COUNT - 1; i++) {
        RESER[i] = RESER[i + 1];
    }
    COUNT--;
    printf("Réservation supprimée avec succès !\n");
}
    void MODRES(int reference) {
    int index = RECHUID(reference);
    if (index == -1) {
        printf("Réservation non trouvée.\n");
        return;
    }
    printf("Modifier les informations:\n");
    printf("Entrez le prénom: ");
    scanf("%s", RESER[index].firstName);
    printf("Entrez le nom: ");
    scanf("%s", RESER[index].lastName);

    printf("Entrez le téléphone: ");
    scanf("%s", RESER[index].phone);

    printf("Entrez l'âge: ");
    scanf("%d", &RESER[index].age);

    printf("Entrez la date (YYYY-MM-DD): ");
    scanf("%s", RESER[index].date);

    printf("Réservation modifiée avec succès !\n");
}
    int C, reference;
    printf("1. Modifier une réservation\n2. Supprimer une réservation\n0. Retour au menu principal\n");
    printf("Entrez votre choix: ");
    scanf("%d", &C);
    if (C == 0) return;
    printf("Entrez la référence de la réservation: ");
    scanf("%d", &reference);
    switch (C) {
        case 1:
            MODRES(reference);
            break;
        case 2:
            SUPRES(reference);
            break;
        default:
            printf("Choix invalide.\n");
            break;
    }
}
