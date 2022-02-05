#include<stdio.h>

int sum(int);

int main(void)
{
    int n, su;
    printf("Enter : ");
    scanf("%d", &n);
    su = sum(n);
    printf("sum = %d\n", su);
}

int sum(int d)
{
    if(d == 1)
        return d;
    else
        return d + sum(d - 1);
}
