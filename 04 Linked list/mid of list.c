#include <stdio.h>
#include <stdlib.h>


struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
}*first=NULL;


void create(int A[], int n)
{
    int i;
    struct Node *last, *t;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->prev = NULL;
    first->data = A[0];
    first->next = NULL;
    last = first;
    
    for (i=1; i<n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->prev = last;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}


void display(struct Node *p){
    while(p!=NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }    
}


int nodeLength(struct Node *p)
{
    int count = 0;
    while(p != NULL)
    {
        count++;
        p = p->next;
    }
    return count;
}


int nodeMid1(struct Node *p)
{
    int length_of_node = nodeLength(p);
    int mid_index = length_of_node/2;
    
    for (int i=0; i<mid_index; i++)
    {
        p = p->next;
    }
    return p->data;
}


int nodeMid2(struct Node *first)
{
    struct Node *p, *q;
    p=q=first;
    while (q != NULL)
    {
        q = q->next;
        if (q != NULL)
        {
            q = q->next;
        }
        if (q != NULL)
        {
            p = p->next;
        }
    }
    return p->data;
}


int main()
{
    int A[] = {2,4,6,8,10};
    create(A, 5);
    display(first);
    
    printf("\n%d\n", nodeMid2(first));

    return 0;
}



