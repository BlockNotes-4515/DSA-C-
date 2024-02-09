/*12.Write a program to create two Linked lists from a given list in following way. Input List:-1 2 3 4 5 6 7 8 9 10
Output :
First list : 1 3 5 7 9
Second list : 2 4 6 8 10*/

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

void splitLinkedList(struct Node *head, struct Node **list1, struct Node **list2)
{
    struct Node *current = head;
    int count = 1;

    while (current != NULL)
    {
        if (count % 2 != 0)
        {
            insert(list1, current->data);
        }
        else
        {
            insert(list2, current->data);
        }
        current = current->next;
        count++;
    }
}

void display(struct Node *head)
{
    struct Node *current = head;

    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }

    printf("\n");
}

void freeList(struct Node *head)
{
    struct Node *current = head;
    struct Node *next;

    while (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }
}

int main()
{
    struct Node *inputList = NULL;
    struct Node *list1 = NULL;
    struct Node *list2 = NULL;

    int input[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(input) / sizeof(input[0]);

    for (int i = 0; i < size; i++)
    {
        insert(&inputList, input[i]);
    }

    splitLinkedList(inputList, &list1, &list2);

    printf("First list: ");
    display(list1);

    printf("Second list: ");
    display(list2);

    freeList(inputList);
    freeList(list1);
    freeList(list2);

    return 0;
}