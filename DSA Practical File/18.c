/*18.Write a Program to convert an Infix expression to Prefix form.*/

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

void reverseString(char *str)
{
    int length = strlen(str);
    int i, j;
    char temp;
    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

void infixToPrefix(char *infix, char *prefix)
{
    struct Stack operatorStack;
    struct Stack prefixStack;

    initialize(&operatorStack);
    initialize(&prefixStack);

    int infixLength = strlen(infix);
    reverseString(infix);

    for (int i = 0; i < infixLength; i++)
    {
        char ch = infix[i];

        if (isOperand(ch))
        {
            push(&prefixStack, ch);
        }
        else if (ch == ')')
        {
            push(&operatorStack, ch);
        }
        else if (ch == '(')
        {
            while (!isEmpty(&operatorStack) && peek(&operatorStack) != ')')
            {
                push(&prefixStack, pop(&operatorStack));
            }
            // Pop and discard the closing parenthesis
            pop(&operatorStack);
        }
        else
        {
            while (!isEmpty(&operatorStack) && getPrecedence(ch) <= getPrecedence(peek(&operatorStack)))
            {
                push(&prefixStack, pop(&operatorStack));
            }
            push(&operatorStack, ch);
        }
    }

    while (!isEmpty(&operatorStack))
    {
        push(&prefixStack, pop(&operatorStack));
    }

    // Copy the prefix expression from the stack to the result string
    int prefixIndex = 0;
    while (!isEmpty(&prefixStack))
    {
        prefix[prefixIndex++] = pop(&prefixStack);
    }
    prefix[prefixIndex] = '\0';

    // Reverse the prefix expression to get the final result
    reverseString(prefix);
}

int main()
{
    char infix[MAX_SIZE];
    char prefix[MAX_SIZE];

    printf("Enter the infix expression: ");
    fgets(infix, sizeof(infix), stdin);
    infix[strcspn(infix, "\n")] = '\0';

    infixToPrefix(infix, prefix);

    printf("Prefix expression: %s\n", prefix);

    return 0;
}