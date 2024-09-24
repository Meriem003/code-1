#include <stdio.h>
#include <stdlib.h>

int main()
{
    double X, Y, Z, moyenne;
    printf("veuillez entre la valeur de X : ");
    scanf("%lf",&Z);
    printf("veuillez entre la valeur de Y : ");
    scanf("%lf",&Y);
    printf("veuillez entre la valeur de Z : ");
    scanf("%lf",&Z);
    moyenne = (X*2+Y*3+Z*5)/10;
    printf("la moyenne ponderee de trois nombres %.2lf",moyenne);
    return 0;
}
