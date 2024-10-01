#include <stdio.h>
#include <stdlib.h>

void somme(){
    int x, y;
    printf("veuillez entre la valeur de x = ");
    scanf("%d",&x);
    printf("veuillez entre la valeur de y = "); 
    scanf("%d",&y);
    printf("la somme de X+Y= %d",x+y);
}

int main(){
    somme();
    return 0;
}