#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
    srand(time(NULL));
    int random_num = (rand() % 2);
    printf("Skip class?\n");
    if(random_num == 0)
        printf("Skip!");
    else
        printf("Don't!");
    return 0;
}
