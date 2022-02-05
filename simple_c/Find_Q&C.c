#include<stdio.h>
int main(void)
{
    int a , b;

    printf("a = ");
    scanf("%d" , &a);

    printf("b = ");
    scanf("%d" , &b);

    printf("Quotient is %d\n" , b / a);
    printf("Reminder is %d\n" , b % a);
    return 0;
}
