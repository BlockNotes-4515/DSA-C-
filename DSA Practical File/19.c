/*19.Write a Program to convert an Infix form to Postfix form.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

// Stack implementation
struct Stack
{
    int top;
    char items[MAX_SIZE];
};

void initialize(struct Stack *stack)
{
    stack->top = -1;
}

int isEmpty(struct Stack *stack)
{
    return (stack->top == -1);
}

int isFull(struct Stack *stack)
{
    return (stack->top == MAX_SIZE - 1);
}

void push(struct Stack *stack, char item)
{
    if (isFull(stack))
    {
        printf("Stack overflow. Cannot push item.\n");
    }
    else
    {
        stack->top++;
        stack->items[stack->top] = item;
    }
}

char pop(struct Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("Stack underflow. Cannot pop item.\n");
        return '\0';
    }
    else
    {
        char item = stack->items[stack->top];
        stack->top--;
        return item;
    }
}

char peek(struct Stack *stack)
{
    if (isEmpty(stack))
    {
        return '\0';
    }
    else
    {
        return stack->items[stack->top];
    }
}

int isOperand(char ch)
{
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

int getPrecedence(char ch)
{
    switch (ch)
    {
    case '+':
    case '-':
        return 1;
    case '*':
    case '/':
        return 2;
    case '^':
        return 3;
    default:
        return -1;
    }
}

void infixToPostfix(char *infix, char *postfix)
{
    struct Stack stack;

    initialize(&stack);

    int infixLength = strlen(infix);
    int postfixIndex = 0;

    for (int i = 0; i < infixLength; i++)
    {
        char ch = infix[i];

        if (isOperand(ch))
        {
            postfix[postfixIndex++] = ch;
        }
        else if (ch == '(')
        {
            push(&stack, ch);
        }
        else if (ch == ')')
        {
            while (!isEmpty(&stack) && peek(&stack) != '(')
            {
                postfix[postfixIndex++] = pop(&stack);
            }
            // Pop and discard the opening parenthesis
            pop(&stack);
        }
        else
        {
            while (!isEmpty(&stack) && getPrecedence(ch) <= getPrecedence(peek(&stack)))
            {
                postfix[postfixIndex++] = pop(&stack);
            }
            push(&stack, ch);
        }
    }

    while (!isEmpty(&stack))
    {
        postfix[postfixIndex++] = pop(&stack);
    }

    postfix[postfixIndex] = '\0';
}

int main()
{
    char infix[MAX_SIZE];
    char postfix[MAX_SIZE];

    printf("Enter the infix expression: ");
    fgets(infix, sizeof(infix), stdin);
    infix[strcspn(infix, "\n")] = '\0';

    infixToPostfix(infix, postfix);

    printf("Postfix expression: %s\n", postfix);

    return 0;
}