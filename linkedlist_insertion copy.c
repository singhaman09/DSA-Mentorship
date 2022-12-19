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

struct node * insertatfirst(struct node *head,int data){
    struct node *ptr = (struct node *) malloc(sizeof(struct node));
    ptr->next=head;
    ptr->data=data;        
    return ptr;
}

struct node * insertatindex(struct node *head, int data, int index)
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    struct node *p =head;
    int i=0;
    while(i!=index-1) 
    {
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}

struct node *insertatend(struct node *head,int data){
   struct node *ptr=(struct node *)malloc(sizeof(struct node));
   struct node *p=head;
   while(p->next!=NULL)
   {
    p=p->next;
   } 
   ptr->data=data;
   p->next=ptr;
   ptr->next=NULL;
   return head;
}

struct node* insertafternode(struct node *head,struct node* prevnode,int data){
    struct node *ptr= (struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=prevnode->next;
    prevnode->next=ptr;
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
    head=insertafternode(head,second,77); 
    linkedlist_traversal(head);


return 0;
}