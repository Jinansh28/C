#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node* createNode(int key){
    struct Node *p=(struct Node*)malloc(sizeof(struct Node));
    p->data=key;
    p->left=NULL;
    p->right=NULL;
    return p;
}

int preorder(struct Node* root){
    if(root == NULL) return 1;
    printf("%d->",root->data);
    preorder(root->left);
    preorder(root->right);
}

int inorder(struct Node* root){
    if(root == NULL) return 1;    
    inorder(root->left);
    printf("%d->",root->data);
    inorder(root->right);  
}

int postorder(struct Node* root){
    if( root==NULL ) return 1;
    postorder(root->left);
    postorder(root->right);
    printf("%d->",root->data);
}

int isBST(struct Node* root){
    static struct Node *prev = NULL;
    if(root!=NULL){
        if(!isBST(root->left)) return 0;
        if(prev!=NULL && prev->data>=root->data) return 0;
        prev=root;
        return isBST(root->right);
    }
    else return 1;
}

int search(struct Node* root,int key){
    if(root!=NULL){
    if(root->data == key) return 1;
    if(root->data > key){
        return search(root->left,key);
    }
    else if(root->data < key){
        return search(root->right,key);
    }
    }
    else return 0;
}

int Search(struct Node *root,int key){
    struct Node* p=root;
    while(p!=NULL){
        if(p->data==key) return 1;
        else if(p->data > key) p=p->left;
        else p=p->right;
    }
    return 0;
}

struct Node *insertNode(struct Node *root,int val){
    struct Node *p=createNode(val);
    struct Node *q=root;
    struct Node *prev=NULL;
    while(q!=NULL){
        if(val<q->data){
            prev=q;
            q=q->left;
        }
        else if(q->data==val){
            printf("Invalid value");
            return NULL;
        }
        else{
            prev=q;
            q=q->right;
        }
    }
    if(val<prev->data) prev->left=p;
    else prev->right=p;
    return p;
}

struct Node* inorderPrecedessor(struct Node* root){
    root=root->left;
    while(root->right!=NULL){
        root=root->right;
    }
    return root;
}

struct Node* deleteNode(struct Node *root,int val){
    if(root==NULL) return NULL;
    if(root->left==NULL && root->right==NULL){
        free(root);
        return NULL;
    }
    struct Node* iPre;
    if(val<root->data) return deleteNode(root->left,val);
    else if(val>root->data) return deleteNode(root->right,val);
    else{
        iPre=inorderPrecedessor(root);
        root->data=iPre->data;
        root->left=deleteNode(root->left,iPre->data);
    }
    return root;
}

int main(){
    struct Node *root = createNode(40);
    struct Node *p1 = createNode(20);
    struct Node *p2 = createNode(30);
    struct Node *p3 = createNode(10);
    struct Node *p4 = createNode(50);
    root->left = p1;
    root->right = p4;
    p1->left = p3;
    p1->right = p2;
//       40
//      /  \
//    20   50
//   /  \  
//  10  30
    preorder(root);
    printf("\n");
    inorder(root);
    printf("\n");
    postorder(root);
    printf("\n%d\n",isBST(root));
    printf("%d\n",Search(root,50));
    printf("%d\n",Search(root,0));
    insertNode(root,15);
    inorder(root);
    deleteNode(root,20);
    printf("\n");
    inorder(root);
    return 0;
}