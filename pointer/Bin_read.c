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
    if((f = fopen("writing_bin_data.bin", "rb")) == NULL)
    {
        printf("Error! File does not exist!...");
        exit(1);
    }

    for(n = 1; n < 5; ++n)
    {
        fread(&num, sizeof(num), 1, f);
        printf("n1 = %d\n", num.n1);
        printf("n2 = %d\n", num.n2);
        printf("n3 = %d\n", num.n3);
    }
    fclose(f);
    return 0;
}
