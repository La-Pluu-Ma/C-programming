#include<stdio.h>
#include<stdbool.h>

int check(int);

int main(void)
{
    int num;
    bool is_prime = false;
    printf("Enter an integer : ");
    scanf("%d",&num);

    is_prime = check(num);
    if (is_prime == true)
    {
        printf("%d is prime!\n", num);
    }
    else
    {
        printf("%d is not prime!\n", num);
    }
}

int check(int x)
{
    int count = 0;
    for (int i = 2; i <= x / 2; i++)
    {
        if(x % i == 0)
        {
            count++;
        }
    }
    if (x == 1)
    {
        return false;
    }
    else if (count == 0)
    {
        return true;
    }
    else
        return false;
}