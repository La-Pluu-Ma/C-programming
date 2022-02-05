#include <stdio.h>
int main(void)
{
    int d;
    printf("Enter the date : ");
    scanf("%d", &d);

    if(d%7 == 1)
        printf("It is Sunday!\n");
    else if(d%7 == 2)
            printf("It is Monday!\n");
    else if(d%7 == 3)
            printf("It is Tuesday!\n");
    else if(d%7 == 4)
            printf("It is Wednesday!\n");
    else if(d%7 == 5)
            printf("It is Thursday!\n");
    else if(d%7 == 6)
            printf("It is Friday!\n");
    else if(d%7 == 0)
            printf("It is Saturday!\n");
            return 0;
}
