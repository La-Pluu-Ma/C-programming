#include<stdio.h>
int main(void)
{
    int a , b , c;
    a = 10;
    b = 20;
    printf("Before swapping\n");
    printf("a=%d\n", a);
    printf("b=%d\n", b);

    c = a;
    a = b;
    b = c;
    printf("After swapping\n");
    printf("a=%d\n", a);
    printf("b=%d\n", b);
    return 0;
}
