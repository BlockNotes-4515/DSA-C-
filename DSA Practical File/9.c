/*9.Write a Program to perform Selection sort and Merge sort.*/

#include <stdio.h>

#define MAX_SIZE 100

void selectionSort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;

        // Find the index of the minimum element in the remaining unsorted part
        for (int j = i + 1; j < size; j++)
        {
            if (array[j] < array[minIndex])
            {
                minIndex = j;
            }
        }

        // Swap the minimum element with the current element
        int temp = array[i];
        array[i] = array[minIndex];
        array[minIndex] = temp;
    }
}

void merge(int array[], int left, int middle, int right)
{
    int i, j, k;
    int n1 = middle - left + 1;
    int n2 = right - middle;

    // Create temporary arrays
    int leftArray[n1], rightArray[n2];

    // Copy data to temporary arrays
    for (i = 0; i < n1; i++)
    {
        leftArray[i] = array[left + i];
    }
    for (j = 0; j < n2; j++)
    {
        rightArray[j] = array[middle + 1 + j];
    }

    // Merge the temporary arrays back into the original array
    i = 0;    // Initial index of the left subarray
    j = 0;    // Initial index of the right subarray
    k = left; // Initial index of the merged subarray

    while (i < n1 && j < n2)
    {
        if (leftArray[i] <= rightArray[j])
        {
            array[k] = leftArray[i];
            i++;
        }
        else
        {
            array[k] = rightArray[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of the left subarray, if any
    while (i < n1)
    {
        array[k] = leftArray[i];
        i++;
        k++;
    }

    // Copy the remaining elements of the right subarray, if any
    while (j < n2)
    {
        array[k] = rightArray[j];
        j++;
        k++;
    }
}

void mergeSort(int array[], int left, int right)
{
    if (left < right)
    {
        int middle = left + (right - left) / 2;

        // Sort the left and right halves
        mergeSort(array, left, middle);
        mergeSort(array, middle + 1, right);

        // Merge the sorted halves
        merge(array, left, middle, right);
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

    // Selection Sort
    selectionSort(array, size);
    printf("After Selection Sort: ");
    displayArray(array, size);

    // Reset the array to its original order
    for (int i = 0; i < size; i++)
    {
        array[i] = size - i;
    }

    // Merge Sort
    mergeSort(array, 0, size - 1);
    printf("After Merge Sort: ");
    displayArray(array, size);

    return 0;
}