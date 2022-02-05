#include<stdio.h>
int main(void)
{
    int numb, result;
    int count = 0;
    printf("Enter positive integer : ");
    scanf("%d", &numb);
    result = numb;
    while(result != 0)
    {
        result = result / 10;
        count = count + 1;
    }
    printf("The  digit number of %d is %d.\n", numb, count);
    return 0;
}
