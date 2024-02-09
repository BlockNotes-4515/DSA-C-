/*22.Write a Program to create binary search tree and perform following operations:
1.Insertion
2.Deletion
3.Height of the tree
4.Searching
5.Display the binary tree */

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *createNode(int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct Node *insert(struct Node *root, int value)
{
    if (root == NULL)
    {
        return createNode(value);
    }

    if (value < root->data)
    {
        root->left = insert(root->left, value);
    }
    else
    {
        root->right = insert(root->right, value);
    }

    return root;
}

struct Node *minValueNode(struct Node *node)
{
    struct Node *current = node;
    while (current && current->left != NULL)
    {
        current = current->left;
    }
    return current;
}

struct Node *deleteNode(struct Node *root, int value)
{
    if (root == NULL)
    {
        return root;
    }

    if (value < root->data)
    {
        root->left = deleteNode(root->left, value);
    }
    else if (value > root->data)
    {
        root->right = deleteNode(root->right, value);
    }
    else
    {
        if (root->left == NULL)
        {
            struct Node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct Node *temp = root->left;
            free(root);
            return temp;
        }

        struct Node *temp = minValueNode(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

int getHeight(struct Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        int leftHeight = getHeight(root->left);
        int rightHeight = getHeight(root->right);
        return (leftHeight > rightHeight) ? (leftHeight + 1) : (rightHeight + 1);
    }
}

struct Node *search(struct Node *root, int value)
{
    if (root == NULL || root->data == value)
    {
        return root;
    }

    if (value < root->data)
    {
        return search(root->left, value);
    }
    else
    {
        return search(root->right, value);
    }
}

void inorderTraversal(struct Node *root)
{
    if (root != NULL)
    {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

void display(struct Node *root)
{
    if (root == NULL)
    {
        printf("Binary Search Tree is empty.\n");
    }
    else
    {
        printf("Binary Search Tree: ");
        inorderTraversal(root);
        printf("\n");
    }
}

int main()
{
    struct Node *root = NULL;
    int choice, value;
    struct Node *searchResult;

    do
    {
        printf("\n");
        printf("------ Menu ------\n");
        printf("1. Insertion\n");
        printf("2. Deletion\n");
        printf("3. Height of the Tree\n");
        printf("4. Searching\n");
        printf("5. Display\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the value to insert: ");
            scanf("%d", &value);
            root = insert(root, value);
            printf("Value %d inserted successfully.\n", value);
            break;
        case 2:
            printf("Enter the value to delete: ");
            scanf("%d", &value);
            root = deleteNode(root, value);
            printf("Value %d deleted successfully.\n", value);
            break;
        case 3:
            printf("Height of the tree: %d\n", getHeight(root));
            break;
        case 4:
            printf("Enter the value to search: ");
            scanf("%d", &value);
            searchResult = search(root, value);
            if (searchResult != NULL)
            {
                printf("Value %d found in the tree.\n", value);
            }
            else
            {
                printf("Value %d not found in the tree.\n", value);
            }
            break;
        case 5:
            display(root);
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