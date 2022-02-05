#include<stdio.h>
#include<string.h>
#include<cs50.c>
#include<stdbool.h>

bool check(string);

int main(void)
{
    string input;
    int index = 0;
    do
    {
        input = get_string("", "Enter a line :");
    }while(!(check(input)));
    for(int i = 0; i < strlen(input); i++)
    {
        if(input[i] >= 'a' && input[i] <= 'z')
            input[i] = (input[i] - 'a') + 'A';
        else if(input[i] >= 'A' && input[i] <='Z')
            input[i] = (input[i] - 'A') + 'a';
    }
    puts(input);
}

bool check(string input)
{
    int c = strlen(input);
    int counter = 0;
    for(int i = 0; i < c; i++)
    {
        if((input[i] >= 'a' && input[i] <= 'z') || (input[i] >= 'A' && input[i] <='Z') || (input[i] == ' '))
            counter++;
    }
    if(counter == c)
        return true;
    else
        return false;
}
