#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct stack{
    int top;
    int size;
    char *arr;
};

int isEmpty(struct stack *s){
    if(s->top==-1){
        return 1;
    }
    else return 0;
}

int isFull(struct stack *s){
    if(s->top==s->size-1){
        return 1;
    }
    else return 0;
}
void push(struct stack *s,char c){
    if(isFull(s)){
        printf("Stack overflow");
    }
    else{
        s->top++;
        s->arr[s->top]=c;  
    }
}

void pop(struct stack *s){
    if(isEmpty(s)){
        printf("Stack Underflow");
    }
    else{
        s->top--;
    }
}

int parenthesis(char a[]){
    struct stack *s=(struct stack*)malloc(sizeof(struct stack));
    s->top=-1;
    s->size=100;
    s->arr=(char*)malloc(s->size*sizeof(char));
    int i=0;
    int b=strlen(a);
    while(i<b){
        if(a[i]=='('){
            push(s,'(');
        }
        else if(a[i]==')'){
            if(s->top==-1){
                return 0;
            }
            pop(s);
        }
        i++;
    }
    free(s->arr);
    if(s->top==-1){
        return 1;
    }
    else return 0;
}

int main(){
    char a[]=")8*(2-3+23*(3))()";
    printf("%d",parenthesis(a));
}