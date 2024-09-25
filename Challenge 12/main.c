#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,a,z,b,c,d,y;
    printf("veuillez entre les quatre chiffres : ");
    scanf("%d",&x);
    a=x/1000;
    z=x%1000;
    b=z/100;
    y=z%100;
    c=y/10;
    d=y%10;
    printf("inverse = %d%d%d%d",d,c,b,a);
    return 0;
}