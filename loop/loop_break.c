#include<stdio.h>
int main(void)
{
    int i, sum;
    sum = 0;

    printf("Enter a positive integer : ");
    scanf("%d", &i);

    for(i=1 ; i <= 10;)
    {
        if(i > 0)
        {
            sum = sum + i;
        }
        else
            break;

        i++;
    }
    printf("%d", sum);
    return 0;
}
