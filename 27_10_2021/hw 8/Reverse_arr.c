#include<stdio.h>
#define LIMIT 100
int main(void)
{
    int arr[LIMIT];
    int n;
    printf("Enter the number of the array : ");
    scanf("%d", &n);
    printf("Enter the elements of the array :\n");
    for(int i = 0; i < n; i++)
    {
        printf("Enter %d number of the array :", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Elements of the array are ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nThe reverse of the array is ");
    for(int i = (n - 1); i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}
