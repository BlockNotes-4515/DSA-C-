/*2.Write a Program to perform operations on matrix like addition, subtraction,  and multiplication.*/

#include <stdio.h>

#define MAX_SIZE 10

void matrixAddition(const int matrix1[][MAX_SIZE], const int matrix2[][MAX_SIZE], int result[][MAX_SIZE], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void matrixSubtraction(const int matrix1[][MAX_SIZE], const int matrix2[][MAX_SIZE], int result[][MAX_SIZE], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

void matrixMultiplication(const int matrix1[][MAX_SIZE], const int matrix2[][MAX_SIZE], int result[][MAX_SIZE], int rows1, int cols1, int cols2)
{
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

void displayMatrix(const int matrix[][MAX_SIZE], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int matrix1[MAX_SIZE][MAX_SIZE], matrix2[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];
    int rows1, cols1, rows2, cols2;

    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    if (rows1 != rows2 || cols1 != cols2)
    {
        printf("Matrix addition and subtraction are not possible due to incompatible dimensions.\n");
    }
    else
    {
        printf("Matrix Addition:\n");
        matrixAddition(matrix1, matrix2, result, rows1, cols1);
        displayMatrix(result, rows1, cols1);

        printf("Matrix Subtraction:\n");
        matrixSubtraction(matrix1, matrix2, result, rows1, cols1);
        displayMatrix(result, rows1, cols1);
    }

    if (cols1 != rows2)
    {
        printf("Matrix multiplication is not possible due to incompatible dimensions.\n");
    }
    else
    {
        printf("Matrix Multiplication:\n");
        matrixMultiplication(matrix1, matrix2, result, rows1, cols1, cols2);
        displayMatrix(result, rows1, cols2);
    }

    return 0;
}