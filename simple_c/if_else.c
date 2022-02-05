#include <stdio.h>
int main(void)
{
    int a , b;
    printf("Enter two integers seperated by space.\n");
    scanf("%d %d" , &a ,&b);

    if (a > b)
    {
        printf("%d is greater than %d.\n" , a , b);
    }
    else if (a < b)
    {
        printf("%d is less than %d.\n" , a , b);
    }
    else if (a == b)
    {
        printf("Both are equal.\n");
    }
    return 0;
}
