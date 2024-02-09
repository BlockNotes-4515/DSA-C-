/*17.Write a menu-driven program that implements static and dynamic stack.*/

#include <stdio.h>
#include <stdlib.h>

// Static Stack
#define MAX_SIZE 10

struct StaticStack
{
    int items[MAX_SIZE];
    int top;
};

void initializeStaticStack(struct StaticStack *stack)
{
    stack->top = -1;
}

int isStaticStackEmpty(struct StaticStack *stack)
{
    return (stack->top == -1);
}

int isStaticStackFull(struct StaticStack *stack)
{
    return (stack->top == MAX_SIZE - 1);
}

void pushStatic(struct StaticStack *stack, int item)
{
    if (isStaticStackFull(stack))
    {
        printf("Stack overflow. Cannot push item.\n");
    }
    else
    {
        stack->top++;
        stack->items[stack->top] = item;
        printf("Pushed item: %d\n", item);
    }
}

int popStatic(struct StaticStack *stack)
{
    if (isStaticStackEmpty(stack))
    {
        printf("Stack underflow. Cannot pop item.\n");
        return -1;
    }
    else
    {
        int item = stack->items[stack->top];
        stack->top--;
        printf("Popped item: %d\n", item);
        return item;
    }
}

void displayStaticStack(struct StaticStack *stack)
{
    if (isStaticStackEmpty(stack))
    {
        printf("Static Stack is empty.\n");
    }
    else
    {
        printf("Static Stack contents: ");
        for (int i = 0; i <= stack->top; i++)
        {
            printf("%d ", stack->items[i]);
        }
        printf("\n");
    }
}

// Dynamic Stack

struct DynamicStackNode
{
    int data;
    struct DynamicStackNode *next;
};

struct DynamicStack
{
    struct DynamicStackNode *top;
};

void initializeDynamicStack(struct DynamicStack *stack)
{
    stack->top = NULL;
}

int isDynamicStackEmpty(struct DynamicStack *stack)
{
    return (stack->top == NULL);
}

void pushDynamic(struct DynamicStack *stack, int item)
{
    struct DynamicStackNode *newNode = (struct DynamicStackNode *)malloc(sizeof(struct DynamicStackNode));
    newNode->data = item;
    newNode->next = stack->top;
    stack->top = newNode;
    printf("Pushed item: %d\n", item);
}

int popDynamic(struct DynamicStack *stack)
{
    if (isDynamicStackEmpty(stack))
    {
        printf("Stack underflow. Cannot pop item.\n");
        return -1;
    }
    else
    {
        struct DynamicStackNode *temp = stack->top;
        int item = temp->data;
        stack->top = temp->next;
        free(temp);
        printf("Popped item: %d\n", item);
        return item;
    }
}

void displayDynamicStack(struct DynamicStack *stack)
{
    if (isDynamicStackEmpty(stack))
    {
        printf("Dynamic Stack is empty.\n");
    }
    else
    {
        printf("Dynamic Stack contents: ");
        struct DynamicStackNode *current = stack->top;
        while (current != NULL)
        {
            printf("%d ", current->data);
            current = current->next;
        }
        printf("\n");
    }
}

int main()
{
    struct StaticStack staticStack;
    struct DynamicStack dynamicStack;
    int choice, item;

    initializeStaticStack(&staticStack);
    initializeDynamicStack(&dynamicStack);

    do
    {
        printf("---- Menu ----\n");
        printf("1. Push to Static Stack\n");
        printf("2. Pop from Static Stack\n");
        printf("3. Display Static Stack\n");
        printf("4. Push to Dynamic Stack\n");
        printf("5. Pop from Dynamic Stack\n");
        printf("6. Display Dynamic Stack\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter item to push: ");
            scanf("%d", &item);
            pushStatic(&staticStack, item);
            break;
        case 2:
            popStatic(&staticStack);
            break;
        case 3:
            displayStaticStack(&staticStack);
            break;
        case 4:
            printf("Enter item to push: ");
            scanf("%d", &item);
            pushDynamic(&dynamicStack, item);
            break;
        case 5:
            popDynamic(&dynamicStack);
            break;
        case 6:
            displayDynamicStack(&dynamicStack);
            break;
        case 0:
            printf("Exiting program.\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
            break;
        }
    } while (choice != 0);

    return 0;
}