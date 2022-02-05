#include<stdio.h>

int main(void)
{
    int row_size, col_size;
    printf("Enter the size of the row :");
    scanf("%d", &row_size);
    printf("Enter the size of the col :");
    scanf("%d", &col_size);

    int matrix[row_size][col_size];

    for(int row = 0; row < row_size; row++)
    {
        for(int col = 0; col < col_size; col++)
        {
            printf("Enter the integer of row %d , col %d : ", row + 1, col + 1);
            scanf("%d", &matrix[row][col]);
        }
    }

    for(int row = 0; row < row_size; row++)
    {
        for(int col = 0; col < col_size; col++)
        {
            printf("%d\t", matrix[row][col]);
        }
        printf("\n");
    }
    return 0;
}
