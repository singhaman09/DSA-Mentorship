#include<stdio.h>
#include<stdlib.h>
struct node {
    struct node *next;
    int data;
};

void traverse_ll(struct node *head){
    struct node *p=head;
    do
    {   printf(p->data);
        p=p->next;
    }while(p!=head);
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
    third->next=head;

    traverse_ll(head);

return 0;
}