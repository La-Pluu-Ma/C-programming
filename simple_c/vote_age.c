#include <stdio.h>
int main(void)
{
    int age;
    printf("Enter your age : ");
    scanf("%d", &age);

    if(age >= 18)
        printf("It is eligible for casting your own vote.\n");
    else
        printf("It is not eligible for casting your own vote.\n");
    return 0;
}
