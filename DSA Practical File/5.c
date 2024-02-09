/*5.Write a Program to perform Linear search in an unsorted array.*/

#include <stdio.h>

#define MAX_SIZE 100

int linearSearch(const int array[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == target)
        {
            return i; // Return the index of the target element if found
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

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Enter the target element to search: ");
    scanf("%d", &target);

    int index = linearSearch(array, size, target);

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