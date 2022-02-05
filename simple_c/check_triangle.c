#include <stdio.h>
int main(void)
{
    int a , b , c;
    printf("Enter 3 angles of the triangle.\n");
    scanf("%d %d %d", &a , &b , &c);
    if (a + b + c == 180)
    {
        printf("It is valid triangles.\n");
    }
    else
    {
        printf("It is not a valid triangle.\n");
    }
}
