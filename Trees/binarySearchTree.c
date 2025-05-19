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

int isBST(struct Node* root){
    static struct Node * prev=NULL;
    if(root!=NULL){
        if(!isBST(root->left)){
            return 0;
        }
        if(prev!=NULL && prev->data>=root->data){
            return 0;
        }
        prev=root;
        return isBST(root->right);
    }
    else return 1;
}

int main(){
    struct Node *root= (struct Node*)malloc(sizeof(struct Node));
    root->data=4;
    struct Node* p1=createNode(2);
    struct Node* p2=createNode(5);
    struct Node* p3=createNode(3);
    struct Node* p4=createNode(1);
    root->right=p2;
    root->left=p1;
    p1->left=p4;
    p1->right=p3;
    inorder(root);
    printf("\n");
    preorder(root);
    printf("\n");
    postorder(root);
    printf("\n%d",isBST(root));
}
