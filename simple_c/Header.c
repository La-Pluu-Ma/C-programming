#include<stdio.h>
int main(void)
{
    int a , b , c ;
    printf("Enter the first number :");
    scanf("%d" , &a);

    printf("\nEnter the second number :");
    scanf("%d" , &b);

    c = a * b ;
    printf("Result = %d" , c);
    return 0;
}
