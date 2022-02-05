#include <stdio.h>
int main(void)
{
    int m,p;
    printf("Enter the reading of the meter in kWh : ");
    scanf("%d", &m);

    p = m * 75; // 1kWh = 75 kyats
    printf("The cost of the electricity is %d kyats.\n", p);

    return 0;
}
