#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i;
    printf("veuillez entre la valeur de N ");
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        printf("%d  ",i*2);
    }
    return 0;
 }