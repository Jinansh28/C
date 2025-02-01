#include<stdio.h>
int main(){
    int c,d;
    printf("First number is ");
    scanf("%d",&c);
    printf("Second number");
    scanf("%d",&d);
    printf("%d %d\n",c,d);
    int temp=c;
    c=d;
    d=temp;
    printf("%d %d",c,d);
}