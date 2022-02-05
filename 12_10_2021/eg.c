#include<stdio.h>
int main(void)
{
    int a = 2, b=4;
    int f;
    for(int i = 1; i <= a; i++)
        {
            if(a % i == 0)
            {
                if(b % i == 0)
                    f = i;
            }
        }
    printf("%d",f);
}
