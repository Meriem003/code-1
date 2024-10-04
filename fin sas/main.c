#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define MAX_rdv 100

typedef struct{
    char nom[MAX_rdv];
    char prenom[MAX_rdv];
    char telephone[MAX_rdv];
    int  age[MAX_rdv];
    char statut[MAX_rdv];
    int reference;
    char date[MAX_rdv];
}rdv;
int count=0;
rdv list_res[MAX_rdv];
int ReferenceUnique() {
    return count + 1;
}
void ajouter_rdv(){
    int R;
    printf("1-Ajouter une reservations :\n2-Ajouter plusieurs reservations :\n");
    scanf("%d",&R);
    if(R==1){
        if(count < MAX_rdv){
            printf("Nom: ");
            scanf(" %[^\n]",&list_res[count].nom);
            printf("Prenom: ");
            scanf(" %[^\n]",&list_res[count].prenom);
            printf("Numéro de telephone: ");
            scanf("%s",list_res[count].telephone);
            printf("Age: ");
            scanf("%d",&list_res[count].age);
            printf("statut\n1=valide\n2=reporte\n3=annule\n4=traite\n ");
            scanf("%s",list_res[count].statut);
            list_res[count].reference = ReferenceUnique();
            printf("Reservation ajoutee avec la reference %d.\n",list_res[count].reference);
            count++;
        }else{
            printf("La list de reservations plein.\n");}

    }else if(R==2){
        int N, i;
        printf("Donner le nombre de reservations que vous voulez ajouter :\n");
        scanf("%d",&N);
        i=0;
        while(N>i){
            if(count < MAX_rdv){
            printf(" N%d: \n", i+1);
            printf("Nom: ");
            scanf(" %[^\n]",&list_res[count].nom);
            printf("Prenom: ");
            scanf(" %[^\n]",&list_res[count].prenom);
            printf("Numero de telephone: ");
            scanf("%s",list_res[count].telephone);
            printf("Age: ");
            scanf("%d",&list_res[count].age);
            printf("statut\n1=valide\n2=reporte\n3=annule\n4=traite: ");
            scanf("%s",list_res[count].statut);
            list_res[count].reference = ReferenceUnique();
            printf("Reservation ajoutee avec la reference %d.\n",list_res[count].reference);
            count++;
            }else{
            printf("La list de reservations plein.\n");
            }
        i++;
    }
        }else{
            printf("Erreur !! Choix invalide\n");
        }
}
void MENU(){
        printf("\nMenu Principal:\n");
        printf("1. Ajouter une reservation\n");
        printf("2. Modifier une reservation\n");
        printf("3. Supprimer une reservation\n");
        printf("4. Afficher les details d'une reservation\n");
        printf("5. Trier les reservations\n");
        printf("6. Rechercher une reservation\n");
        printf("7. Afficher les statistiques\n");
        printf("8. Quitter\n");
        printf("Choisissez une option: ");
}
int RECHUID(int reference) {
    int UID = reference;
    printf("Entrer le refernce de reservation: \n");
    scanf("%d",&UID);
    for (int i = 0; i < count; i++) {
        if (list_res[i].reference == UID) {
            printf("Référence: %d\nNom: %s\nTéléphone: %s\nÂge: %d\nStatut: %s\nDate: %s\n",list_res[i].reference, list_res[i].nom, list_res[i].prenom,list_res[i].telephone, list_res[i].age, list_res[i].statut, list_res[i].date);
            return i;
        }
    }
    return -1;
}
void modifier_rdv(int reference){
    int index = RECHUID(reference);
    if (index == -1) {
        printf("Réservation non trouvee.\n");
        return;
    }
    printf("Modifier les informations:\n");
    printf("Entrez le prenom: ");
    scanf("%s",list_res[index].nom);
    printf("Entrez le nom: ");
    scanf("%s",list_res[index].prenom);
    printf("Entrez le telephone: ");
    scanf("%s",list_res[index].telephone);
    printf("Entrez l'age: ");
    scanf("%d",list_res[index].age);
    printf("Entrez la date (YYYY-MM-DD): ");
    scanf("%s",list_res[index].date);
    printf("Entrez statut: ");
    scanf("%s",list_res[index].statut);
    printf("Reservation modifiee avec succes !\n");
}
void supprimer_rdv(int ref){
    for(int i = 0; i < count; i++) {
        if(list_res[i].reference == ref) {
            for(int j = i; j < count - 1; j++) {
                list_res[j] = list_res[j+1];
            }
            count--;
            printf("Réservation supprimée.\n");
            return;
        }
    }
    printf("Référence non trouvée.\n");
}
void afficher_rdv(){
    int C, i;
    if (count == 0) {
        printf("Aucun reservation trouve.\n");
    } else {
        printf("1.Affichage Simple\n2.Affichage par nom \n3.Affichage par statut\nChoisissez une option:\n");
        scanf("%d",&C);
        switch(C){
            case 1 :
            for (i = 0; i < count; i++) {
            printf("Nom: %s\n", list_res[i].nom);
            printf("Prenom: %s\n", list_res[i].prenom);
            printf("Numero de telephone: %s\n", list_res[i].telephone);
            printf("age: %d\n", list_res[i].age);
            printf("statut (1=valide 2=reporte 3=annule 4=traite): %s\n", list_res[i].statut);
            printf("la reference unique: %d\n",list_res[i].reference);
            }
            default : printf("Choix invalide.\n");
        }
    }
}
void tri_rdv(){

}
void rechercherContact(){

}
void Statis_rdv(){

}
int main() {
    int choix, index,reference;
    do {
        MENU();
        scanf("%d", &choix);
        switch(choix) {
            case 1:
                ajouter_rdv();
                break;
            case 2:
                index = RECHUID(reference);
                break;
            case 3:
                printf("hhhhhhhhhhhhh");
                break;
            case 4:
                printf("hhhhhhhhhhhhh");
                break;
            case 5:
                printf("hhhhhhhhhhhhh");
                break;
            case 6:
                printf("hhhhhhhhhhhhh");
                break;
            case 7:
                printf("hhhhhhhhhhhhh");
                break;
            case 8:
                printf("Au revoir!\n");
            break;
            default:
                printf("Choix invalide.\n");
        }
    } while (choix != 8);
    return 0;
}
