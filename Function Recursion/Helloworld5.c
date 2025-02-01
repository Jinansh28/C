#include<stdio.h>
void Hello(int count);
void main(){
    int count;
    printf("Enter no. of times");
    scanf("%d",&count);
Hello(count);
}
void Hello(int count){
    if(count==0){
        return;
    }
    printf("Hello world\n");
    Hello(count-1);
}    