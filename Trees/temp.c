#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node*left,*right;
};

struct Node *createNode(int val){
    struct Node* p=(struct Node *)malloc(sizeof(struct Node));
    p->data=val;
    p->left=p->right=NULL;
    return p;
}

int isBST(struct Node *root){
    static struct Node *prev=NULL;
    if(root!=NULL){
        if(!isBST(root->left)) return 0;
        if(prev!=NULL && prev->data>=root->data) return 0;
        prev=root;
        return isBST(root->right);
    }
    else return 1;
}

struct Node *balanceAVL(struct Node *n){
    if(n==NULL) return NULL;
    n->left=balanceAVL(n->left);
    n->right=balanceAVL(n->right);
    n->right = 1 + max(getheight(n->left), getheight(n->right));

}

struct Node* insertNode(struct Node* p,int val){
    struct Node *prev=NULL;
    if(p->data==val) return NULL;
    struct Node *ptr=createNode(val);
    while(p!=NULL){
        prev=p;
        if(p->data>val){
            p=p->left;
        }
        else if(p->data==val){
            free(ptr); 
            return NULL;
        }
        else{
            p=p->right;
        }
    }
    if(val<prev->data){
        prev->left=ptr;
    }
    else{
        prev->right=ptr;
    }
    ptr=balanceAVL(ptr);
    return ptr;
}

struct Node *inorderpredecessor(struct Node *root){
    root=root->left;
    while(root->right!=NULL){
        root=root->right;
    }
    return root;
}

struct Node *deleteNode(struct Node* root,int val){
    struct Node *prev=NULL;
    struct Node *p=root;
    while(p!=NULL){
        prev=p;
        if(p->data==val) break;
        else if(p->data>val){
            p=p->left;
        }
        else{
            p=p->right;
        }
    }
    if(p==NULL){
        printf("Invalid value");
        return NULL;
    }
    // 0 Child
    if(p->left==NULL && p->right==NULL){
        free(p);
        return NULL;
    }
    //1 Child
    else if(p->left==NULL && p->right!=NULL){
        struct Node *child=p->right;
        p=child;
        free(child);
        return p;
    } 
    else if(p->right==NULL && p->left!=NULL){
        struct Node *child=p->left;
        p=child;
        free(child);
        return p;
    }
    //2 Child
    else{
    struct Node *iPre=inorderpredecessor(p);
    p->data=iPre->data;
    p->left=deleteNode(p->left,iPre->data);
    }
    return root;
}

void inorder(struct Node *root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d->",root->data);
        inorder(root->right);
    }
}

int main(){
    struct Node *root=createNode(40);
    struct Node *p1=insertNode(root,10);
    struct Node *p2=insertNode(root,20);
    struct Node *p3=insertNode(root,30);
    struct Node *p4=insertNode(root,40);
    struct Node *p5=insertNode(root,50);
    struct Node *p6=insertNode(root,15);
    struct Node *p7=insertNode(root,25);
    struct Node *p8=insertNode(root,35);
    struct Node *p9=insertNode(root,45);
    struct Node *p10=insertNode(root,5);
    root=deleteNode(root,10);
    inorder(root);
}