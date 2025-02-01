#include<stdio.h>
#include<limits.h>
int main(){
    int a[5]={5,2,1,3,4};
    int k=4;
    for(int i=0;i<k;i++){
        for(int j=4;j>i;j--){
            if(a[j-1]>a[j]){
                int temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    }
    printf("%d",a[k-1]);
}