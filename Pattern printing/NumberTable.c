#include<stdio.h>
int main(){
    int n;
    printf("Enter no. of rows");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int m=1;
        for(int j=1;j<=n;j++){
            int a=i+j;
            if(a<=n+1){
                printf("%d",m++);
            }
            else{
                printf(" ");
            }
        }
        for(int j=1;j<=n-1;j++){
            int b=i-j;
            if(b>=2){
                printf(" ");
            }
            else{
                printf("%d",j+n);
            }
        }
        printf("\n");
    }
}