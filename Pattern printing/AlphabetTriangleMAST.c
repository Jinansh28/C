#include<stdio.h>
int main(){
    int n;
    printf("Enter no. of rows");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=65;
        for(int j=1;j<=n;j++){
            int m=i+j;
            if(m<=n){
                printf(" ");
            }
            else{
                printf("%c",a++);
            }
        }
        printf("\n");
    }
}