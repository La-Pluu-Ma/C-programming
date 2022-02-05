#include<stdio.h>
int main(void)
{
    int a;
    float b;
    char c;
    double d;
    long int e;
    long long int f;

    printf("The size of int is %zu\n" , sizeof(a));
    printf("The size of float is %zu\n" , sizeof(b));
    printf("The size of char is %zu\n" , sizeof(c));
    printf("The size of double is %zu\n" , sizeof(d));
    printf("The size of long int is %zu\n" , sizeof(e));
    printf("The size of long long int is %zu\n" , sizeof(f));

}
