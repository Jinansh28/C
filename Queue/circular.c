#include<stdio.h>
#include<stdlib.h>

struct queue{
    int front;
    int rear;
    int *arr;
    int size;
};

int isempty(struct queue *q){
    if(q->rear==q->front){
        printf("Queue is empty\n");
        return 1;
        }
    return 0;
}

int isfull(struct queue *q){
    if((q->rear+1)%q->size==q->front){ 
        printf("Queue is full\n");
        return 1;
    }
    return 0;
}

int enqueue(struct queue* q,int val){
    if(isfull(q)) return -1;
    q->rear++;
    q->arr[(q->rear)%q->size]=val;
    printf("Enqueued element: %d\n",val);
    return 0;
}

int dequeue(struct queue *q){
    int val=-1;
    if(isempty(q)) return -1;
    q->front=(q->front+1)%q->size;
    val=q->arr[q->front];
    return val;
}

void printqueue(struct queue *q){
    int i=q->front+1;
    while(i<=q->rear){
        printf("%d ",q->arr[i]);
        i=(i+1)%q->size;
    }
}

int main(){
    struct queue *q = (struct queue *)malloc(sizeof(struct queue));
    q->size=10;
    q->front=q->rear=0;
    q->arr = (int *)malloc(sizeof(int)*q->size);
    enqueue(q,10);
    enqueue(q,20);
    enqueue(q,30);
    enqueue(q,40);
    enqueue(q,50);
    enqueue(q,60);
    enqueue(q,10);
    enqueue(q,20);
    enqueue(q,30);
    enqueue(q,40);
    enqueue(q,50);
    enqueue(q,60);
    printf("Dequeued element: %d\n",dequeue(q));
    printf("Dequeued element: %d\n",dequeue(q));
    printf("Dequeued element: %d\n",dequeue(q));
    printf("Dequeued element: %d\n",dequeue(q));
    printf("Dequeued element: %d\n",dequeue(q));
}