#include<stdio.h>
#include<stdbool.h>
#define LIMIT 100

void print_array(char arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%c", arr[i]);
    }
}

int main(void)
{
    char cha[LIMIT], CT[LIMIT];
    char temp;
    int index = 0, key;
    printf("Enter the text : ");
    do
    {
        scanf("%c", &temp);
        if(temp != '~')
        {
            cha[index] = temp;
            index++;
        }
    }while(!(temp == '~'));
    do
    {
        printf("Enter the key : ");
        scanf("%d", &key);
    }while(!(key <= 25));

    printf("Plain Text : ");
    print_array(cha, index);
    for(int i = 0; i < index; i++)
    {
        CT[i] = cha[i] + key;
    }
    printf("\nThe cipher text : ");
    print_array(CT, index);
}
