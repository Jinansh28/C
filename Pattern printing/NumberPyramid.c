#include<stdio.h>
int main(){
    int n;
    printf("Enter no. of rows");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=n-1;j++){
            int m=i+j;
            if(m<=n){
                printf(" ");
            }
            else{
                printf("%d",a++);
            }
        }
        for(int j=1;j<=i;j++){
            printf("%d",a++);
        }
        printf("\n");
    }
}