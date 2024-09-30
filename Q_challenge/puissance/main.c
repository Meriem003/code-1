#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b, p, r= 1;

    printf("Donner un base : ");
    scanf("%d",&b);

    printf("Donner un puissance : ");
    scanf("%d",&p);

    for(int i = 1; i <= p;i++){
        r =r*b;
    }
    printf("result=%d",r);
    return 0;
}