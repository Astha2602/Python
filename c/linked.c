#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
}*head=NULL,*last=NULL;
void insertatend(int n)
{
    struct node* NODE=(struct node*)malloc(sizeof(struct node));
    NODE->data=n;
    NODE->next=NULL;
    if(head==NULL)
    {
        head=NODE;
        last=NODE;
    }
    else
    last->next=NODE;
    last=NODE;
}
void print()
{
    struct node * temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}
int main()
{
    for(int x=0;x<5;x++)
    insertatend(x);
    print();
    return 0;
}