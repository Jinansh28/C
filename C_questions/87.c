#include<stdio.h>
int main(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i>j){
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
    for(int i=1;i<n;i++){
        for(int j=1;j<=n;j++){
            int a=i+j;
            if(a<n){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}