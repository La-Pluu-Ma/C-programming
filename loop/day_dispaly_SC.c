#include<stdio.h>
int main(void)
{
    int d , o;
    printf("Enter the day date : ");
    scanf("%d", &d);
    o = d % 7;
    switch(o)
    {
        case 1:
            printf("It is Sunday!\n");
            break;
        case 2:
            printf("It is Monday!\n");
            break;
        case 3:
            printf("It is Tuesday!\n");
            break;
        case 4:
            printf("It is Wednesday!\n");
            break;
        case 5:
            printf("It is Thursday!\n");
            break;
        case 6:
            printf("It is Friday!\n");
            break;
        case 0:
            printf("It is Saturday!\n");
            break;
        default:
            break;
    }
    return 0;
}
