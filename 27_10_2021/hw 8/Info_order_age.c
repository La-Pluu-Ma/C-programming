#include<stdio.h>
#include<string.h>
#include<cs50.c>
#include<cs50.h>
typedef struct
{
    string Name;
    string address;
    char sex;
    int age;
}info;

int main(void)
{
    int n;
    printf("Enter the number of the student : ");
    scanf("%d", &n);
    char z;
    scanf("%c", &z);
    info s[n];
    char temp;
    int index = 0;

    for(int i =0; i < n; i++)
    {
        printf("Enter your name : ");
        do
        {
            scanf("%c", &temp);
            if(temp != '\n')
            {
                s[i].Name[index] = temp;
                index++;
            }
        }while(!(temp == '\n'));
        s[i].Name[index] = '\0';
        index = 0;

        printf("Enter the address of your home : ");
        do
        {
            scanf("%c", &temp);
            if(temp != '\n')
            {
                s[i].address[index] = temp;
                index++;
            }
        }while(!(temp == '\n'));
        s[i].address[index] = '\0';

        do
        {
            printf("Enter your gender(Enter M or F): ");
            scanf("%c", &s[i].sex);
        }while(!(s[i].sex == 'M' || s[i].sex == 'F'));

        printf("Enter your age : ");
        scanf("%d", &s[i].age);

        scanf("%c", &z);
        printf("\n");
    }
    string temp_name;
    string temp_address;
    char temp_s;
    int temp_age;
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(s[i].age > s[j].age)
                {
                    temp_name = s[i].Name;
                    s[i].Name = s[j].Name;
                    s[j].Name = temp_name;
                    strcpy(temp_address, s[i].address);
                    strcpy(s[i].address, s[j].address);
                    strcpy(s[j].address, temp_address);
                    temp_s = s[i].sex;
                    s[i].sex = s[j].sex;
                    s[j].sex = temp_s;
                    temp_age = s[i].age;
                    s[i].age = s[j].age;
                    s[j].age = temp_age;
                }
        }
    }
    for(int i = 0; i < n; i++)
    {
        printf("Name : ");
        puts(s[i].Name);
        printf("Address : ");
        puts(s[i].address);
        if(s[i].sex == 'M')
            printf("Sex : MALE\n");
        else if(s[i].sex == 'F')
            printf("Sex : FEMALE\n");
        printf("Age : %d.\n", s[i].age);
        printf("\n");
    }
}

