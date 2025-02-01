#include<stdio.h>
int main(){
    int n;
    char c;
    printf("Order required");
    scanf("%d",&n);
    int s=100;
    printf("Credit available");
    scanf(" %c",&c);
    if(n<=s && c=='y'){
        printf("Order will be shipped");
    }
    else if(c=='n'){
        printf("Order will not be shipped");
    }
    else if(c=='y' && n>s){
        printf("Stock present will be shipped for left order balance will be shipped");
    }
    return 0;
}