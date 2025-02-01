#include<stdio.h>
int main(){
    int n;
    printf("Enter no. of rows");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        int f=1;
        for(int j=n-i;j>=0;j--){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("%d ",f);
            f=f*(i-j)/(j+1);
        }
        printf("\n");
    }
    return 0;
}