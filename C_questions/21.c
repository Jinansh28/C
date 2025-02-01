#include<stdio.h>
int main(){
    int n;
    printf("Enter no. of games won");
    scanf("%d",&n);
    if(n>=5){
        printf("Collge won champion's trophy");
    }
    else{
        printf("Champion's trophy is lost");
    }
}