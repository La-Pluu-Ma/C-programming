#include<stdio.h>
#define LIMIT 100
int main(void)
{
    int size;
    long int Fibo[LIMIT];
    printf("Enter the range of series : ");
    scanf("%d",&size);
    Fibo[0] = 0;
    Fibo[1] = 1;
    for(int i = 2; i < size; i++)
    {
        Fibo[i] = Fibo[i - 1] + Fibo[i - 2];
    }
    printf("The first %d of Fibonacci Series are ",size);
    for(int i = 0; i <= size; i++)
    {
        printf("%ld ", Fibo[i]);
    }
    return 0;
}
