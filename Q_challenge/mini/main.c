#include <stdio.h>
#include <stdio.h>
#include <string.h>
#define MAX 100

char titre[MAX][MAX];
char auteur[MAX][MAX];
float prix[MAX];
int quantite[MAX];
int count = 0;

void add_book() {
    if (count >= MAX) {
        printf("impossible d'ajouter un nouveau livre.\n");
        return;
    }

    printf("Entrez le titre du livre : ");
    scanf("%s", titre[count]);
    printf("Entrez l'auteur du livre : ");
    scanf("%s", auteur[count]);
    printf("Entrez le prix du livre : ");
    scanf("%f", &prix[count]);
    printf("Entrez la quantite en stock : ");
    scanf("%d", &quantite[count]);

    count++;
    printf("Livre ajoute avec succes !\n");
}


void display_books() {
    if (count == 0) {
        printf("Aucun livre disponible.\n");
        return;
    }

    printf("\nLivres disponibles :\n");
    for (int i = 0; i < count; i++) {
    printf("============LIVRE==================\n");
        printf("Titre : %s\n",titre[i]);
        printf("Auteur : %s\n",auteur[i]);
        printf("Prix : %.2fDH\n",prix[i]);
        printf("Quantite : %d\n",quantite[i]);
    }
}


void search_book() {
    char search_title[MAX];
    printf("Entrez le titre du livre à rechercher : ");
    scanf(" %s[^\n]", search_title);

    for (int i = 0; i < count; i++) {
        if (strcmp(titre[i], search_title) == 0) {
            printf("Livre trouve : Titre : %s, Auteur : %s, Prix : %.2f, Quantite : %d\n",
                   titre[i], auteur[i], prix[i], quantite[i]);
            return;
        }
    }
    printf("Livre non trouve.\n");
}


void update_quantity() {
    char title[MAX];
    printf("Entrez le titre du livre dont vous souhaitez mettre a jour la quantité : ");
    scanf(" %s[^\n]", titre);

    for (int i = 0; i < count; i++) {
        if (strcmp(titre[i], title) == 0) {
            int new_quantity;
            printf("Entrez la nouvelle quantite : ");
            scanf("%d", &new_quantity);
            quantite[i] = new_quantity;
            printf("Quantite mise à jour avec succes !\n");
            return;
        }
    }
    printf("Livre non trouve.\n");
}


void delete_book() {
    char title[MAX];
    printf("Entrez le titre du livre a supprimer : ");
    scanf(" %s[^\n]", title);

    for (int i = 0; i < count; i++) {
        if (strcmp(titre[i], title) == 0) {
            for (int j = i; j < count - 1; j++) {
                strcpy(titre[j], titre[j + 1]);
                strcpy(auteur[j], auteur[j + 1]);
                prix[j] = prix[j + 1];
                quantite[j] = quantite[j + 1];
            }
            count--;
            printf("Livre supprime avec succès !\n");
            return;
        }
    }
    printf("Livre non trouvé.\n");
}


void total_books() {
    int total = 0;
    for (int i = 0; i < count; i++) {
        total += quantite[i];
    }
    printf("Nombre total de livres en stock : %d\n", total);
}


int main() {
    int choice;

    do {
        printf("\n=== Gestion de Stock de Librairie ===\n");
        printf("1. Ajouter un livre\n");
        printf("2. Afficher tous les livres\n");
        printf("3. Rechercher un livre par titre\n");
        printf("4. Mettre a jour la quantite d'un livre\n");
        printf("5. Supprimer un livre\n");
        printf("6. Afficher le nombre total de livres en stock\n");
        printf("7. Quitter\n");
        printf("Choisissez une option : ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: add_book();
            break;
            case 2: display_books();
            break;
            case 3: search_book();
            break;
            case 4: update_quantity();
            break;
            case 5: delete_book();
            break;
            case 6: total_books();
            break;
            case 7: printf("Au revoir !\n");
            break;
            default: printf("Choix invalide. Veuillez reessayer.\n");
            break;
        }
    } while (choice != 7);

    return 0;
}
