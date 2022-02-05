#include<stdio.h>
#include<stdbool.h>
#define LIMIT 100

int main(void)
{
    int arr[LIMIT];
    int size, min;
    printf("Enter the size of the array : ");
    scanf("%d", &size);

    for(int i = 0; i < size; i++)
    {
        printf("%d Element of the array : ", i + 1);
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < size; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            if(arr[i] > arr[j])
                {
                    min = arr[i];
                    arr[i] = arr[j];
                    arr[j] = min;
                }
        }
    }
    printf("The elements in the array in ascending order : ");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
