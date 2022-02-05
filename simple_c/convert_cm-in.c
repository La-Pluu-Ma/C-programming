#include <stdio.h>
int main(void)
{
    float cm , in;
    printf("Enter your height in centimeter : ");
    scanf("%f", &cm);

    in = (cm / 2.54);
    printf("%f inches", in);

    return 0;
}
