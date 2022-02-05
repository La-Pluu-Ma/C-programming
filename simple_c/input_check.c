#include <stdio.h>
int main(void)
{
    int a;
    printf("Enter a non-zero number.\n");
    scanf("%d" , &a);

    if ( a > 0)
    {
        printf("Entered number is positive.\n");
    }
    else
    {
        printf("Entered number is negative.\n");
    }
}
