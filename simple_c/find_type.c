#include<stdio.h>
int main(void)
{
    long int a=122322;
    long long int b=1233425352;
    double c=12435266;
    long double d=48598347452789;

    printf("a = %li\n" , a);
    printf("b = %lli\n", b);
    printf("c = %lf\n", c);
    printf("d = %Lf\n", d);
    return 0;
}
