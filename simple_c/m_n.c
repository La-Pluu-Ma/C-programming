#include <stdio.h>
int main(void)
{
    int m , n;
    printf("Enter the integer m : ");
    scanf("%d", &m);

    if(m > 0)
    {
        n = 1;
        printf("The value of n = %d", n);
    }
    else if(m == 0)
    {
        n = 0;
        printf("The value of n = %d", n);
    }
    else
    {
        n = -1;
        printf("The value of n = %d", n);
    }
    return 0;
}
