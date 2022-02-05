#include<stdio.h>
int main(void)
{
    int a,i,result;
    printf("Enter the number.\n");
    scanf("%d", &a);
    result = 0;
    for(i = 1; i<= a ; i++)
    {
        result = result + i;
    }
    printf("The sum of %d is %d.\n", a , result);
    return 0;
}
