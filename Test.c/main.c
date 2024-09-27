#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i;
    printf("veuillez entre la valeur de N ");
    scanf("%d",&N);
    for (i=1;i<=10;i++){
        printf("%d*%d=%d\n",N,i,i*N);
    }
return 0;
}