#include <stdio.h>
int main(void)
{
    int Y;

    printf("Enter a year :");
    scanf("%d" , &Y);

    if(Y%100 == 0)
    {
        if(Y%400 == 0)
            printf("%d is a leap year!\n" , Y);
        else
            printf("%d is not a leap year.\n" , Y);

    }
    else
    {
        if(Y%4 == 0)
            printf("%d is a leap year!\n" , Y);
        else
            printf("%d is not a leap year.\n" , Y);
    }
    return 0;
}
