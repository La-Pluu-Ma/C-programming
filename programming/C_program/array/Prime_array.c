#include<stdio.h>
#include<stdbool.h>
#define LIMIT 100

void print_array(int[] , int);

bool is_prime(int);

int main(void)
{
    int a, b;
    int count = 0;
    int prime[LIMIT];
    printf("Enter the two integers : ");
    scanf("%d %d", &a, &b);

    for(int i = a; i<= b; i++)
    {
        if(is_prime(i))
        {
            prime[count] = i;
            count++;
        }
    }
    print_array(prime, count);
    return 0;
}
bool is_prime(int n)
{
    if(n == 1)
        return false;
    else if(n == 2)
        return true;
    else
    {
        for(int i = 2; i <= n / 2; i++)
        {
            if(n % i == 0)
                return false;
        }
    }
    return true;
}
void print_array(int arr[], int size)
{
    printf("The elements of array are : ");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nThe number of prime is %d.\n",size);
}
