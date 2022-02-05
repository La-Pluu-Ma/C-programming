#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<cs50.c>

typedef struct
{
    string name;
    int mark;
}student;

int main(void)
{
    student s;
    int n;
    FILE *f;
    printf("Enter the number of the students : ");
    scanf("%d", &n);
    scanf("%c");
    if((f = fopen("student.bin", "wb")) == NULL)
    {
        printf("Error!");
        exit(1);
    }

    for(int i = 0; i < n; ++i)
    {
        printf("Enter name : ");
        scanf("%[^\n]%*c", &s.name);
        printf("Enter mark : ");
        scanf("%d", &s.mark);

        fwrite(s.name ,sizeof(s.name), 1, f);
        fwrite(&s.mark ,sizeof(s.mark), 1, f);
    }

    fclose(f);
    return 0;
}
