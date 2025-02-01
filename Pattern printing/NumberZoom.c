#include<stdio.h>
int main(){
    int n,min;
    printf("Enter a number");
    scanf("%d",&n);
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=2*n-1;j++){
            int a=i;
            int b=j;
            if(a>n){
                a=2*n-i;
            }
            if(b>n){
                b=2*n-j;
            }
            if(a<b){
                printf("%d",n+1-a);
            }
            else{
                printf("%d",n+1-b);
            }
        }
        printf("\n");
    }
}