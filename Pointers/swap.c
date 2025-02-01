#include<stdio.h>
void swap(int *a,int *b);
int main(){
    int a=3, b=5;
    printf("a is %d \n b is %d\n",a,b);
    swap(&a,&b);
    printf("a is %d \n b is %d\n",a,b);
}
void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
    printf("New a is %d\n New b is %d",*a,*b);
}