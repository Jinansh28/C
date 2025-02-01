#include<stdio.h>
int main(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int a=i+j;
            if(a<=n){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        for(int j=1;j<=i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=n-1;j++){
            int b=i-j;
            if(b>=0){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        for(int j=n-i;j>=1;j--){
            printf("*");
        }
        printf("\n");
    }
}