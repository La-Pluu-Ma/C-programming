#include <stdio.h>
int main(void)
{
    int a , b , c;

    printf("Enter three numbers seperated by space.\n");
    scanf("%d %d %d" , &a , &b , &c);

    if (a == b && b == c)
    {
        printf("All numbers are the same!\n");
    }
    else
    {

        if (a > b && a > c)
        {
            printf("%d is the Greatest number!\n", a);
        }
        else if (b > a && b > c)
        {
            printf("%d is the Greatest number!\n", b);
        }
        else if (c > b && c > a)
        {
            printf("%d is the Greatest number!\n", c);
        }
    }
    return 0;
}
