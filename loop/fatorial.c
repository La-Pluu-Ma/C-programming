#include<stdio.h>
int main(void)
{
    int n, i, result;
    result = 1;
    printf("Enter an integer of desired factorial : ");
    scanf("%d", &n);

    switch(n)
    {
        case 0:
        {
            printf("0! = 1.");
            break;
        }
        case 1:
        {
            printf("1! = 1.");
            break;
        }
        default:
        {
            for(i = 1; i <= n; i++)
            {
               result = result * i;
            }
            printf("%d! = %d.", n , result);
            break;
        }
    }
        return 0;
}
