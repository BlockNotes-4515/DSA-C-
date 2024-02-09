/*3.Write a program to accept matrix from user and find out whether the matrix is sparse or not.*/

#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

int isSparseMatrix(const int matrix[][MAX_COLS], int rows, int cols)
{
    int countZero = 0;
    int totalCount = rows * cols;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] == 0)
            {
                countZero++;
            }
        }
    }

    // If the count of zeros is greater than half of the total elements, it is considered sparse
    if (countZero > totalCount / 2)
    {
        return 1; // Sparse matrix
    }
    else
    {
        return 0; // Not a sparse matrix
    }
}

int main()
{
    int matrix[MAX_ROWS][MAX_COLS];
    int rows, cols;

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int isSparse = isSparseMatrix(matrix, rows, cols);

    if (isSparse)
    {
        printf("The matrix is a sparse matrix.\n");
    }
    else
    {
        printf("The matrix is not a sparse matrix.\n");
    }

    return 0;
}