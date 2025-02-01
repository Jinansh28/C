#include<stdio.h>
int main(){
    int n,d;
    printf("Enter a number");
    scanf("%d",&n);
    printf("2\n");
    for(int j=2;j<=n;j++){
        for(int i=2;i<j;i++){
        if(j%i==0){
            break;
        }
        d=i;
        }
    if(d==j-1|| n==2){
        printf("%d\n",j);
    }
    }
}