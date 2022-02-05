#include<stdio.h>
#include<stdbool.h>
#define LIMIT 100

int main(void)
{
    int arr[LIMIT];
    int size, h;
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
            if(arr[i] > arr[j])
                {
                    h = arr[i];
                    arr[i] = arr[j];
                    arr[j] = h;
                }
        }
    }
    printf("The elements in the array in ascending order : ");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nEnter an another element to add in the array : ");
    scanf("%d", &arr[size]);

    for(int i = 0; i <= size; i++)
    {
        for(int j = i + 1; j <= size; j++)
        {
            if(arr[i] > arr[j])
                {
                    h = arr[i];
                    arr[i] = arr[j];
                    arr[j] = h;
                }
        }
    }
    printf("The new array : ");
    for(int i = 0; i <= size; i++)
    {
        printf("%d ", arr[i]);
    }
}
