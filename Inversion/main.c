#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i;
    int nv=0;
    printf("veuillez entre la valeur de N ");
    scanf("%d",&N);
    while (N!=0)
    {
        nv=nv*10;
        nv=nv+(N%10);
        N /= 10;
    }
    printf("%d",nv);
}