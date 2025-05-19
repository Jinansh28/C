#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * left;
    struct Node * right;
};

struct Node* createNode(int data){
    struct Node *p= (struct Node*)malloc(sizeof(struct Node));
    p->right=NULL;
    p->left=NULL;
    p->data=data;
    return p;
}

void inorder(struct Node* root){
    if(root==NULL) return;
    inorder(root->left);
    printf("%d->",root->data);
    inorder(root->right);
}

void preorder(struct Node* root){
    if(root==NULL) return;
    printf("%d->",root->data);
    preorder(root->left);
    preorder(root->right);
}

void postorder(struct Node* root){
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    printf("%d->",root->data);
}

int main(){
    struct Node *root= (struct Node*)malloc(sizeof(struct Node));
    root->right=NULL;
    root->left=NULL;
    root->data=10;
    struct Node* p1=createNode(20);
    struct Node* p2=createNode(30);
    root->right=p2;
    root->left=p1;
    inorder(root);
    printf("\n");
    preorder(root);
    printf("\n");
    postorder(root);
}
