#include<stdio.h>

int pow(int, int);

int main(void)
{
    int base, power;
    printf("Enter base : ");
    scanf("%d", &base);
    printf("Enter power : ");
    scanf("%d", &power);
    printf("sum = %d\n", pow(base, power));
}

int pow(int base,int power)
{
    if(power == 0)
        return 1;
    else
        return base * pow(base, power - 1);
}
