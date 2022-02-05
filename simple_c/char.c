#include<stdio.h>
int main(void)
{
    char a;
    printf("Enter a character\n");
    scanf("%c" , &a);

    printf("The character is %c\n" ,a);
    printf("The ACSII code of %c is %d\n" , a , a);
    return 0;
}
