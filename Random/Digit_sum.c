#include<stdio.h>

int sum(int);

int main(void)
{
    int n;
    printf("Enter : ");
    scanf("%d", &n);
    printf("sum = %d\n", sum(n));
}

int sum(int d)
{
    if(d > 0)
        return d % 10 + sum(d / 10);
}
