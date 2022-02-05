#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define LIMIT 50

int check_word(char[], int, char[], int);

int main(void)
{
    char text[LIMIT];
    char temp;
    int index = 0;
    printf("Enter the text : ");
    do
    {
        scanf("%c", &temp);
        if(temp != '\n');
        {
            scanf("%c", &text[index]);
            index++;
        }
    }while(!(temp == '\n'));

    char word[LIMIT];
    int index1 = 0;
    printf("Enter the word : ");
    do
    {
        scanf("%c", &temp);
        if(temp != '\n');
        {
            scanf("%c", &word[index1]);
            index1++;
        }
    }while(!(temp == '\n'));

    for(int i = 0; i < index; i++)
    {
        if(text[i] == word[i])
        {
            if(check_word(text, i ,word, index1) == true)
            {
                printf("The word is present.\n");
            }
        }
    }
}

int check_word(char ste[], int m, char word[], int w_in)
{
    int c = 0;
    for(int i = 0; i < w_in; i++)
    {
        if(ste[m] == word[i])
        {
            c++;
        }
        m++;
    }
    if(c == w_in - 1)
        return true;
    else
        return false;
}
