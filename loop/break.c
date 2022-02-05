#include<stdio.h>
int main(void)
{
    int i;
    i = 1;
    for(i <= 10;)
    {
        if(i>5)
        {
            break;
        }
        else
        {
            printf("%d", i);
        }
        i++;
    }
    return 0;
}
