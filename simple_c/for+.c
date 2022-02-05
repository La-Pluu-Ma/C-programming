#include<stdio.h>
int main(void)
{
    int a, result;
    result = 0;
    for(a = 1; a <= 5; a++)
    {
        result = result + a;
    }
    printf("%d", result);
    return 0;
}
