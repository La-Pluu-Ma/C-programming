#include<stdio.h>

int main(void)
{
    char input;
    do
    {
        printf("Enter a character : ");
        scanf("%c", &input);
    }while(!((input >= 'a' && input <= 'z') || (input >= 'A' && input <='Z')));
    if(input >= 'a' && input <= 'z')
        printf("%c", (input - 'a') + 'A');
    else if(input >= 'A' && input <='Z')
        printf("%c", (input - 'A') + 'a');
}
