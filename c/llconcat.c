#include<stdio.h>
#include<stdlib.h>
struct node*head=NULL;
struct node*head2=NULL;
struct node
{
    int data;
    struct node*next;
};
void print_ll(struct node* start)
{
    while(start!=NULL)
    {
        printf("%d\n",start->data);
        start=start->next;
    }
}
struct node *concat(struct node*head,struct node*head2)
{
    struct node*curr1=head;
    while(curr1->next!=NULL)
    {
        curr1=curr1->next;
    }
    curr1->next=head2;
    return head;
}
int main()
{
    struct node*temp1=(struct node*)malloc(sizeof(struct node));
    struct node*temp2=(struct node*)malloc(sizeof(struct node));
    struct node*temp3=(struct node*)malloc(sizeof(struct node));
    head=temp1;
    temp1->data=10;
    temp2->data=20;
    temp3->data=30;
    temp1->next=temp2;
    temp2->next=temp3;
    temp3->next=NULL;
}


struct node *tem1=(struct node*)malloc(sizeof(struct node));
struct node *tem2=(struct node*)malloc(sizeof(struct node));
struct node *tem3=(struct node*)malloc(sizeof(struct node));
head2=tem1;
tem1->data=11;
tem2->data=15;
tem3->data=17;
tem1->next=tem2;
tem2->next=tem3;
tem3->next=NULL;
print_ll(head);
printf(\n);
print_ll(head2);
printf(\n);
struct node *res=concat(head,head2);
print_ll(res);
return 0;
}



