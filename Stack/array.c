#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int* arr;
};


int isEmpty(struct stack*s){
    if(s->top<0){
        return 1;
    }
    else return 0;
}


int isFull(struct stack*s){
    if(s->top==s->size-1){
        return 1;
    }
    else return 0;
}


void push(struct stack *s,int val){
    if(isFull(s)){
        printf("Stack Overflow");
    }
    else{
        s->top++;
        s->arr[s->top]=val;
    }
}

int pop(struct stack *s){
    if(isEmpty(s)){
        printf("Stack Underflow");
        return -1;
    }
    int val=s->arr[s->top--];
    return val;
}

int peek(struct stack *s,int i){
    int p=s->top-i+1;
    if(p<0 || p>s->top){
        return -1;
    }
    return s->arr[p];
}

void printStack(struct stack *s){
    for(int i=s->top;i>=0;i--){
        printf("%d ",s->arr[i]); 
    }
}

int stackTop(struct stack *s){
    if(isEmpty(s)){
        return -1;
    }
    else return s->arr[s->top];
}

int stackBottom(struct stack *s){
    if(isEmpty(s)){
        return -1;
    }
    else return s->arr[0];
}
int main(){
    struct stack *sp=(struct stack*)malloc(sizeof(struct stack));
    sp->size=10;
    sp->top=-1;
    sp->arr=(int*)malloc(sp->size*sizeof(int));
    push(sp,10);
    push(sp,20);
    push(sp,30);
    push(sp,40);
    push(sp,50);
    push(sp,60);
    printf("%d ",pop(sp));
    printf("%d\n",peek(sp,3));
    printStack(sp);
    printf("Topmost :%d ",stackTop(sp));
    printf("Bottomost: %d",stackBottom(sp));
}