#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y;
    printf("veuillez entre la valeur de x : ");
    scanf("%f",&x);
    printf("veuillez entre la valeur de y : ");
    scanf("%f",&y);
    printf("X+Y= %.2f\n",x+y);
    printf("X-Y= %.2f\n",x-y);
    printf("X*Y= %.2f\n",x*y);
    if(y==0){
        printf("error");
    }else{
        printf("X/Y= %.2f",x/y);
    }
return 0;
}