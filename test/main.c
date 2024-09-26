#include <stdlib.h>
#include <stdio.h>

int main()
{
    int x, i;
    printf("veuillez entre la valeur de X : ");
    scanf("%d",&x);
    for(i=x+1;i<=x+10;i++){
        printf("%d  ",i);
    }
}