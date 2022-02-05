#include<stdio.h>
#include<stdbool.h>
#define LIMIT 100

int main(void)
{
    int arr[LIMIT];
    int size, l;
    printf("Enter the size of the array : ");
    scanf("%d", &size);

    for(int i = 0; i < size; i++)
    {
        printf("%d element of the array : ", i + 1);
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < size; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            if(arr[i] < arr[j])
                {
                    l = arr[i];
                    arr[i] = arr[j];
                    arr[j] = l;
                }
        }
    }
    printf("The elements in the array in descending order : ");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
