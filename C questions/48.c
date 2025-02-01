#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter first number");
    scanf("%d",&a);
    printf("Enter second number");
    scanf("%d",&b);
    printf("Enter third number");
    scanf("%d",&c);
    (a>b && a>c)?printf("Greatest: %d",a):(b>c && b>a)?printf("Greatest is %d",b):printf("Greatest is %d",c);
}