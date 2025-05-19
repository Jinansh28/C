#include<stdio.h>
#include<stdlib.h>

struct queue{
    int r,f;
    int *arr;
    int size;
};

int isEmpty(struct queue *q){
    if(q->r==-1){
        return 1;
    }
    return 0;
}

int isFull(struct queue *q){
    if(q->f==q->size-1){
        return 1;
    }
    return 0;
}

int enqueue(struct queue *q,int val){
    if(isFull(q)){
        printf("Data Overflow\n");
        return -1;
    }
    q->arr[++q->r]=val;
}

int dequeue(struct queue *q){
    int val=-1;
    if(isEmpty(q)){
        printf("Data underflow");
        return -1;
    }
    val=q->arr[q->f++];
    return val;
}

int main(){
    struct queue *q=(struct queue*)malloc(sizeof(struct queue));
    q->size=400;
    q->r=q->f=0;
    q->arr=(int *)malloc(sizeof(int)*q->size);

    //BFS
    int u=0;
    int i=6;
    int v[7]={0,0,0,0,0,0,0};

    int a[7][7]={
        {0,1,1,1,0,0,0},
        {1,0,0,1,0,0,0},
        {1,0,0,1,1,0,0},
        {1,1,1,0,1,0,0},
        {0,0,1,1,0,1,1},
        {0,0,0,0,1,0,0},
        {0,0,0,0,1,0,0}
    };
    printf("%d ",i);
    v[i]=1;
    enqueue(q,i);
    while(!isEmpty(q)){
        u=dequeue(q);
        for(int j=0;j<7;j++){
            if(a[i][j]==1 && v[j]==0){
                printf("%d ",j);
                enqueue(q,j);
                v[j]=1;
            }
        }
        i++;
    }
    return 0;
}