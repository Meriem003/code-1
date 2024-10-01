#include <stdio.h>
#include <stdlib.h>

void Multiplication(){
    int x, y;
    printf("veuillez entre la valeur de x = ");
    scanf("%d",&x);
    printf("veuillez entre la valeur de y = "); 
    scanf("%d",&y);
    printf("la multiplication de X*Y= %d",x*y);
}

int main(){
    Multiplication();
    return 0;
}