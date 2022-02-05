#include<stdio.h>
int main(void)
{
    int p, b, i, output = 1;
    printf("Enter the base number : ");
    scanf("%d", &b);

    printf("Enter the power number : ");
    scanf("%d", &p);

    for(i = 1; i <= p; i++)
    {
        output = output * b;
    }
    printf("%d ^ %d = %d", b, p, output);
    return 0;
}
