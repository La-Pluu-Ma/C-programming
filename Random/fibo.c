#include<stdio.h>

int sum(int);

int main(void)
{
    int n, su;
    printf("Enter nth term : ");
    scanf("%d", &n);
    su = sum(n);
    printf("nth term fibo number = %d\n", su);
}

int sum(int d)
{
    if(d == 1)
        return 0;
    else if( d == 2)
        return 1;
    else
        return sum(d - 1) + sum(d - 2);
}
