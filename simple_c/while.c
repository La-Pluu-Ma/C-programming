#include<stdio.h>
#include<stdbool.h>
int main(void)
{
    int n;
    int i = 1;
    bool kontinue = true;
    printf("Enter number : ");
    scanf("%d", &n);

    while(kontinue = true)
    {
        if(i<=n)
        {
            printf("%d\n",i);
            i++;
        }
        else
        {
            kontinue = false;
        }
    }
    return 0;
}
