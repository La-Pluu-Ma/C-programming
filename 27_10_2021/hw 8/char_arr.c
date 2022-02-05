#include<stdio.h>
#include<stdbool.h>
#define LIMIT 100

void print_array(char arr[], int size)
{
    printf("The elements of the array : ");
    for(int i = 0; i < size; i++)
    {
        printf("%c", arr[i]);
    }
}

int main(void)
{
    char cha[LIMIT];
    char temp;
    int index = 0;
    do
    {
        scanf("%c", &temp);
        if(temp != '~')
        {
            cha[index] = temp;
            index++;
        }
    }while(!(temp == '~'));
    print_array(cha, index);
}
