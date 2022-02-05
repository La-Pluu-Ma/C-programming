#include <stdio.h>
int main(void)
{
    int a;
    printf("Enter a non-zero number.\n");
    scanf("%d" , &a);

    if ( a%2 == 0)
    {
        printf("Entered number is even.\n");
    }
    else
    {
        printf("Entered number is odd.\n");
    }
}
