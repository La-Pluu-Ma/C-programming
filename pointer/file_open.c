#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    FILE *f;
    int n;
    f = fopen("text.txt", "a");
    if(f == NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("Enter number : ");
    scanf("%d", &n);
    fprintf(f, "\n%d", n);

    fclose(f);

    return 0;
}
