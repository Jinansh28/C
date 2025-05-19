#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *f=NULL;
struct Node *r=NULL;

void enqueue(int val){
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if(n==NULL){
        printf("Queue full\n");
        return;
    }
    n->data=val;
    n->next=NULL;
    printf("Enqueued element: %d\n",val);
    if(f==NULL){
        f=r=n;
    }
    else{
        r->next=n;
        r=n;
    }
}

int dequeue(){
    if(f==NULL){
        printf("Queue is empty\n");
        return -1;
    }
    struct Node* ptr=f;
    int val=ptr->data;
    f=f->next;
    free(ptr);
    return val;
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    enqueue(70);
    printf("Dequeued element: %d\n",dequeue());
    printf("Dequeued element: %d\n",dequeue());
    printf("Dequeued element: %d\n",dequeue());
    printf("Dequeued element: %d\n",dequeue());
    printf("Dequeued element: %d\n",dequeue());
    printf("Dequeued element: %d\n",dequeue());
    printf("Dequeued element: %d\n",dequeue());

    return 0;
}