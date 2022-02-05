#include<stdio.h>

void take_input(int[][2], int);

void print_array(int[][2], int);

int main(void)
{
    int A[2][2], B[2][2], sum[2][2];
    printf("Enter the array A\n");
    take_input(A, 2);
    printf("The matrix A :\n");
    print_array(A, 2);

    printf("Enter the array B\n");
    take_input(B, 2);
    printf("The matrix B :\n");
    print_array(B, 2);

    for(int row = 0; row < 2; row++)
    {
        for(int col = 0; col < 2; col++)
        {
            sum[row][col] = A[row][col] + B[row][col];
        }
    }
    printf("The result\n");
    print_array(sum, 2);
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
