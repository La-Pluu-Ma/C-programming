#include<stdio.h>
int main(void)
{
    int numb, reverse;
    reverse = 0;
    printf("Enter Positive integer : ");
    scanf("%d",&numb);

    while(numb != 0)
    {
        reverse = (reverse * 10) + (numb % 10);
        numb = numb / 10;
    }
    printf("Reverse of numb is %d.\n", reverse);
    return 0;
}
