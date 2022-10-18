#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
static void reverse(struct Node** head)
{
    struct Node* prev = NULL;
    struct Node *current = *head;
    struct Node* nextt = NULL;
    while (current != NULL) {
       
        nextt = current->next;
 
        
        current->next = prev;
 
        
        prev = current;
        current = nextt;
    }
    *head = prev;
}
 void push(struct Node** head, int new_data)
{
    struct Node* new_node
        = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head);
    (*head) = new_node;
}