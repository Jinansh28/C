#include<stdio.h>
int main(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    for(int i=1;i<=(n+1)/2;i++){
        for(int j=(n+1)/2-i;j>=1;j--){
            printf(" ");
        }
        for(int j=i;j>=1;j--){
            printf("*");
        }
        printf("\n");
    }
    for(int i=1;i<=n/2;i++){
        if(n%2==1){
        for(int j=1;j<=n/2+1;j++){
            if(i>=j){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
        }
        else{
            for(int j=1;j<=n/2;j++){
                if(i>j){
                    printf(" ");
                }
                else{
                    printf("*");
                }
            }
            printf("\n");
        }
    }
    return 0;
}