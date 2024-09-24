#include <stdio.h>
#include <stdlib.h>

int main()
{
    float V_kilometres;
    printf("veuillez entre la vitasse en kilometres = ");
    scanf("%f",&V_kilometres);
    printf("la transforme en metres par seconde = %.2f",V_kilometres*0.27778);
    return 0;
}
