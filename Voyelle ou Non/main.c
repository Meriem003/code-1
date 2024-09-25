#include <stdio.h>
#include <stdlib.h>

int main() 
{
    char caractere;
    printf("veuillez entre caractere");
    scanf("%d",&caractere);
    switch(caractere)
    {
    case 'a' :printf("caractère saisi par l'utilisateur est une voyelle");
        break;
    case 'e' :printf("caractère saisi par l'utilisateur est une voyelle");
        break;
    case 'i' :printf("caractère saisi par l'utilisateur est une voyelle");
        break;
    case 'o' :printf("caractère saisi par l'utilisateur est une voyelle");
        break;
    case 'u' :printf("caractère saisi par l'utilisateur est une voyelle");
        break;
    case 'A' :printf("caractère saisi par l'utilisateur est une voyelle");
        break;
    case 'E' :printf("caractère saisi par l'utilisateur est une voyelle");
        break;
    case 'I' :printf("caractère saisi par l'utilisateur est une voyelle");
        break;
    case 'O' :printf("caractère saisi par l'utilisateur est une voyelle");
        break;
    case 'U' :printf("caractère saisi par l'utilisateur est une voyelle");
        break;
    default:printf(" caractère saisi par l'utilisateur est consonne ");
        break;
    }
return 0;
}