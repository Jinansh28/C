#include<stdio.h>
int reverse(int a[],int b,int n){
    for(int i=b,j=n;i<j;i++,j--){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
}
int main(){
    int n=5;
    int b=0;
    int k;
    printf("Enter a number");
    scanf("%d",&k);
    k=k%n;
    int a[5]={1,2,3,4,5};
    reverse(a,0,n-1);
    reverse(a,0,k-1);
    reverse(a,k,n-1);
    printf("%d %d %d %d %d",a[0],a[1],a[2],a[3],a[4]);
}