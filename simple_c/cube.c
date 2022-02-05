#include<stdio.h>
int main(void)
{
    int n, i, cube;
    printf("n = ");
    scanf("%d", &n);
    printf(";");
    for(i = 1; i <= n; i++)
    {
        cube = i * i * i;
        printf(" %d ^ 3 = %d,", i, cube);
    }
    return 0;
}
