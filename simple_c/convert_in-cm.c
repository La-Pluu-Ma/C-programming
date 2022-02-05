#include <stdio.h>
int main(void)
{
    float cm , in;
    printf("Enter your height in inches : ");
    scanf("%f", &in);

    cm = (in * 2.54);
    printf("%f centimeter\n", cm);
    return 0;
}
