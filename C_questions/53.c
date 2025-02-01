#include<stdio.h>
int main(){
    int a,b,p=1;
    printf("Enter first number");
    scanf("%d",&a);
    printf("Enter second number");
    scanf("%d",&b);
    for(int i=1;i<=b;i++){
        p=p*a;
    }
    printf("a raised to the power b is %d",p);
    return 0;
}