#include<stdio.h>
int main(void)
{
    int n, x, i;
    printf("Enter the n term :");
    scanf("%d", &n);
    x = 0;
    printf("\nThe first odd n natural number is :\n");
    for(i = 1; i <= (n * 2); i = i + 2)
    {
        x = x + i;
        printf("%d ",i);
    }
    printf("The sum is : %d", x);
    return 0;
}
