#include<stdio.h>
int main(){
    int n,b;
    printf("Enter the value of n :");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0,j=n-1;i<j;i++,j--){
        if(a[i]!=a[j]){
            printf("Not a pallindrome");
            break;
        }
        b=i;
    }
    if(b==(n-3)/2){
        printf("Pallindrome");
    }
    return 0;
}