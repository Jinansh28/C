#include<stdio.h>
int main(){
    int n;
    printf("Enter no. of rows");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int a=i+j;
            if(a<=n+1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        for(int j=1;j<n;j++){
            int b=i-j;
            if(b>=2){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
}