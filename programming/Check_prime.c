#include<stdio.h>
int main(void)
{
    int input, i;
    int count = 0;
    do
    {
        printf("Enter positive integer : ");
        scanf("%d", &input);
    }while(!(input > 0));
    if(input == 1)
    {
        printf("Not a prime number.\n");
    }
    else
    {
        for(i = 1; i <= input; i++)
        {
            if(input % i == 0)
            {
                count++;
            }
        }
        if(count == 2)
        {
            printf("%d is a prime number.\n", input);
        }
        else
        {
            printf("%d is not a prime number.\n", input);
        }
    }
    return 0;
}
