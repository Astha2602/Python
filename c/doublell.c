#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
}*head=NULL,*last=NULL;
void insertlast(int data)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;
    temp->prev=NULL;
    if(head==NULL)
    {
        head=temp;
        last=temp;
    }
    else
    {
        last->next=temp;
        temp->prev=last;
        last=temp;
    }
}
void print()
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        if(temp->next==NULL)
        printf("%d",temp->data);
        else
        printf("%d<->",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
void delete(int pos)
{
    struct node *node=head;
    for(int i=0;i<pos;i++)
        node=node->next;
    node->prev->next=node->next;
    node->next->prev=node->prev;
    free(node);
}
int main()
{
    insertlast(10);
    insertlast(20);
    insertlast(30);
    insertlast(40);
    insertlast(50);
    print();
    delete(3);
    print();

}