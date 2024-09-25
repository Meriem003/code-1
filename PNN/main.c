#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    printf("veuillez entre la valeur de x : ");
    scanf("%f",&x);
    if (x>0){
        printf("le nombre donné est positif");
    }else if(x<0){
        printf("le nombre donné est negatif");
    }else{
        printf("le nombre donné est nul");
    }
return 0;
}