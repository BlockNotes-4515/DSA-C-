/*1.Write a program to implement one-dimensional  array
i)Insertion
ii)Deletion
iii)Traversal
iv)Reverse
v)Merge */

#include <stdio.h>

#define MAX_SIZE 100

void insertElement(int arr[], int *size, int element, int position)
{
    if (*size >= MAX_SIZE)
    {
        printf("Array is full. Cannot insert element.\n");
        return;
    }

    if (position < 0 || position > *size)
    {
        printf("Invalid position. Cannot insert element.\n");
        return;
    }

    // Shift elements to the right
    for (int i = *size - 1; i >= position; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[position] = element;
    (*size)++;
    printf("Element inserted successfully.\n");
}

void deleteElement(int arr[], int *size, int position)
{
    if (*size <= 0)
    {
        printf("Array is empty. Cannot delete element.\n");
        return;
    }

    if (position < 0 || position >= *size)
    {
        printf("Invalid position. Cannot delete element.\n");
        return;
    }

    // Shift elements to the left
    for (int i = position; i < *size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    (*size)--;
    printf("Element deleted successfully.\n");
}

void traverseArray(const int arr[], int size)
{
    printf("Array elements: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    printf("Array reversed successfully.\n");
}

void mergeArrays(const int arr1[], int size1, const int arr2[], int size2, int merged[])
{
    int i, j, k;
    i = j = k = 0;

    while (i < size1 && j < size2)
    {
        if (arr1[i] < arr2[j])
        {
            merged[k] = arr1[i];
            i++;
        }
        else
        {
            merged[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < size1)
    {
        merged[k] = arr1[i];
        i++;
        k++;
    }

    while (j < size2)
    {
        merged[k] = arr2[j];
        j++;
        k++;
    }
}

int main()
{
    int arr[MAX_SIZE];
    int size = 0;
    int choice, element, position;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0 || size > MAX_SIZE)
    {
        printf("Invalid size. Exiting the program.\n");
        return 0;
    }

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array created successfully.\n");

    while (1)
    {
        printf("\n1. Insertion\n");
        printf("2. Deletion\n");
        printf("3. Traversal\n");
        printf("4. Reverse\n");
        printf("5. Merge\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the element to insert: ");
            scanf("%d", &element);
            printf("Enter the position to insert: ");
            scanf("%d", &position);
            insertElement(arr, &size, element, position);
            break;

        case 2:
            printf("Enter the position to delete: ");
            scanf("%d", &position);
            deleteElement(arr, &size, position);
            break;

        case 3:
            traverseArray(arr, size);
            break;

        case 4:
            reverseArray(arr, size);
            break;

        case 5:
        {
            int arr2[MAX_SIZE];
            int size2;

            printf("Enter the size of the second array: ");
            scanf("%d", &size2);

            if (size2 <= 0 || size2 > MAX_SIZE)
            {
                printf("Invalid size. Cannot merge arrays.\n");
                break;
            }

            printf("Enter the elements of the second array:\n");
            for (int i = 0; i < size2; i++)
            {
                scanf("%d", &arr2[i]);
            }

            int merged[MAX_SIZE];
            mergeArrays(arr, size, arr2, size2, merged);

            printf("Merged array: ");
            traverseArray(merged, size + size2);

            break;
        }

        case 6:
            printf("Exiting the program.\n");
            return 0;

        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}