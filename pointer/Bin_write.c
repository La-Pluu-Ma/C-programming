#include<stdio.h>
#include<stdlib.h>

typedef struct threenum
{
    int n1, n2, n3;
}Tn;

int main(void)
{
    int n;
    Tn num;
    FILE *f;
    if((f = fopen("writing_bin_data.bin", "wb")) == NULL)
    {
        printf("Error! File does not exist!...");
        exit(1);
    }

    for(n = 1; n < 5; ++n)
    {
        num.n1 = n;
        num.n2 = n * 5;
        num.n3 = (n * 5) + 1;
        fwrite(&num, sizeof(num), 1, f);
    }
    fclose(f);
    return 0;
}
