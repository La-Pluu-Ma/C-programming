#include <stdio.h>
int main(void)
{
    char ch;
    printf("Enter a character : ");
    scanf("%c", &ch);
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        printf("%c is an alphabet!\n", ch);
    else
        printf("It's not an alphabet!\n");
}
