#include<stdio.h>
int main(void)
{
    int i , sum;
    sum = 0;

    while(true)
    {
        printf("Enter positive number : ");
        scanf("%d", &i);

        if(i%2 == 0)
        {
            sum = sum + i;
        }
        else
            break;
    }
    printf("%d", sum);
    return 0;
}
