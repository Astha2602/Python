#include<stdio.h>
#include<stdlib.h>
struct node {
  int data;
  struct node* lchild;
  struct node* rchild;
};

// Inorder traversal
void inorder(struct node* root) {
  if (root == NULL) return;
  inorder(root->lchild);
  printf("%d ->", root->data);
  inorder(root->rchild);
}

// Preorder traversal
void preorder(struct node* root) {
  if (root == NULL) return;
   printf("%d ->", root->data);
  preorder(root->lchild);
  preorder(root->rchild);
}

// Postorder traversal
void postorder(struct node* root) {
  if (root == NULL) return;
  postorder(root->lchild);
  postorder(root->rchild);
  printf("%d ->", root->data);
}

// Create a new Node
struct node* newNode(int value) {
  struct node* newNode = (struct node*)malloc(sizeof(struct node));
  newNode->data = value;
  newNode->lchild = NULL;
  newNode->rchild = NULL;

  return newNode;
}


struct node *bst(struct node *node,int data)
{
    if(node==NULL)return newNode(data);
    if(data < node ->data)
        node->lchild=bst(node->lchild,data);
    else
        node->rchild=bst(node->rchild,data);
    return node;
    }
    // Insert on the left of the node
struct node* insertLeft(struct node* root, int value) {
  root->lchild = newNode(value);
  return root->lchild;
}

// Insert on the right of the node
struct node* insertRight(struct node* root, int value) {
  root->rchild = newNode(value);
  return root->rchild;
}

int main() {
  struct node* root = newNode(21);
  insertLeft(root, 32);
  insertRight(root, 43);
  insertLeft(root->lchild, 4);
   insertRight(root->rchild, 40);

  printf("Inorder traversal \n");
  inorder(root);

  printf("\nPreorder traversal \n");
  preorder(root);

  printf("\nPostorder traversal \n");
  postorder(root);
}