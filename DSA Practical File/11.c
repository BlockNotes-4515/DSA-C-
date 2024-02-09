/*11.Write a Program to implement student record which contains student name, roll number, average marks using Singly linked list.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student
{
    char name[50];
    int rollNumber;
    float averageMarks;
    struct Student *next;
};

void addStudent(struct Student **head, char name[], int rollNumber, float averageMarks)
{
    struct Student *newNode = (struct Student *)malloc(sizeof(struct Student));
    strcpy(newNode->name, name);
    newNode->rollNumber = rollNumber;
    newNode->averageMarks = averageMarks;
    newNode->next = NULL;

    if (*head == NULL)
    {
        *head = newNode;
    }
    else
    {
        struct Student *current = *head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newNode;
    }
}

void displayStudents(struct Student *head)
{
    if (head == NULL)
    {
        printf("No students in the record.\n");
        return;
    }

    printf("Student Record:\n");
    printf("---------------------------------------------------\n");
    printf("Roll Number\tName\t\tAverage Marks\n");
    printf("---------------------------------------------------\n");

    struct Student *current = head;
    while (current != NULL)
    {
        printf("%d\t\t%s\t\t%.2f\n", current->rollNumber, current->name, current->averageMarks);
        current = current->next;
    }
    printf("---------------------------------------------------\n");
}

int main()
{
    struct Student *head = NULL;
    char name[50];
    int rollNumber;
    float averageMarks;
    int choice;

    while (1)
    {
        printf("\nStudent Record Menu:\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter student name: ");
            scanf("%s", name);
            printf("Enter roll number: ");
            scanf("%d", &rollNumber);
            printf("Enter average marks: ");
            scanf("%f", &averageMarks);
            addStudent(&head, name, rollNumber, averageMarks);
            break;
        case 2:
            displayStudents(head);
            break;
        case 3:
            exit(0);
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}