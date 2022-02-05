#include<stdio.h>
int main(void)
{
    int n, i, m;
    printf("Enter the number of MT you want : ");
    scanf("%d", &n);

    for(i = 1; i <=12; i++)
    {
        m = n * i;
        printf("%d * %d = %d\n", n , i , m);
    }
    return 0;
}
