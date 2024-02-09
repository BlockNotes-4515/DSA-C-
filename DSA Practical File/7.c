/*7.Write a Program to perform Binary search in a sorted array.*/

#include <stdio.h>

#define MAX_SIZE 100

int binarySearch(const int array[], int size, int target)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (array[mid] == target)
        {
            return mid; // Return the index of the target element if found
        }
        else if (array[mid] < target)
        {
            left = mid + 1; // Discard the left half of the array
        }
        else
        {
            right = mid - 1; // Discard the right half of the array
        }
    }

    return -1; // Return -1 if the target element is not found
}

int main()
{
    int array[MAX_SIZE];
    int size, target;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array in sorted order:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Enter the target element to search: ");
    scanf("%d", &target);

    int index = binarySearch(array, size, target);

    if (index != -1)
    {
        printf("Element found at index %d.\n", index);
    }
    else
    {
        printf("Element not found in the array.\n");
    }

    return 0;
}