#include<stdio.h>
int main(void)
{
    int a , b;
    printf("Enter two number separated by space : ");
    scanf("%d %d", &a , &b);

    for(int i = 1; i <= b; i++)
    {
        for(int j = 1; j <= a; j++)
        {
            if(a * i == b * j)
            {
                printf("LCM(%d,%d) = %d",a ,b , a * i);
                goto here;
            }
        }
    }
    here:
    return 0;
}
