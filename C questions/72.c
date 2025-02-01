#include<stdio.h>
int main(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    int a=(n+1)/2,b=n/2;
    for(int i=1;i<=a;i++){
        for(int j=1;j<a-i+1;j++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("*");
        }
        for(int j=1;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=1;i<=b;i++){
        if(n%2==1){
            for(int j=1;j<=b+1;j++){
                if(i>=j){
                    printf(" ");
                }
                else{
                    printf("*");
                }
            }
            for(int j=b-i;j>=1;j--){
                printf("*");
            }
            printf("\n");
        }
        else{
            for(int j=1;j<=b;j++){
                if(i>j){
                    printf(" ");
                }
                else{
                    printf("*");
                }
            }
            for(int j=b-i;j>=1;j--){
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}