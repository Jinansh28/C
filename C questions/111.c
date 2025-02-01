#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n :");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int b[n];
    for(int i=0;i<n;i++){
        b[i]=a[n-i-1];
    }
    for(int i=0;i<n;i++){
        printf("%d ",b[i]);
    }
    return 0;
}