#include <stdlib.h>
#include <stdio.h>

int main()
{
    int N, i;
    printf("veuillez entre la valeur de N : ");
    scanf("%d",&N);
    for(i=10;i>=1;i--){
        printf("%d*%d=%d\n",N,i,N*i);
    }
    return 0;
}