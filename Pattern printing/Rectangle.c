#include<stdio.h>
int main(){
    int m,n;
    printf("Enter breadth amd length");
    scanf("%d %d",&m,&n);
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            printf("*");
        }
        printf("\n");
    }
}