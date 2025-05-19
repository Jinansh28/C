#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    int height;
    struct Node*left,*right;
};

struct Node *createNode(int val){
    struct Node *p=(struct Node *)malloc(sizeof(struct Node));
    p->data=val;
    p->left=p->right=NULL;
    p->height=0;
    return p;
}

int max(int a,int b){
    if(a>b) return a;
    return b;
}

int getheight(struct Node*ptr){
    if(ptr==NULL) return 0;
    return ptr->height;
}

int getbalancedfactor(struct Node *p){
    if(p==NULL) return 0;
    return getheight(p->left)-getheight(p->right);
}

struct Node *leftrotate(struct Node *x){
    struct Node *y=x->right;
    struct Node *T=y->left;
    x->right=T;
    y->left=x;
    x->height=1+max(getheight(x->left),getheight(x->right));
    y->height=1+max(getheight(y->left),getheight(y->right));
    return y;
}

struct Node *rightrotate(struct Node *x){
    struct Node *y=x->left;
    struct Node *T=y->right;
    x->left=T;
    y->right=x;
    x->height=1+max(getheight(x->left),getheight(x->right));
    y->height=1+max(getheight(y->left),getheight(y->right));
    return y;
}

struct Node *insertNode(struct Node *root,int val){
    struct Node *p=root;
    if(p==NULL) return createNode(val);
    else if(val<p->data){
        p->left=insertNode(p->left,val);
    }
    else if(val>p->data){
        p->right=insertNode(p->right,val);
    }
    else{
        return p;
    }
    
    p->height=1+max(getheight(p->left),getheight(p->right));
    int bf=getbalancedfactor(p);
    
    if(bf>1 && val<p->left->data){
        return rightrotate(p);
    }
    else if(bf<-1 && val>p->right->data){
        return leftrotate(p); 
    }
    else if(bf>1 && val>p->left->data){
        p->left=leftrotate(p->left);
        return rightrotate(p);
    }
    else if(bf<-1 && val<p->right->data){
        p->right=rightrotate(p->right);
        return leftrotate(p);
    }
    return p;
}

struct Node *predecessesor(struct Node *root){
    if(root==NULL) return NULL;
    root=root->left;
    while(root->right!=NULL){
        root=root->right;
    }
    return root;
} 

struct Node *deleteNode(struct Node *root,int val){
    if(root==NULL){
        printf("Invalid Node");
        return NULL;
    }
    if(val<root->data){
        root->left=deleteNode(root->left,val);
    }
    else if(val>root->data){
        root->right=deleteNode(root->right,val);
    }
    else{
        if(root->left==NULL && root->right==NULL){
            free(root);
            return NULL;
        }
        else if(root->left!=NULL && root->right==NULL){
            struct Node *p=root;
            root=root->left;
            free(p);
            return root;
        }
        else if(root->left==NULL && root->right!=NULL){
            struct Node *p=root;
            root=root->right;
            free(p);
            return root;
        }
        else{
            struct Node *ipre=predecessesor(root);
            root->data=ipre->data;
            root->left=deleteNode(root->left,ipre->data);
        }
    }
    return root;
}

void inorder(struct Node *root){
    if(root==NULL) return;
    inorder(root->left);
    printf("%d->",root->data);
    inorder(root->right);
}

int main(){
    struct Node *root=createNode(50);
    root=insertNode(root,10);
    root=insertNode(root,20);
    root=insertNode(root,30);
    root=insertNode(root,40);
    root=insertNode(root,50);
    root=insertNode(root,60);
    root=insertNode(root,70);
    root=insertNode(root,80);
    root=insertNode(root,90);
    root=insertNode(root,100);
    root=deleteNode(root,50);
    inorder(root);
}