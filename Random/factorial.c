#include<stdio.h>

long int sum(long int);

int main(void)
{
    long int n;
    printf("Enter : ");
    scanf("%ld", &n);
    printf("factorial = %ld\n", sum(n));
}

long int sum(long int d)
{
    if(d == 1 || d == 0)
        return 1;
    else
        return d * sum(d - 1);
}
