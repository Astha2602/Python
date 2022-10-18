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

void isloop()
{
    int f=0;
    struct node*p=head,*q=head;
    while(p&&q&&p->next)
    {
        p=p->next->next;
        q=q->next;
        if(p==q)
        {
            printf("loop is detected");
            f=1;
            break;
        }
    }
    if(f==0)
    printf("no loop detected");
}
void print()
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        if(temp->next==NULL)
        printf("%d",temp->data);
        else
        printf("%d->",temp->data);
        temp=temp->next;
    }
}
int main()
{
    for(int x=0;x<5;x++)
    insertatend(x);
    print();
    isloop();
    printf("\n");
    last->next=head;
    isloop();
}