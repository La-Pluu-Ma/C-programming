#include<stdio.h>
#include<string.h>
typedef struct
{
    char Name[20];
    char address[20];
    char sex;
    int age;
}info;

int main(void)
{
    info s;
    char temp;
    int index = 0;
    printf("Enter your name : ");
    do
    {
        scanf("%c", &temp);
        if(temp != '\n')
        {
            s.Name[index] = temp;
            index++;
        }
    }while(!(temp == '\n'));
    s.Name[index] = '\0';
    index = 0;

    printf("Enter the address of your home : ");
    do
    {
        scanf("%c", &temp);
        if(temp != '\n')
        {
            s.address[index] = temp;
            index++;
        }
    }while(!(temp == '\n'));
    s.address[index] = '\0';


    do
    {
        printf("Enter your sex(Enter M or F): ");
        scanf("%c", &s.sex);
    }while(!(s.sex == 'M' || s.sex == 'F'));

    printf("Enter your age : ");
    scanf("%d", &s.age);

    printf("Name : ");
    puts(s.Name);
    printf("Address : ");
    puts(s.address);
    if(s.sex == 'M')
        printf("Sex : MALE\n");
    else if(s.sex == 'F')
        printf("Sex : FEMALE\n");
    printf("Age : %d.\n", s.age);
}
