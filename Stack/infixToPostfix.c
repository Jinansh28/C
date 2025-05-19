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
        return;
    }
    else{
        s->top++;
        s->arr[s->top]=c;  
    }
}

char pop(struct stack *s){
    char val;
    if(isEmpty(s)){
        printf("Stack Underflow");
        return '\0';
    }
    else{
        val=s->arr[s->top];
        s->top--;
        return val;
    }
}

char stackTop(struct stack *s){
    if(isEmpty(s)){
        return '\0';
    }
    else return s->arr[s->top];
}

int isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '(' || c == ')');
}

int precedence(char c){
    if(c=='+'||c=='-'){
        return 1;
    }
    else if(c=='*' || c=='/'){
        return 2;
    }
    else return 0;
}

char * infixtopostfix(char a[]){
    struct stack *s=(struct stack*)malloc(sizeof(struct stack));
    s->top=-1;
    s->size=100;
    s->arr=(char *)malloc(s->size*sizeof(char ));
    char * postfix = (char *) malloc((strlen(a)+1) * sizeof(char));
    int i=0,j=0;
    while(a[i]!='\0'){
        if(!isOperator(a[i])){
            postfix[j]=a[i];
            j++;
            i++;
        }
        else{
            if(precedence(a[i])>precedence(stackTop(s))){
                push(s,a[i]);
                i++;
            }
            else{
                postfix[j]=pop(s);
                j++;
            }
        }
    }
    while(!isEmpty(s)){
        postfix[j]=pop(s);
        j++;
    }
    postfix[j]='\0';
    return postfix;
}

int main(){
    char a[]="8*2-3+23*3";
    printf("%s",infixtopostfix(a));
}