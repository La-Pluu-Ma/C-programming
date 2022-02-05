#include<stdio.h>
#include<stdlib.h>
#include<cs50.c>

int main(void)
{
    char name[50];
    int mark, num, i;

    printf("Enter the number of the student : ");
    scanf("%d", &num);

    FILE *f;
    if((f = fopen("student.txt", "r")) == NULL)
    {
        printf("Error! File does not exist!...");
        exit(1);
    }

    for(i = 0; i < num; ++i)
    {
        fscanf(f, "Name : %s", name);
        printf("Name : %s\n", name);

        fscanf(f, "\nMark : %d", &mark);
        printf("Mark : %d\n", mark);
        fscanf(f, "\n");
    }
    fclose(f);
    return 0;
}
