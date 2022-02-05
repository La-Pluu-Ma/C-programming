#include<stdio.h>
#include<stdbool.h>
#define LIMIT 100

bool check_present(int[], int, int);
void print_array(int[], int);
int find_freq(int[], int, int);
int main(void)
{
    int arr1[LIMIT], unique[LIMIT], frequency[LIMIT];
    int size, index = 0;
    printf("Enter the size of the array : ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        printf("%d element of the array : ", i + 1);
        scanf("%d", &arr1[i]);
    }
    for(int i = 0; i < size; i++)
    {
        if (check_present(unique, arr1[i], size) == false)
        {
            unique[index] = arr1[i];
            index++;
        }
    }
    for(int i = 0; i < index; i++)
    {
        frequency[i] = find_freq(arr1, size, unique[i]);
    }
    print_array(arr1, size);
    print_array(unique, index);
    for(int i = 0; i < index; i++)
    {
        printf("%d occurs %d times.\n", unique[i], frequency[i]);
    }
}

bool check_present(int arr[], int num, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
            return true;
    }
    return false;
}

int find_freq(int arr[], int size, int num)
{
    int count = 0;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == num)
            count++;
    }
    return count;
}

void print_array(int arr[], int size)
{
    printf("Elements from the array : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
