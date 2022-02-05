#include<stdio.h>
#include<stdbool.h>

int main(void)
{
    int first_term = 0, second_term = 1;
    int temp;
    printf("%d ",first_term);
    printf("%d ",second_term);
    bool stop_now = false;

    while (stop_now == false)
    {
        temp = first_term + second_term;
        if (temp > 100)
        {
            stop_now = true;
            break;
        }
        else
        {
            printf("%d ", temp);
            first_term = second_term;
            second_term = temp;
        }
    }
    return 0;
}
