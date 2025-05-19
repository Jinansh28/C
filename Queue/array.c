#include<stdio.h>
#include<stdlib.h>

struct queue{
    int size;
    int rear;
    int front;
    int *arr;
};

int isFull(struct queue *q){
    if(q->rear==q->size-1) return 1;
    return 0;
}

int isEmpty(struct queue *q){
    if(q->rear==q->front) return 1;
    return 0;
}

int enqueue(struct queue *q,int val){
    if(isFull(q)) {
        printf("Queue Overflow"); 
        return -1;
    }
    q->rear=q->rear+1;
    q->arr[q->rear]=val;
}

int dequeue(struct queue *q){
    int val=-1;
    if(isEmpty(q)){ 
        printf("Queue is Empty");
        return -1;
    }
    val=q->arr[++q->front];
    return val;
}

void printqueue(struct queue *q){
    int i=q->front+1;
    while(i<=q->rear){
        printf("%d ",q->arr[i]);
        i++;
    }
}
int main(){
    struct queue *q=(struct queue *)malloc(sizeof(struct queue));
    q->size=10;
    q->front=-1;
    q->rear=-1;
    q->arr=(int *)malloc(q->size*(sizeof(int)));
    enqueue(q,10);
    enqueue(q,20);
    enqueue(q,30);
    enqueue(q,40);
    enqueue(q,50);
    enqueue(q,60);
    enqueue(q,70);
    enqueue(q,80);
    printf("Dequeue:%d \n",dequeue(q));
    printqueue(q);
}