#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX 100

typedef struct {
    char nom[MAX];
    char num[MAX];
    char email[MAX];
}contact;
int count_numbre = 0;
contact list [MAX];

void menu(){
    printf("\n=== Système de Gestion de Contacts ===\n");
        printf("1. Ajouter un contact\n");
        printf("2. Modifier un contact\n");
        printf("3. Supprimer un contact\n");
        printf("4. Afficher tous les contact\n");
        printf("5. Rechercher un contact\n");
        printf("6. les statistique\n");
        printf("7. Quitter\n");
        printf("Choisissez une option : ");
        }

void ajouter() {
    int C;
    printf("1-Ajouter un contact :\n2-Ajouter multiple contact :\n");
    scanf("%d",&C);
    if(C==1){
        if(count_numbre < MAX){
        printf("Nom: ");
        scanf("%s", list[count_numbre].nom);
        printf("Numéro de téléphone: ");
        scanf("%s", list[count_numbre].num);
        printf("Adresse e-mail: ");
        scanf("%s", list[count_numbre].email);
        count_numbre++;
        }else{
        printf("Carnet de contacts plein.\n");
        }
    }else if(C==2){
        int N, i=0;
        printf("Donner le nombre de contact que vous voulez: ");
        scanf("%d",&N);
        while(N>i){
            if(count_numbre < MAX){
                printf("CONTACT N%d\n",i+1);
                printf("Nom: ");
                scanf("%s", list[count_numbre].nom);
                printf("Numéro de téléphone: ");
                scanf("%s", list[count_numbre].num);
                printf("Adresse e-mail: ");
                scanf("%s", list[count_numbre].email);
                count_numbre++;
            }else{
                printf("Carnet de contacts plein.\n");
            }
            i++;
        }
    }else{
        printf("Error !! Choix invalid");
    }
}

int main() {
    int choix;
    do {
        menu();
        scanf("%d",&choix);
        switch (choix) {
            case 1:
                ajouter();
                break;
            case 2:
                printf("Au revoir!\n");
                break;
            default:
                printf("Option invalide.\n");
        }
    } while (choix != 2);
    return 0;
}
