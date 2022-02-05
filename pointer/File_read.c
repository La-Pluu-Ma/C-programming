#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    FILE *f;
    int n;
    f = fopen("text.txt", "r");
    if(f == NULL)
    {
        printf("Error!");
        exit(1);
    }

    fscanf(f, "\n%d", &n);

    printf("Number stored : %d\n", n);

    fclose(f);

    return 0;
}
