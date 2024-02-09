/*13.Write a Menu Driven program to implement searching, sorting and Reversing in Linear Linked List.*/

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void insert(struct Node **head, int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (*head == NULL)
    {
        *head = newNode;
    }
    else
    {
        struct Node *current = *head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newNode;
    }
}

void display(struct Node *head)
{
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    struct Node *current = head;
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

struct Node *search(struct Node *head, int key)
{
    struct Node *current = head;

    while (current != NULL)
    {
        if (current->data == key)
        {
            return current;
        }
        current = current->next;
    }

    return NULL;
}

void reverse(struct Node **head)
{
    struct Node *current = *head;
    struct Node *prev = NULL;
    struct Node *next = NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    *head = prev;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(struct Node *head)
{
    struct Node *current = head;
    struct Node *index = NULL;

    if (head == NULL)
    {
        return;
    }

    while (current != NULL)
    {
        index = current->next;

        while (index != NULL)
        {
            if (current->data > index->data)
            {
                swap(&(current->data), &(index->data));
            }
            index = index->next;
        }

        current = current->next;
    }
}

int main()
{
    struct Node *head = NULL;
    int choice, value, key;

    while (1)
    {
        printf("\nLinear Linked List Operations:\n");
        printf("1. Insert\n");
        printf("2. Display\n");
        printf("3. Search\n");
        printf("4. Reverse\n");
        printf("5. Sort\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the value to insert: ");
            scanf("%d", &value);
            insert(&head, value);
            break;
        case 2:
            display(head);
            break;
        case 3:
            printf("Enter the key to search: ");
            scanf("%d", &key);
            if (search(head, key) != NULL)
            {
                printf("Key found in the list.\n");
            }
            else
            {
                printf("Key not found in the list.\n");
            }
            break;
        case 4:
            reverse(&head);
            printf("List reversed successfully.\n");
            break;
        case 5:
            sort(head);
            printf("List sorted successfully.\n");
            break;
        case 6:
            exit(0);
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}