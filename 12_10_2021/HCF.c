#include<stdio.h>
int main(void)
{
    int a , b;
    int f , i;
    printf("Enter Two number : ");
    scanf("%d %d", &a, &b);
    if(a > b)
    {
        for(i = 1; i <= b; i++)
        {
            if(b % i == 0)
            {
                if(a % i == 0)
                    f = i;
            }
        }
    }
    else
    {
        for(i = 1; i <= a; i++)
        {
            if(a % i == 0)
            {
                if(b % i == 0)
                    f = i;
            }
        }
    }
    printf("HCF(%d,%d)= %d", a, b, f);
    return 0;
}
