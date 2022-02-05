#include<stdio.h>

typedef struct
{
    int x;
    int y;
}point;

int main(void)
{
    point z;
    z.x = 3;
    z.y = 4;

    printf("%d", z.x);
    printf("%d", z.y);
}
