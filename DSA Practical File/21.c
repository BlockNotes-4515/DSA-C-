/*21.Write a Program that implements static and dynamic Circular queue.*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5

// Static Circular Queue implementation
struct StaticCircularQueue
{
    int front, rear;
    int items[MAX_SIZE];
};

void initializeStaticCircularQueue(struct StaticCircularQueue *queue)
{
    queue->front = -1;
    queue->rear = -1;
}

int isStaticCircularQueueEmpty(struct StaticCircularQueue *queue)
{
    return (queue->front == -1 && queue->rear == -1);
}

int isStaticCircularQueueFull(struct StaticCircularQueue *queue)
{
    return ((queue->rear + 1) % MAX_SIZE == queue->front);
}

void enqueueStaticCircular(struct StaticCircularQueue *queue, int item)
{
    if (isStaticCircularQueueFull(queue))
    {
        printf("Static Circular Queue overflow. Cannot enqueue item.\n");
    }
    else if (isStaticCircularQueueEmpty(queue))
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

int dequeueStaticCircular(struct StaticCircularQueue *queue)
{
    if (isStaticCircularQueueEmpty(queue))
    {
        printf("Static Circular Queue underflow. Cannot dequeue item.\n");
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

void displayStaticCircularQueue(struct StaticCircularQueue *queue)
{
    if (isStaticCircularQueueEmpty(queue))
    {
        printf("Static Circular Queue is empty.\n");
    }
    else
    {
        printf("Static Circular Queue: ");
        int i = queue->front;
        while (i != queue->rear)
        {
            printf("%d ", queue->items[i]);
            i = (i + 1) % MAX_SIZE;
        }
        printf("%d\n", queue->items[i]);
    }
}

// Dynamic Circular Queue implementation
struct DynamicCircularQueue
{
    int front, rear;
    int capacity;
    int *items;
};

void initializeDynamicCircularQueue(struct DynamicCircularQueue *queue, int capacity)
{
    queue->front = -1;
    queue->rear = -1;
    queue->capacity = capacity;
    queue->items = (int *)malloc(sizeof(int) * capacity);
}

int isDynamicCircularQueueEmpty(struct DynamicCircularQueue *queue)
{
    return (queue->front == -1 && queue->rear == -1);
}

int isDynamicCircularQueueFull(struct DynamicCircularQueue *queue)
{
    return ((queue->rear + 1) % queue->capacity == queue->front);
}

void enqueueDynamicCircular(struct DynamicCircularQueue *queue, int item)
{
    if (isDynamicCircularQueueFull(queue))
    {
        printf("Dynamic Circular Queue overflow. Increasing capacity...\n");
        queue->capacity *= 2;
        queue->items = (int *)realloc(queue->items, sizeof(int) * queue->capacity);
    }
    if (isDynamicCircularQueueEmpty(queue))
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

int dequeueDynamicCircular(struct DynamicCircularQueue *queue)
{
    if (isDynamicCircularQueueEmpty(queue))
    {
        printf("Dynamic Circular Queue underflow. Cannot dequeue item.\n");
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

void displayDynamicCircularQueue(struct DynamicCircularQueue *queue)
{
    if (isDynamicCircularQueueEmpty(queue))
    {
        printf("Dynamic Circular Queue is empty.\n");
    }
    else
    {
        printf("Dynamic Circular Queue: ");
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
    struct StaticCircularQueue staticCircularQueue;
    struct DynamicCircularQueue dynamicCircularQueue;

    initializeStaticCircularQueue(&staticCircularQueue);

    int choice, item, capacity;
    printf("Enter the capacity of the dynamic circular queue: ");
    scanf("%d", &capacity);
    initializeDynamicCircularQueue(&dynamicCircularQueue, capacity);

    do
    {
        printf("\n");
        printf("------ Menu ------\n");
        printf("1. Enqueue (Static Circular Queue)\n");
        printf("2. Dequeue (Static Circular Queue)\n");
        printf("3. Display (Static Circular Queue)\n");
        printf("4. Enqueue (Dynamic Circular Queue)\n");
        printf("5. Dequeue (Dynamic Circular Queue)\n");
        printf("6. Display (Dynamic Circular Queue)\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the item to enqueue (Static Circular Queue): ");
            scanf("%d", &item);
            enqueueStaticCircular(&staticCircularQueue, item);
            break;
        case 2:
            item = dequeueStaticCircular(&staticCircularQueue);
            if (item != -1)
            {
                printf("Dequeued item (Static Circular Queue): %d\n", item);
            }
            break;
        case 3:
            displayStaticCircularQueue(&staticCircularQueue);
            break;
        case 4:
            printf("Enter the item to enqueue (Dynamic Circular Queue): ");
            scanf("%d", &item);
            enqueueDynamicCircular(&dynamicCircularQueue, item);
            break;
        case 5:
            item = dequeueDynamicCircular(&dynamicCircularQueue);
            if (item != -1)
            {
                printf("Dequeued item (Dynamic Circular Queue): %d\n", item);
            }
            break;
        case 6:
            displayDynamicCircularQueue(&dynamicCircularQueue);
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