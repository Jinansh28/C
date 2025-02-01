#include<stdio.h>
int main(){
    int a,b;
    printf("First number");
    scanf("%d",&a);
    printf("Second number");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Reversed a is %d\n b is %d",a,b);
}