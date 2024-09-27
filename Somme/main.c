#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int N, i;
    int S=0;
    printf("veuillez entre la valeur de N ");
    scanf("%d",&N);
    for (i=1;i<=N;i++){
        S=S+i;
    }
    printf("la somme des %d premiers nombres : %d",N,S);
return 0;
}