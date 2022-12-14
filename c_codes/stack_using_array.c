#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};

int isempty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    return 0;
}

int isfull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    return 0;
}

void push(struct stack *ptr, int val)
{
    if(isfull(ptr))
    {
        printf("stack overflow %d cant push\n",val);
    } 
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}

int pop(struct stack *ptr)
{
    if(isempty(ptr)){
        printf("stack underflow");
    }
    else
    {
        int val= ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int main()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 4;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    // s->arr[0] = 7;
    // s->top++;
    printf("%d\n",isfull(s));
    printf("%d\n",isempty(s));
    push(s,56);
    push(s,65);
    push(s,44);
    push(s,33);
    push(s,22);
    printf("%d\n",isfull(s));
    printf("%d\n",isempty(s));

    printf("popped %d from stack\n",pop(s));

    return 0;
}