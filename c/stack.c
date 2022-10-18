#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*root=NULL;
int f=0;
void push(int n,int size)
{
    struct node *s=(struct node*)malloc(sizeof(struct node));
    if(f>size)
    {
        printf("stack overflow");
        return;
    }
    s->data=n;
    s->next=root;
    root=s;
    f++;
 }
 int isempty()
{
    if(root==NULL)
    return 1;
    else
    return 0;
}
void display()
{
    struct node *s;
    if(isempty())
    {
        printf("stack underflow");
        return;
    }
    else
    {
        s=root;
        while(s!=NULL)
        {
            printf("%d",s->data);
           s= s->next;
        }
    }
}

void pop()
{
    struct node *s;
    if(isempty())
    {
        printf("stack underflow");
    }
    else{
        s=root;
        root=root->next;
        free(s);
    }
}

int peek()
{
    if(isempty())
    return 0;
    return root->data;
}
int main()
{int size;
    printf("enter the size ");
    scanf("%d",&size);
    push(5,size);
    push(8,size);
    
    display();
    printf("\n top element is :%d\n",peek());
    pop();
    display();
    printf("\n top element is :%d\n",peek());
    
    return 0;

}