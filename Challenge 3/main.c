#include <stdio.h>
#include <stdlib.h>

int main()
{
    float D_kilometres;
    printf("veuillez entre la distance kilometres = ");
    scanf("%f",&D_kilometres);
    printf("la distance en yards = %.2f",D_kilometres*1093.61);
    return 0;
}
