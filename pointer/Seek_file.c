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

    fseek(f, -sizeof(Tn), SEEK_END);

    for(n = 1; n < 5; ++n)
    {
        fread(&num, sizeof(num), 1, f);
        printf("n1 : %d\t\tn2 : %d\t\tn3 : %d\t\n", num.n1, num.n2, num.n3);
        fseek(f, -2*sizeof(Tn), SEEK_CUR);
    }
    fclose(f);
    return 0;
}
