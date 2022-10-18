#include<stdio.h>
#include<stdlib.h>
struct node
{
     int data;
     int priority;
    struct node *next;
}*front=NULL,*rear=NULL;
void insert(int data,int priority)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL)
    {
    printf("memory isn't available");
    return;
    }
    temp->data=data;
    temp->next=NULL;
    temp->priority=priority;
    if(front==NULL||front->priority>temp->priority)
    {
        temp->next=front;
        front=temp;
    }
    else
    {
       struct node *p=front;
       while(p->next!=NULL && p->next->priority<=temp->priority)
       {
        p=p->next;
       }
       temp->next=p->next;
       p->next=temp;
    }
    rear =temp;
}
void deletequeue()
{
    struct node *temp=front;
    front=front->next;
    free(temp);
}
void isempty()
{
    if(front==NULL)
    {
        printf("queue is empty");
    }
    else
    printf("queue is not empty");
}
void peek()
{
    if(front==NULL)
    {
        printf("queue is empty");
    }
    else
    {
    printf("%d",front->data);
    }
}
void print()
{
    struct node *temp=front;
    while(temp!=NULL)
    {
        if(temp->next==NULL)
        printf("%d",temp->data);
        else
        printf("%d",temp->data);
        temp=temp->next;
    }
}
int main()
{
    isempty();
    printf("\n");
    peek();
    printf("\n");
    insert(10,4);
    insert(20,2);
    insert(30,3);
    insert(40,5);
    insert(50,1);
    print();
    printf("\n");
    isempty();
    printf("\n");
    peek();
    deletequeue();
    printf("\n");
    print();

}