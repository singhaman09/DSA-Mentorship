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

return 0;
}