#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int roll(void);

int main(void)
{

    printf("%d", roll());
    return 0;
}

int roll(void)
{
    srand(time(NULL));
    int random_num = (rand() % 6) + 1;
    return random_num;
}
