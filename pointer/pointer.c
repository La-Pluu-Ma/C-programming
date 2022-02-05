#include<stdio.h>
typedef int* int_pointer;
int main(void)
{
    int *a;
    int b = 10;
    a = &b;
    printf("%d\n", *a);
    printf("%d\n", b);
}
