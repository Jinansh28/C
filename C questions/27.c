#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter first number");
    scanf("%d",&a);
    printf("Enter second number");
    scanf("%d",&b);
    printf("Enter third number");
    scanf("%d",&c);
    if(a>b&& a>c){
        printf("Greatest is %d",a);
    }
    if(b>a&& b>c){
        printf("Greatest is %d",b);
    }
    if(c>b&& c>a){
        printf("Greatest is %d",c);
    }
    return 0;
}