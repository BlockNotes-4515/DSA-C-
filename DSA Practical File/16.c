/*16.Write a program that implements polynomial addition.*/

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int coefficient;
    int exponent;
    struct Node *next;
};

struct Node *createNode(int coefficient, int exponent)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->coefficient = coefficient;
    newNode->exponent = exponent;
    newNode->next = NULL;
    return newNode;
}

void insertTerm(struct Node **head, int coefficient, int exponent)
{
    struct Node *newNode = createNode(coefficient, exponent);

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

void displayPolynomial(struct Node *head)
{
    if (head == NULL)
    {
        printf("Polynomial is empty.\n");
        return;
    }

    struct Node *current = head;
    while (current != NULL)
    {
        printf("%dx^%d ", current->coefficient, current->exponent);
        if (current->next != NULL)
        {
            printf("+ ");
        }
        current = current->next;
    }
    printf("\n");
}

struct Node *addPolynomials(struct Node *poly1, struct Node *poly2)
{
    struct Node *result = NULL;

    while (poly1 != NULL && poly2 != NULL)
    {
        if (poly1->exponent > poly2->exponent)
        {
            insertTerm(&result, poly1->coefficient, poly1->exponent);
            poly1 = poly1->next;
        }
        else if (poly1->exponent < poly2->exponent)
        {
            insertTerm(&result, poly2->coefficient, poly2->exponent);
            poly2 = poly2->next;
        }
        else
        {
            int sum = poly1->coefficient + poly2->coefficient;
            if (sum != 0)
            {
                insertTerm(&result, sum, poly1->exponent);
            }
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
    }

    // Append remaining terms of poly1, if any
    while (poly1 != NULL)
    {
        insertTerm(&result, poly1->coefficient, poly1->exponent);
        poly1 = poly1->next;
    }

    // Append remaining terms of poly2, if any
    while (poly2 != NULL)
    {
        insertTerm(&result, poly2->coefficient, poly2->exponent);
        poly2 = poly2->next;
    }

    return result;
}

int main()
{
    struct Node *poly1 = NULL;
    struct Node *poly2 = NULL;
    struct Node *sum = NULL;

    // Creating first polynomial 3x^2 + 4x + 5
    insertTerm(&poly1, 3, 2);
    insertTerm(&poly1, 4, 1);
    insertTerm(&poly1, 5, 0);

    // Creating second polynomial 2x^3 + 1
    insertTerm(&poly2, 2, 3);
    insertTerm(&poly2, 1, 0);

    printf("First Polynomial: ");
    displayPolynomial(poly1);

    printf("Second Polynomial: ");
    displayPolynomial(poly2);

    sum = addPolynomials(poly1, poly2);

    printf("Sum of Polynomials: ");
    displayPolynomial(sum);

    return 0;
}