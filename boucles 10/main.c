#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, S, i;
    printf("veuillez entre la valeur de N : ");
    scanf("%d",&N);
    S=0;
    for(i=1;i<=N;i++){
        S=S+i;
    }
printf("la Somme des N Entiers = %d",S);
return 0;
}