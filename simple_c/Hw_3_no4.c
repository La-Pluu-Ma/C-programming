#include<stdio.h>
int main(void)
{
    int n , i , j , o;
    printf("n = ");
    scanf("%d", &n);

    for(i = 1; i <=10 ; i++)
    {
        for(j = 1; j <= n; j++)
        {
            o = j * i;
            printf("%d x %d = %d\t",j , i , o);
        }
        printf("\n");
    }
}
