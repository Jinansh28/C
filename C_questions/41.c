#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter first side of triangle");
    scanf("%d",&a);
    printf("Enter second side of triangle");
    scanf("%d",&b);
    printf("Enter third side of triangle");
    scanf("%d",&c);
    if(a>c-b && b>a-c && c>b-a && c>a-b && b>c-a && a>b-c){
        printf("Triangle is valid");
    }
    else{
        printf("Triangle is invalid");
    }
    return 0;
}