#include <stdio.h>
#include <stdlib.h>

int main()
{
    float T_Celsius;
    printf("veuillez entre la temperature en Celsius = ");
    scanf("%f",&T_Celsius);
    printf("la temperature en Kelvin = %.2f",T_Celsius+273.15);
    return 0;
}
