#include<stdio.h>
int main(void)
{
    int i, a, sum;
    sum = 0;
    a = 10;
    printf("The first 10 natural number is :\n");
    for(i = 1; i <= a; i++)
    {
        sum = sum + i;
        printf("%d ", i);
    }
    printf("\nThe sum is : %d", sum);
    return 0;
}
