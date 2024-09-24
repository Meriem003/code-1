#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double X, Y, Z, moyenne_geometrique;
    printf("veuillez entre la valeur de X , Y , Z: ");
    scanf("%lf%lf%lf",&X,&Y,&Z);
    moyenne_geometrique=pow((X * Y * Z),(1.0/3.0));
    printf("la moyenne geometrique de trois nombres %.2lf",moyenne_geometrique);
    return 0;
}
