#include<stdio.h>
#include<stdlib.h>
struct node
{
     int data;
    struct node *next;
}*front=NULL,*rear=NULL;
void insert(int data)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL)
    printf("memory isn't available");
    temp->data=data;
    temp->next=NULL;
    if(front==NULL)
    {
        front=temp;
    }
    else
    {
        rear->next=temp;
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
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    print();
    printf("\n");
    isempty();
    printf("\n");
    peek();
    deletequeue();
    printf("\n");
    print();

}