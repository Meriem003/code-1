#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
    int x, y, z;
    int D, x0, x1, x2;
    printf("veuillez entre la valeur de x y et z");
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    D=(pow(y,2))-(4*x*z);
    if (D<0){
        printf("l'équation n'admet pas de solution");
    }else if(D==0){
        x0=(-y)/2*x;
        printf("le seul solution = %d",x0);
    }else{
        x1=((-y)-sqrt(D)/2*x);
        x1=((-y)+sqrt(D)/2*x);
        printf("les deux solution %d , %d",x1,x2);
    } 
return 0;
}