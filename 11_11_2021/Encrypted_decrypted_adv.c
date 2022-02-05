#include<stdio.h>
#include<stdbool.h>
#define LIMIT 50

void print_array(char[], int);

void encrypted(char[], char[], int, int);

void decrypted(char[], char[], int, int);

int main(void)
{
    char Text[LIMIT];
    char temp;
    int index = 0, key;
    int decision;

    printf("What do you want to do? [Encypt : 1][Decypt : 0] : ");
    do
    {
        scanf("%d", &decision);
    }while(!((decision == 0) || (decision == 1)));

    printf("Enter the text(At the end enter $) : ");
    do
    {
        scanf("%c", &temp);
        if(temp != '$')
        {
            Text[index] = temp;
            index++;
        }
    }while(!(temp == '$'));

    char Encrypted_Text[index], Decrypted_Text[index];

    printf("Enter the key : ");
    scanf("%d", &key);

    if(decision == 1)
    {
        encrypted(Text, Encrypted_Text, index, key);
        printf("The cipher text : ");
        print_array(Encrypted_Text, index);
    }
    else
    {
        decrypted(Text, Decrypted_Text, index, key);
        printf("\nDecrypted Text : ");
        print_array(Decrypted_Text, index);
    }
}

void print_array(char arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%c", arr[i]);
    }
}

void encrypted(char arr[], char encry[], int size, int key)
{
    for(int i = 0; i < size; i++)
    {
        encry[i] = arr[i] + key;
    }
}

void decrypted(char encry[], char decry[], int size, int key)
{
    for(int i = 0; i < size; i++)
    {
        decry[i] = encry[i] - key;
    }
}
