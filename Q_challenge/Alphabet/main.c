#include <stdio.h>
#include <stdlib.h>

int main()
{
    int alphabet;
    printf("veuillez entre l'alphabet : ");
    scanf("%d",&alphabet);
    if(alphabet>= 65 && alphabet<= 90){ 
        printf(" La lettre majuscule");
    }else{
        printf("la lettres minuscule");
    }
return 0;
}