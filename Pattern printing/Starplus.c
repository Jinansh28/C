#include<stdio.h>
int main(){
    int m,n;
    printf("Length of star");
    scanf("%d",&n);
    m=(n+1)/2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==m || j==m){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}