#include <stdio.h>
int check_day(int);
int main(void)
{
    int d;
    do
    {
        printf("Enter the date : ");
        scanf("%d", &d);
    }while(!(d > 0 && d < 7));

    if(check_day(d) == 1)
        printf("It is Sunday!\n");
    else if(check_day(d) == 2)
            printf("It is Monday!\n");
    else if(check_day(d) == 3)
            printf("It is Tuesday!\n");
    else if(check_day(d) == 4)
            printf("It is Wednesday!\n");
    else if(check_day(d) == 5)
            printf("It is Thursday!\n");
    else if(check_day(d) == 6)
            printf("It is Friday!\n");
    else if(check_day(d) == 0)
            printf("It is Saturday!\n");
            return 0;
}
int check_day(int x)
{
    int y;
    y = x % 7;
    return y;
}
