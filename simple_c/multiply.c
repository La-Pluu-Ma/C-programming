#include<stdio.h>
int main(void)
{
    float a , b , c ;
    printf("Enter the first number :");
    scanf("%f" , &a);

    printf("\nEnter the second number :");
    scanf("%f" , &b);

    c = a * b ;
    printf("Result = %.3f" , c);
    return 0;
}
