#include<stdio.h>
#include<stdbool.h>
int check_prime(int);
int main(void)
{
    int a , b;
    bool is_prime = false;
    printf("Enter two positive integers : ");
    scanf("%d %d", &a , &b);
    if(a > b)
    {
        int c = a;
        a = b;
        b = c;
    }
    for(int i = a; i <= b; i++)
    {
        if(check_prime(i) == true)
            printf("%d ", i);
    }
    return 0;
}
int check_prime(int x)
{
    int count = 0;
    for(int j = 2; j <= x / 2; j++)
    {
        if(x % j == 0)
            count++;
    }
    if(x == 1)
        return false;
    else if(count == 0)
        return true;
}
