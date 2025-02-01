#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter sides of triangle");
    scanf("%d %d %d",&a,&b,&c);
    if(a==180-b-c){
        printf("Triangle is valid");
    }
    else{
        printf("Triangle is invalid");
    }
    return 0;
}