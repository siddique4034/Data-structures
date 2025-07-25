#include <stdio.h>
#include <stdlib.h>


struct Stack
{
    int data;
    struct Stack *next;
}*top=NULL;


void push(int x)
{
    struct Stack *t = (struct Stack *)malloc(sizeof(struct Stack));
    if (t==NULL)
    {
        printf("Stack is Overflow\n");
    }
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}

int pop()
{
    int x = -1;
    if (top == NULL)
    {
        return x;
    }
    else
    {
        struct Stack *t = top;
        x = t->data;
        top = top->next;
        free(t);
        return x;
    }
}


void display()
{
    struct Stack*p = top;
    while(p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}


int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    display();
    
    pop();
    display();
    return 0;
}
