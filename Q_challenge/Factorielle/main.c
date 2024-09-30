#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i;
    int R=1;
    printf("veuillez entre la valeur de N ");
    scanf("%d",&N);
    if (N>0){
        for(i=1;i<=N;i++){
        R=R*i;
        }
        printf("%d",R);
     }
return 0;
}