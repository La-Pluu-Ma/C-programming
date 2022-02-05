#include<stdio.h>
int main(void)
{
    int size;
    int a[size];
    printf("Enter the size of array : ");
    scanf("%d",&size);

    for(int i = 0; i < size; i++)
    {
        printf("enter the %d element of array : ", i + 1);
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
}
