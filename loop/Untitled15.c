#include<stdio.h>
int main(void)
{
    int i;
    for(i = 1; i <= 10; i++)
    {
        if(i == 5 || i == 7)
            continue;
        else
        {
            printf("%d", i);
        }
    }
}
