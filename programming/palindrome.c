#include<stdio.h>
int main(void)
{
    int input, result, reverse;
    printf("Enter positive integer : ");
    scanf("%d", &input);

    reverse = 0;
    result = input;

    while (result != 0)
    {
        reverse = (reverse * 10) + (result % 10);
        result = result / 10;
    }
    if (input == reverse)
    {
        printf("It's palindrome!\n");
    }
    else
    {
        printf("It's not!\n");
    }
    return 0;
}
