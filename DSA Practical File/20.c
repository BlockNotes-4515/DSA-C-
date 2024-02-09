/*20.Write a Program that implements static and dynamic Linear queue.*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5

// Static Queue implementation
struct StaticQueue
{
    int front, rear;
    int items[MAX_SIZE];
};

void initializeStaticQueue(struct StaticQueue *queue)
{
    queue->front = -1;
    queue->rear = -1;
}

int isStaticQueueEmpty(struct StaticQueue *queue)
{
    return (queue->front == -1 && queue->rear == -1);
}

int isStaticQueueFull(struct StaticQueue *queue)
{
    return ((queue->rear + 1) % MAX_SIZE == queue->front);
}

void enqueueStatic(struct StaticQueue *queue, int item)
{
    if (isStaticQueueFull(queue))
    {
        printf("Static Queue overflow. Cannot enqueue item.\n");
    }
    else if (isStaticQueueEmpty(queue))
    {
        queue->front = 0;
        queue->rear = 0;
        queue->items[queue->rear] = item;
    }
    else
    {
        queue->rear = (queue->rear + 1) % MAX_SIZE;
        queue->items[queue->rear] = item;
    }
}

int dequeueStatic(struct StaticQueue *queue)
{
    if (isStaticQueueEmpty(queue))
    {
        printf("Static Queue underflow. Cannot dequeue item.\n");
        return -1;
    }
    else if (queue->front == queue->rear)
    {
        int item = queue->items[queue->front];
        queue->front = -1;
        queue->rear = -1;
        return item;
    }
    else
    {
        int item = queue->items[queue->front];
        queue->front = (queue->front + 1) % MAX_SIZE;
        return item;
    }
}

void displayStaticQueue(struct StaticQueue *queue)
{
    if (isStaticQueueEmpty(queue))
    {
        printf("Static Queue is empty.\n");
    }
    else
    {
        printf("Static Queue: ");
        int i = queue->front;
        while (i != queue->rear)
        {
            printf("%d ", queue->items[i]);
            i = (i + 1) % MAX_SIZE;
        }
        printf("%d\n", queue->items[i]);
    }
}

// Dynamic Queue implementation
struct DynamicQueue
{
    int front, rear;
    int capacity;
    int *items;
};

void initializeDynamicQueue(struct DynamicQueue *queue, int capacity)
{
    queue->front = -1;
    queue->rear = -1;
    queue->capacity = capacity;
    queue->items = (int *)malloc(sizeof(int) * capacity);
}

int isDynamicQueueEmpty(struct DynamicQueue *queue)
{
    return (queue->front == -1 && queue->rear == -1);
}

int isDynamicQueueFull(struct DynamicQueue *queue)
{
    return ((queue->rear + 1) % queue->capacity == queue->front);
}

void enqueueDynamic(struct DynamicQueue *queue, int item)
{
    if (isDynamicQueueFull(queue))
    {
        printf("Dynamic Queue overflow. Increasing capacity...\n");
        queue->capacity *= 2;
        queue->items = (int *)realloc(queue->items, sizeof(int) * queue->capacity);
    }
    if (isDynamicQueueEmpty(queue))
    {
        queue->front = 0;
        queue->rear = 0;
        queue->items[queue->rear] = item;
    }
    else
    {
        queue->rear = (queue->rear + 1) % queue->capacity;
        queue->items[queue->rear] = item;
    }
}

int dequeueDynamic(struct DynamicQueue *queue)
{
    if (isDynamicQueueEmpty(queue))
    {
        printf("Dynamic Queue underflow. Cannot dequeue item.\n");
        return -1;
    }
    if (queue->front == queue->rear)
    {
        int item = queue->items[queue->front];
        queue->front = -1;
        queue->rear = -1;
        return item;
    }
    else
    {
        int item = queue->items[queue->front];
        queue->front = (queue->front + 1) % queue->capacity;
        return item;
    }
}

void displayDynamicQueue(struct DynamicQueue *queue)
{
    if (isDynamicQueueEmpty(queue))
    {
        printf("Dynamic Queue is empty.\n");
    }
    else
    {
        printf("Dynamic Queue: ");
        int i = queue->front;
        while (i != queue->rear)
        {
            printf("%d ", queue->items[i]);
            i = (i + 1) % queue->capacity;
        }
        printf("%d\n", queue->items[i]);
    }
}

int main()
{
    struct StaticQueue staticQueue;
    struct DynamicQueue dynamicQueue;

    initializeStaticQueue(&staticQueue);

    int choice, item, capacity;
    printf("Enter the capacity of the dynamic queue: ");
    scanf("%d", &capacity);
    initializeDynamicQueue(&dynamicQueue, capacity);

    do
    {
        printf("\n");
        printf("------ Menu ------\n");
        printf("1. Enqueue (Static Queue)\n");
        printf("2. Dequeue (Static Queue)\n");
        printf("3. Display (Static Queue)\n");
        printf("4. Enqueue (Dynamic Queue)\n");
        printf("5. Dequeue (Dynamic Queue)\n");
        printf("6. Display (Dynamic Queue)\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the item to enqueue (Static Queue): ");
            scanf("%d", &item);
            enqueueStatic(&staticQueue, item);
            break;
        case 2:
            item = dequeueStatic(&staticQueue);
            if (item != -1)
            {
                printf("Dequeued item (Static Queue): %d\n", item);
            }
            break;
        case 3:
            displayStaticQueue(&staticQueue);
            break;
        case 4:
            printf("Enter the item to enqueue (Dynamic Queue): ");
            scanf("%d", &item);
            enqueueDynamic(&dynamicQueue, item);
            break;
        case 5:
            item = dequeueDynamic(&dynamicQueue);
            if (item != -1)
            {
                printf("Dequeued item (Dynamic Queue): %d\n", item);
            }
            break;
        case 6:
            displayDynamicQueue(&dynamicQueue);
            break;
        case 0:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
            break;
        }
    } while (choice != 0);

    return 0;
}