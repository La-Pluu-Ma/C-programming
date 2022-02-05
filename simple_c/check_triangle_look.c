#include <stdio.h>
int main(void)
{
    int a , b , c;
    printf("Enter 3 sides of a triangle seperated by a space.\n");
    scanf("%d %d %d", &a , &b , &c);

    if(a == b && b == c)
        printf("It's equilateral!\n");
    else if(a == b || b == c || c == a)
        printf("It's isosceles!\n");
    else
        printf("It's a scalene!\n");

    return 0;
}
