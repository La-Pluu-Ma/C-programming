#include<stdio.h>
int main(void)
{
    int a, output;
    printf("Enter positive non-zero integer : ");
    scanf("%d", &a);
    output = a % 2;
    switch(output)
    {
        case 0:
            printf("Even!\n");
            break;
        case 1:
            printf("Odd!\n");
            break;
        default:
            break;
    }
    return 0;
}
