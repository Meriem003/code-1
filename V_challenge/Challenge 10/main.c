#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    const float pi = 3.14;
    float rayon, volume;
    printf("veuillez entre la valeur de rayon : ");
    scanf("%f",&rayon);
    volume = ((4/3)*pi*(pow((rayon),3)));
    printf("le volume d'une sphere %.2f",volume);
    return 0;
}
