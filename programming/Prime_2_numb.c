#include<stdio.h>
int main(void)
{
    int a, b,d = 0, count = 0;
    printf("Enter two number : ");
    scanf("%d %d", &a, &b);
    if(a > b)
    {
        int c;
        c = a;
        a = b;
        b = c;
    }
    for(int i = a; i <= b; i++)
    {
        for(int j = 1; j <= i ; j++)
        {
            if(i % j == 0)
            {
                count++;
            }
        }
        if(count == 2)
        {
            printf("%d ",i);
            d++;
        }
        count = 0;
    }
    printf("\nNumber of prime is %d",d);
    return 0;
}
