#include <stdio.h>

int main(void)
{
    float C , F;
    printf("Enter temperature in Celcius :");
    scanf("%f" , &C);

    F = ((9.0/5.0)*C) + 32 ;
    printf("%.2f Ferenheit" , F);
    return 0;
}
