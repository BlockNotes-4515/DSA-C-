/*10.Write a Program to perform insertion (Beg,Pos,end), deletion (Beg,Pos,End) and traversing on linear linked list.*/

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void insertAtBeginning(struct Node **head, int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = *head;
    *head = newNode;
}

void insertAtPosition(struct Node **head, int value, int position)
{
    if (position == 1)
    {
        insertAtBeginning(head, value);
        return;
    }

    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;

    struct Node *current = *head;
    struct Node *previous = NULL;
    int currentPosition = 1;

    while (current != NULL && currentPosition < position)
    {
        previous = current;
        current = current->next;
        currentPosition++;
    }

    if (currentPosition < position)
    {
        printf("Invalid position\n");
        return;
    }

    newNode->next = current;
    previous->next = newNode;
}

void insertAtEnd(struct Node **head, int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (*head == NULL)
    {
        *head = newNode;
        return;
    }

    struct Node *current = *head;
    while (current->next != NULL)
    {
        current = current->next;
    }

    current->next = newNode;
}

void deleteAtBeginning(struct Node **head)
{
    if (*head == NULL)
    {
        printf("List is empty. No element to delete.\n");
        return;
    }

    struct Node *temp = *head;
    *head = (*head)->next;
    free(temp);
}

void deleteAtPosition(struct Node **head, int position)
{
    if (*head == NULL)
    {
        printf("List is empty. No element to delete.\n");
        return;
    }

    struct Node *current = *head;
    struct Node *previous = NULL;
    int currentPosition = 1;

    while (current != NULL && currentPosition < position)
    {
        previous = current;
        current = current->next;
        currentPosition++;
    }

    if (current == NULL)
    {
        printf("Invalid position\n");
        return;
    }

    if (previous == NULL)
    {
        *head = current->next;
    }
    else
    {
        previous->next = current->next;
    }

    free(current);
}

void deleteAtEnd(struct Node **head)
{
    if (*head == NULL)
    {
        printf("List is empty. No element to delete.\n");
        return;
    }

    if ((*head)->next == NULL)
    {
        struct Node *temp = *head;
        *head = NULL;
        free(temp);
        return;
    }

    struct Node *current = *head;
    struct Node *previous = NULL;

    while (current->next != NULL)
    {
        previous = current;
        current = current->next;
    }

    previous->next = NULL;
    free(current);
}

void traverse(struct Node *head)
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

int main()
{
    struct Node *head = NULL;
    int choice, value, position;

    while (1)
    {
        printf("1. Insert at beginning\n");
        printf("2. Insert at position\n");
        printf("3. Insert at end\n");
        printf("4. Delete from beginning\n");
        printf("5. Delete from position\n");
        printf("6. Delete from end\n");
        printf("7. Traverse\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the value to insert: ");
            scanf("%d", &value);
            insertAtBeginning(&head, value);
            break;
        case 2:
            printf("Enter the value to insert: ");
            scanf("%d", &value);
            printf("Enter the position: ");
            scanf("%d", &position);
            insertAtPosition(&head, value, position);
            break;
        case 3:
            printf("Enter the value to insert: ");
            scanf("%d", &value);
            insertAtEnd(&head, value);
            break;
        case 4:
            deleteAtBeginning(&head);
            break;
        case 5:
            printf("Enter the position: ");
            scanf("%d", &position);
            deleteAtPosition(&head, position);
            break;
        case 6:
            deleteAtEnd(&head);
            break;
        case 7:
            traverse(head);
            break;
        case 8:
            exit(0);
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}