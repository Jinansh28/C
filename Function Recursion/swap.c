#include<stdio.h>
int main(){
    int a=5;
    int b=3;
    printf("a is %d\nb is %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a is %d\nb is %d",a,b);
}