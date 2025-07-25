#include <stdio.h>
#include <stdlib.h>


struct Stack
{
    int size;
    int top;
    int *s;
};


void create(struct Stack *st)
{
    printf("Enter the size of Stack. ");
    scanf("%d\n", &st->size);
    st->top = -1;
    st->s = (int *)malloc(st->size*sizeof(int));
}


void push(struct Stack *st, int x)
{
    if ((st->top) == (st->size-1))
    {
        printf("Stack is overflow.\n");
    }
    else
    {
        st->top++;
        st->s[st->top] = x;
    }
}


void display(struct Stack st)
{
    for (int i=st.top; i>-1; i--)
    {
        printf("%d ", st.s[i]);
    }
}


int main()
{
    struct Stack st;
    create(&st);
    push(&st, 10);
    push(&st, 20);
    push(&st, 30);
    display(st);

    return 0;
}



