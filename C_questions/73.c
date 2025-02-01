#include<stdio.h>
int main(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    int a=1;
    for(int i=1;i<=n;i++){
        for(int j=n-i+1;j>=1;j--){
            printf("%d",a%10);
            a++;
        }
        printf("\n");
    }
    return 0;
}