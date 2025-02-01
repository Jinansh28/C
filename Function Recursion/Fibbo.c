#include<stdio.h>
int fibbo(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    int fb=fibbo(n-1)+fibbo(n-2);
    return fb;
}
int main(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    printf("Fibbonacci series nth is%d",fibbo(n));
}