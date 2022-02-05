#include<stdio.h>

void take_input(int[][2], int);

void print_array(int[][2], int);

void multiply(int[][2], int[][2], int[][2], int);

int main(void)
{
    int A[2][2], B[2][2], result[2][2];
    printf("Enter the array A\n");
    take_input(A, 2);
    printf("The matrix A :\n");
    print_array(A, 2);

    printf("Enter the array B\n");
    take_input(B, 2);
    printf("The matrix B :\n");
    print_array(B, 2);

    multiply(A, B, result, 2);
    printf("The result\n");
    print_array(result, 2);
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

void multiply(int matrix1[][2], int matrix2[][2], int result[][2], int row)
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            if(i == 0 && j == 0)
                result[i][j] = (matrix1[i][j] * matrix2[i][j]) + (matrix1[i][j + 1] * matrix2[i + 1][j]);
            else if(i == 1 && j == 1)
                result[i][j] = (matrix1[i][j - 1] * matrix2[i - 1][j]) + (matrix1[i][j] * matrix2[i][j]);
            else if(i == 0 && j == 1)
                result[i][j] = (matrix1[i][j - 1] * matrix2[i][j]) + (matrix1[i][j] * matrix2[i + 1][j]);
            else if(i == 1 && j == 0)
                result[i][j] = (matrix1[i][j] * matrix2[i - 1][j]) + (matrix1[i][j + 1] * matrix2[i][j]);
        }
    }
}
