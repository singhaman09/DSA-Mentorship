#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void linkedlist_traversal(struct node * ptr)
{
    while(ptr!=NULL)
    {
        printf("elements: %d\n",ptr->data);
        ptr=ptr->next;
    }
}

struct node *deletefirst(struct node * head)
{
    struct node *ptr= head;
    head=head->next;
    free(ptr);
    return head;
}

struct node *deleteatindex(struct node * head,int index)
{
    struct node *p= head;
    struct node *q=head->next;
    int i=0;
    while(i!=index-1)
    {   p=p->next;
        q=q->next;
        i++;
    }
    p->next=q->next;
    free(q);
    return head;
}

struct node *deletelast(struct node *head)
{
    struct node *p= head;
    struct node *q=head->next;
    while(q->next!=NULL)
    {   p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
}

struct node *deleteatgiven_value(struct node * head,int value)
{
    struct node *p= head;
    struct node *q=head->next;
    while(q->data!=value && q->next!=NULL)
    {   p=p->next;
        q=q->next;
    }

    
    p->next=q->next;
    free(q);
    
    return head;
}

int main()
{
    struct node * head;
    struct node * second;
    struct node * third;

    //allocate memory for nodes in linked list in heap
    head=(struct node *) malloc(sizeof(struct node));
    second=(struct node *) malloc(sizeof(struct node));
    third=(struct node *) malloc(sizeof(struct node));

    //link first and second
    head->data=7;
    head->next=second;

    //link second and third  
    second->data=11;
    second->next=third;

    //terminate the list at third node
    third->data=22;
    third->next=NULL;

    linkedlist_traversal(head);
  //  head=insertatfirst(head,56);
  //  head=insertatindex(head,56,3);
  //  head=insertatend(head,56); 
  //  head=insertafternode(head,second,77); 
  //  head=  deletefirst(head);
  //  head=deleteatindex(head,2);
  //  head=deletelast(head);
    head=deleteatgiven_value(head,11);
    linkedlist_traversal(head);
    

return 0;
}