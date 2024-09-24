#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x1, x2, y1, y2, z1, z2, Distance;
    printf("veuillez entre la valeur de x1 et x2");
    scanf("%f %f",&x1,&x2);
    printf("veuillez entre la valeur de y1 et y2");
    scanf("%f %f",&y1,&y2);
    printf("veuillez entre la valeur de z1 et z2");
    scanf("%f %f",&z1,&z2);
    Distance = sqrt(pow((x2-x1),2) + pow((y2-y1),2) + pow((z2-z1),2));
    printf("la distance entre deux points donnés dans un espace 3D = %.2f",Distance);
    return 0;
}
