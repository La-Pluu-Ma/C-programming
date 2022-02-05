#include<stdio.h>
#include<stdbool.h>
#define LIMIT 50

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

int main(void)
{
    char cha[LIMIT];
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
    char Encrypted_Text[index], Decrypted_Text[index];

    do
    {
        printf("Enter the key : ");
        scanf("%d", &key);
    }while(!(key > 0));

    printf("Plain Text : ");
    print_array(cha, index);

    encrypted(cha, Encrypted_Text, index, key);
    printf("\nThe cipher text : ");
    print_array(Encrypted_Text, index);

    decrypted(Encrypted_Text, Decrypted_Text, index, key);
    printf("\nDecrypted Text : ");
    print_array(Decrypted_Text, index);
}
