#include<stdio.h>
#include<stdbool.h>
void take_input(int[][2], int);

void print_array(int[][2], int);

int check_matrix(int[][2], int);

int main(void)
{
    int A[2][2];
    printf("Enter the matrix A\n");
    take_input(A, 2);
    printf("The matrix A :\n");
    print_array(A, 2);

    if(check_matrix(A, 2) == true)
        printf("The entered matrix is an identity matrix.\n");
    else
        printf("The entered matrix is not an identity matrix.\n");
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

int check_matrix(int arr[][2], int row)
{
    if(arr[0][0] == 1 && arr[1][1] == arr[0][0] && arr[1][0] == 0 && arr[0][1] == arr[1][0])
        return true;
    else
        return false;
}
