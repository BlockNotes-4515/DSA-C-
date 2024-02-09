/*8.Write a Program to perform Bubble and Insertion sort.*/

#include <stdio.h>

#define MAX_SIZE 100

void bubbleSort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                // Swap elements if they are in the wrong order
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void insertionSort(int array[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int key = array[i];
        int j = i - 1;

        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j--;
        }

        array[j + 1] = key;
    }
}

void displayArray(const int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main()
{
    int array[MAX_SIZE];
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Original Array: ");
    displayArray(array, size);

    // Bubble Sort
    bubbleSort(array, size);
    printf("After Bubble Sort: ");
    displayArray(array, size);

    // Reset the array to its original order
    for (int i = 0; i < size; i++)
    {
        array[i] = size - i;
    }

    // Insertion Sort
    insertionSort(array, size);
    printf("After Insertion Sort: ");
    displayArray(array, size);

    return 0;
}