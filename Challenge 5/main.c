#include <stdio.h>
#include <stdlib.h>

int main()
{
    float C;
    printf("veuillez entre la temperature en Celsius = ");
    scanf("%f",&C);
    if (C < 0)
        printf("l'etat de l'eau a cette temperature solide ");
    else if (0 <= C && C < 100)
        printf("l'etat de l'eau a cette temperature Liquide ");
    else if (C >= 100)
        printf("l'etat de l'eau a cette temperature Gaz");
    else
        printf("error");
    return 0;
}
