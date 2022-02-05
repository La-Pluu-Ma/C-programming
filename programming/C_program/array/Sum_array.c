#include<stdio.h>
#define LIMIT 100

void print_array(int[] , int);

int main(void)
{
    int array[LIMIT];
    int index = 0;
    int sum = 0;
    do
    {
        printf("Enter the %d element of the array : ", index + 1);
        scanf("%d", &array[index]);
        if(array[index] > 0)
            index++;
    }while(!(array[index] < 0));
    print_array(array, index);
    for(int i = 0; i < index; i++)
    {
        sum = sum + array[i];
    }
    printf("The sum of the elements in array is %d.\n",sum);
}
void print_array(int arr[], int size)
{
    printf("The elements of array are : ");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nThe number of array is %d.\n",size);
}
