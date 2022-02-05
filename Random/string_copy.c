#include <stdio.h>
#include <string.h>
#include <cs50.c>

char copy(string, char[], int);

int main(void)
{
    string str1 = get_string("", "Enter a line : ");
    char str2[strlen(str1)];
    copy(str1, str2, 0);
    puts(str2);
}

char copy(string str1, char str2[], int index)
{
    if(str1[index] == '\0')
    {
        str2[index] = '\0';
        return '\0';
    }
    else
    {
        str2[index] = str1[index];
        index++;
        return copy(str1, str2, index);
    }
}
