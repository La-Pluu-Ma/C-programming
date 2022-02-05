#include<stdio.h>
#include<stdlib.h>
#include<cs50.c>

int main(void)
{
    char name[50];
    int mark, num, i;

    printf("Enter the number of the students : ");
    scanf("%d", &num);

    FILE *f;
    if((f = fopen("student.txt", "a")) == NULL)
    {
        printf("Error! File does not exist!...");
        exit(1);
    }

    for(i = 0; i < num; ++i)
    {
        printf("For student %d\nEnter Name : ", i + 1);
        scanf("%s", &name);
        printf("Enter mark : ");
        scanf("%d", &mark);

        fprintf(f, "Name : %s \nMark : %d\n", name, mark);
    }
    fclose(f);
    return 0;
}
