#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X, Y;
    printf("veuillez entre la valeur de X : ");
    scanf("%d",&X);
    printf("veuillez entre la valeur de Y : ");
    scanf("%d",&Y);
    printf("X+Y = %d\n",X+Y);
    printf("X-Y = %d\n",X-Y);
    printf("X*Y = %d\n",X*Y);
    if (X!=0)
        printf("X/Y = %d",X/Y);
    else
        printf("error");
    return 0;
}
