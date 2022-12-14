#include<stdio.h>
int arr[5],top=-1;
void push(int v)
{
    if(top==4)
        printf("stack overflow");
    else
    {
        ++top;
        arr[top]=v;
    }
}
void pop()
{
    if(top==-1)
        printf("stack underflow");
    else
    {
        printf("item removed %d",arr[top]);
        --top;
    }
}
int main()
{
    int choice,v,I;
    do
    {
        printf("\n1-add 2-delete 3-dispaly 4-exit");
        printf("\nenter choice");
        scanf("%d",&choice);
        if(choice==1)
        {
            scanf("%d",&v);
            push(v);
        }
        else if(choice==2)
        {
            pop();
        }
        else if(choice==3)
        {   
            for (I=top; I>=0;--I)
            printf("\n%d",arr[I]);
   
        }
        else if(choice==4)
            break;
        else
            printf("wrong choice");

    }
    while (1);
    return 0;
    
}