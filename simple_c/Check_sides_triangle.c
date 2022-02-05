#include <stdio.h>
int main(void)
{
    int a , b , c;
    printf("Enter three sides of a triangle.\n");
    scanf("%d %d %d", &a , &b ,&c);

    if(a + b > c || b + c > a || c + a > b)
    {
        printf("It is valid.\n");
    }
    else
    {
        printf("It is not valid.\n");
    }
}
