/*4.Write a program to create a sparse matrix.*/

#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

typedef struct
{
    int row;
    int col;
    int value;
} Element;

typedef struct
{
    int rows;
    int cols;
    int numElements;
    Element elements[MAX_ROWS * MAX_COLS];
} SparseMatrix;

void createSparseMatrix(SparseMatrix *sparseMatrix, const int matrix[][MAX_COLS], int rows, int cols)
{
    sparseMatrix->rows = rows;
    sparseMatrix->cols = cols;
    sparseMatrix->numElements = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] != 0)
            {
                Element element;
                element.row = i;
                element.col = j;
                element.value = matrix[i][j];

                sparseMatrix->elements[sparseMatrix->numElements] = element;
                sparseMatrix->numElements++;
            }
        }
    }
}

void displaySparseMatrix(const SparseMatrix *sparseMatrix)
{
    printf("Sparse Matrix:\n");

    for (int i = 0; i < sparseMatrix->numElements; i++)
    {
        printf("(%d, %d) = %d\n", sparseMatrix->elements[i].row, sparseMatrix->elements[i].col, sparseMatrix->elements[i].value);
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

    SparseMatrix sparseMatrix;

    createSparseMatrix(&sparseMatrix, matrix, rows, cols);
    displaySparseMatrix(&sparseMatrix);

    return 0;
}