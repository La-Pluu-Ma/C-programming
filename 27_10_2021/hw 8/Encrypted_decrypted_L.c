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
    char Plain_Text[LIMIT];
    char temp;
    int index = 0, key;
    printf("Enter the text(At the end enter $) : ");
    do
    {
        scanf("%c", &temp);
        if(temp != '$')
        {
            Plain_Text[index] = temp;
            index++;
        }
    }while(!(temp == '$'));

    char Encrypted_Text[index], Decrypted_Text[index];

    printf("Enter the key : ");
    scanf("%d", &key);

    printf("Plain Text : ");
    print_array(Plain_Text, index);

    encrypted(Plain_Text, Encrypted_Text, index, key);
    printf("\nThe cipher text : ");
    print_array(Encrypted_Text, index);

    decrypted(Encrypted_Text, Decrypted_Text, index, key);
    printf("\nDecrypted Text : ");
    print_array(Decrypted_Text, index);
}
