/*15.Write a Program to perform insertion and deletion on doubly linked list.*/

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

struct Node *createNode(int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

void insertAtBeginning(struct Node **head, int value)
{
    struct Node *newNode = createNode(value);

    if (*head == NULL)
    {
        *head = newNode;
    }
    else
    {
        newNode->next = *head;
        (*head)->prev = newNode;
        *head = newNode;
    }

    printf("Node inserted at the beginning.\n");
}

void insertAtEnd(struct Node **head, int value)
{
    struct Node *newNode = createNode(value);

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
        newNode->prev = current;
    }

    printf("Node inserted at the end.\n");
}

void deleteAtPosition(struct Node **head, int pos)
{
    if (*head == NULL)
    {
        printf("List is empty. Nothing to delete.\n");
        return;
    }

    struct Node *current = *head;
    int count = 1;

    // Find the node to be deleted
    while (current != NULL && count < pos)
    {
        current = current->next;
        count++;
    }

    // If position is invalid
    if (current == NULL)
    {
        printf("Invalid position. Nothing to delete.\n");
        return;
    }

    // If the node to be deleted is the head node
    if (current == *head)
    {
        *head = current->next;
        if (*head != NULL)
        {
            (*head)->prev = NULL;
        }
    }
    else
    {
        current->prev->next = current->next;
        if (current->next != NULL)
        {
            current->next->prev = current->prev;
        }
    }

    free(current);
    printf("Node deleted at position %d.\n", pos);
}

void display(struct Node *head)
{
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    printf("Doubly Linked List: ");
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
    int choice, value, pos;

    while (1)
    {
        printf("\nDoubly Linked List Operations:\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Delete at Position\n");
        printf("4. Display\n");
        printf("5. Exit\n");
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
            insertAtEnd(&head, value);
            break;
        case 3:
            printf("Enter the position to delete: ");
            scanf("%d", &pos);
            deleteAtPosition(&head, pos);
            break;
        case 4:
            display(head);
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}