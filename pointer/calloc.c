#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int n, i, *ptr, sum = 0;
    printf("Enter the number of elements : ");
    scanf("%d", &n);

    ptr = (int*)calloc(n, sizeof(int));
    if(ptr == NULL)
    {
        printf("Error!");
        exit(0);
    }
    printf("Enter the numbers : ");
    for(i = 0; i < n; ++i)
    {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }
    printf("Sum = %d\n", sum);
    free(ptr);
}
