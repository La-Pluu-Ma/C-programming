#include <stdio.h>
int main(void)
{
     float C , F;
    printf("Enter temperature in Ferenheit :");
    scanf("%f" , &F);

    C = (F-32)*(5.0/9.0);
    printf("%.2f Celcius" , C);
    return 0;
}
