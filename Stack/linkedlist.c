#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
}node;

int isEmpty(node *top){
    if(top==NULL){
        return 1;
    }
    else return 0;
}

int isFull(node *top){
    node *p=(node*)malloc(sizeof(node));
    if(p==NULL){
        return 1;
    }
    else return 0;
}

node* push(node * top,int x){
    if(isFull(top)){
        printf("Stack Overflow");
    }
    else{
        node* ptr=(node *)malloc(sizeof(node*));
        ptr->data=x;
        ptr->next=top;
        top=ptr;
    }
}

int pop(node** top){
    if(isEmpty(*top)){
        printf("Stack Underflow");
    }
    else{
        node* p=*top;
        *top=(*top)->next;
        int val=p->data;
        free(p);
        return val;
    }
}

void print(node * top){
    node * p=top;
    printf("\n");
    while(p!=NULL){
        printf("Element :%d\n",p->data);
        p=p->next;
    }
    printf("\n");
}

void peek(node *top,int idx){
    node*p=top;
    int i=1;
    while(i<idx){
        p=p->next;
        i++;
    }
    printf("Element at %d :%d ",i,p->data);
}

int stackTop(node *top){
    return top->data;
}

int stackBottom(node *top){
    node *p=top;
    while(p->next!=NULL){
        p=p->next;
    }
    return p->data;
}

int main(){
    node *top= NULL;
    pop(&top);
    top=push(top,10);
    top=push(top,20);
    top=push(top,30);
    top=push(top,40);
    top=push(top,50);
    top=push(top,60);
    print(top);
    pop(&top);
    print(top);
    peek(top,3);
    printf("\nTopmost: %d",stackTop(top));
    printf("\nBottomost: %d",stackBottom(top));
}