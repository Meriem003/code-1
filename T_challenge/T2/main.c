#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i;
    printf("veuillez entre la valeur N : ");
    scanf("%d",&N);

    int T[N];
    for(i=0;i<N;i++){
        printf("entre la valeur de T[%d]= ",i);
        scanf("%d",&T[i]);
    }
    for(i=0;i<N;i++){
        printf("T[%d]=%d\n",i,T[i]);
    }
    return 0;
}
