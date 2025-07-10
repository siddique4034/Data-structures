#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*firstNode=NULL;


void createNode(int n)
{
    int i;
    struct Node *newNode, *lastNode;

    firstNode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the data of First node\n");
    scanf("%d", &firstNode->data);
    firstNode->next = NULL;
    lastNode = firstNode;
    
    for (i=0; i<n; i++)
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));
        printf("\nEnter the data of %dth Node\n", i+2);
        scanf("%d", &newNode->data);
        newNode->next = NULL;
        lastNode->next = newNode;
        lastNode = newNode;
    }
}


void display(struct Node *p)
{
    while (p != NULL)
    {
        printf("Element is %d at address %d\n", p->data, p);
        p = p->next;
    }
    
}


int main()
{
    printf("Linked List\n\n");
    createNode(4);
    display(firstNode);

    return 0;
}

