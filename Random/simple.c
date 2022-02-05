#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
    srand(time(NULL));
    int random_num = rand();
    printf("%d", random_num);
    return 0;
}
