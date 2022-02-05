#include<stdio.h>
#include<string.h>
typedef struct
{
    char Name[20];
    char roll_no[20];
    int room_no;
}student;

int main(void)
{
    student s;
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

    printf("Enter the roll number : ");
    do
    {
        scanf("%c", &temp);
        if(temp != '\n')
        {
            s.roll_no[index] = temp;
            index++;
        }
    }while(!(temp == '\n'));
    s.roll_no[index] = '\0';

    printf("Enter the room number : ");
    scanf("%d", &s.room_no);

    printf("Name : ");
    puts(s.Name);
    printf("The roll number : ");
    puts(s.roll_no);
    printf("The room number : %d.\n", s.room_no);
}
