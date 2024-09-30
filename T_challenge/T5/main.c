#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i;
    printf("veuillez entre la valeur de N : ");
    scanf("%d",&N);
    int T[N];
    for(i=0;i<N;i++){
        printf("T[%d]= ",i);
        scanf("%d",&T[i]);
    }
    int max = T[0];
    for(i=0;i<N;i++){
        if(max<T[i]){
            max = T[i];
        }
    }
    printf("le minimum = %d",max);
    return 0;
}
