/*14.Write a Program to implement circular linked list and perform operations on it.*/

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

void insertAtEnd(struct Node** head, int value) {
    struct Node* newNode = createNode(value);

    if (*head == NULL) {
        *head = newNode;
        newNode->next = *head;
    } else {
        struct Node* current = *head;
        while (current->next != *head) {
            current = current->next;
        }
        current->next = newNode;
        newNode->next = *head;
    }

    printf("Node inserted at the end.\n");
}

void display(struct Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    printf("Circular Linked List: ");
    struct Node* current = head;
    do {
        printf("%d ", current->data);
        current = current->next;
    } while (current != head);
    printf("\n");
}

void deleteAtPos(struct Node** head, int pos) {
    if (*head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }

    struct Node* current = *head;
    struct Node* prev = NULL;
    int count = 1;

    // Find the node to be deleted
    while (current->next != *head && count < pos) {
        prev = current;
        current = current->next;
        count++;
    }

    // If position is invalid
    if (count != pos) {
        printf("Invalid position. Nothing to delete.\n");
        return;
    }

    // If the node to be deleted is the head node
    if (current == *head) {
        // If it's the only node in the list
        if (current->next == *head) {
            *head = NULL;
        } else {
            // Move the head to the next node
            struct Node* last = *head;
            while (last->next != *head) {
                last = last->next;
            }
            *head = current->next;
            last->next = *head;
        }
    } else {
        // If the node to be deleted is in the middle or at the end
        prev->next = current->next;
    }

    free(current);
    printf("Node deleted at position %d.\n", pos);
}

int main() {
    struct Node* head = NULL;
    int choice, value, pos;

    while (1) {
        printf("\nCircular Linked List Operations:\n");
        printf("1. Insert at End\n");
        printf("2. Display\n");
        printf("3. Delete at Position\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to insert: ");
                scanf("%d", &value);
                insertAtEnd(&head, value);
                break;
            case 2:
                display(head);
                break;
            case 3:
                printf("Enter the position to delete: ");
                scanf("%d", &pos);
                deleteAtPos(&head, pos);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}