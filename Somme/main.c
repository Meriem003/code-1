#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int N;
    float F, i;
    printf("veuillez entre la valeur de N : ");
    scanf("%d",&N);
    F = 0;
        for (i=1;i<=N;i++){
            F=F+i;
        }
        printf(" la somme = %.2f",F); 
return 0;
}