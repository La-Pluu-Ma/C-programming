#include<stdio.h>

void take_input(int[][2], int);

void print_array(int[][2], int);

void transport(int[][2], int);

int main(void)
{
    int A[2][2];
    printf("Enter the array A\n");
    take_input(A, 2);
    printf("The matrix A :\n");
    print_array(A, 2);

    transport(A, 2);
    printf("The transport of the matrix A :\n");
    print_array(A, 2);
}

void take_input(int array[][2], int row)
{
    for(int r = 0; r < row; r++)
    {
        for(int c = 0; c < 2; c++)
        {
            printf("Enter the integer of row %d, col %d : ", r + 1, c + 1);
            scanf("%d", &array[r][c]);
        }
    }
}

void print_array(int arr[][2], int r)
{
    for(int row = 0; row < r; row++)
    {
        for(int col = 0; col < 2; col++)
        {
            printf("%d\t", arr[row][col]);
        }
        printf("\n");
    }
}

void transport(int arr[][2], int row)
{
    int temp;
    temp = arr[0][1];
    arr[0][1] = arr[1][0];
    arr[1][0] = temp;
}
