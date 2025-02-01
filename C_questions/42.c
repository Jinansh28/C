#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter first side of triangle");
    scanf("%d",&a);
    printf("Enter second side of triangle");
    scanf("%d",&b);
    printf("Enter third side of triangle");
    scanf("%d",&c);
    int p,q,r;
    p=(a*a)+(b*b);
    q=(b*b)+(c*c);
    r=(c*c)+(a*a);
    if(a>c-b && b>a-c && c>b-a && c>a-b && b>c-a && a>b-c){
        printf("Triangle is valid\n");
    
    if(a==b && b==c && a==c){
        printf("Triangle is equilateral");
    }
    else if(a==b|| b==c|| a==c){
        printf("Triangle is isosceles");
    }
    else if(p==c*c||q==a*a||r==b*b){
        printf("Triangle is right angeled");
    }
    else{
        printf("Triangle is scalene");
    }
}
else{
        printf("Triangle is invalid");
    }

}