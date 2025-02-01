#include<stdio.h>
int main(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    for(int i=1;i<=(n+1)/2;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=1;i<=n/2;i++){
        for(int j=(n/2)-i;j>=0;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}