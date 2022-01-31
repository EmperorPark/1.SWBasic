#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int getMax(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

typedef struct Node
{
    int data;
    int height;
    struct Node *leftChild;
    struct Node *rightChild;
} Node;

int getHeight(Node *node)
{
    if (node == NULL)
        return 0;
    return node->height;
}

void setHeight(Node *node)
{
    node->height = getMax(getHeight(node->leftChild), getHeight(node->rightChild)) + 1;
}

int getDifference(Node *node)
{
    if (node == NULL)
        return 0;
    Node *leftChild = node->leftChild;
    Node *rightChild = node->rightChild;
    return getHeight(leftChild) - getHeight(rightChild);
}

Node *rotateLL(Node *node)
{
    Node *leftChild = node->leftChild;
    node->leftChild = leftChild->rightChild;
    leftChild->rightChild = node;
    setHeight(node);
    return leftChild;
}

Node *rotateRR(Node *node)
{
    Node *rightChild = node->rightChild;
    node->rightChild = rightChild->leftChild;
    rightChild->leftChild = node;
    setHeight(node);
    return rightChild;
}

Node *rotateLR(Node *node)
{
    Node *leftChild = node->leftChild;
    node->leftChild = rotateRR(leftChild);
    setHeight(node->leftChild);
    return rotateLL(node);
}

Node *rotateRL(Node *node)
{
    Node *rightChild = node->rightChild;
    node->rightChild = rotateLL(rightChild);
    setHeight(node->rightChild);
    return rotateRR(node);
}

Node *balance(Node *node)
{
    int difference = getDifference(node);
    if (difference >= 2)
    {
        if (getDifference(node->leftChild) >= 1)
        {
            node = rotateLL(node);
        }
        else
        {
            node = rotateLR(node);
        }
    }
    else if (difference <= -2)
    {
        if (getDifference(node->rightChild) <= -1)
        {
            node = rotateRR(node);
        }
        else
        {
            node = rotateRL(node);
        }
    }
    setHeight(node);
    return node;
}

Node *insertNode(Node *node, int data)
{
    if (!node)
    {
        node = (Node*)malloc(sizeof(Node));
        node->data = data;
        node->height = 1;
        node->leftChild = node->rightChild = NULL;
    }
    else if (data < node->data)
    {
        node->leftChild = insertNode(node->leftChild, data);
        node = balance(node);
    }
    else if (data > node->data)
    {
        node->rightChild = insertNode(node->rightChild, data);
        node = balance(node);
    }
    else
    {
        printf("데이터 중복이 발생 했습니다.\n");
    }
    return node;
}

Node *root = NULL;

void display(Node *node, int level)
{
    if (node != NULL)
    {
        display(node->rightChild, level + 1);
        printf("\n");
        if (node == root)
        {
            printf("Root:");
        }
        for (int i = 0; i < level && node != root; i++)
        {
            printf("|----");
        }
        printf("%d(%d)", node->data, getHeight(node));
        display(node->leftChild, level + 1);
    }
}

int main()
{
    root = insertNode(root, 7);
    display(root, 1);
    printf("\n");
    root = insertNode(root, 6);
    display(root, 1);
    printf("\n");
    root = insertNode(root, 5);
    display(root, 1);
    printf("\n");
    root = insertNode(root, 3);
    display(root, 1);
    printf("\n");
    root = insertNode(root, 1);
    display(root, 1);
    printf("\n");
    root = insertNode(root, 9);
    display(root, 1);
    printf("\n");
    root = insertNode(root, 8);
    display(root, 1);
    printf("\n");
    root = insertNode(root, 12);
    display(root, 1);
    printf("\n");
    root = insertNode(root, 16);
    display(root, 1);
    printf("\n");
    root = insertNode(root, 18);
    display(root, 1);
    printf("\n");
    root = insertNode(root, 23);
    display(root, 1);
    printf("\n");
    root = insertNode(root, 21);
    display(root, 1);
    printf("\n");
    root = insertNode(root, 14);
    display(root, 1);
    printf("\n");
    root = insertNode(root, 15);
    display(root, 1);
    printf("\n");
    root = insertNode(root, 19);
    display(root, 1);
    printf("\n");
    root = insertNode(root, 20);
    display(root, 1);
    printf("\n");

    system("pause");
    return 0;
}