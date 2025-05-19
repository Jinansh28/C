#include<stdio.h>
int main(){
    int a[10];
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<10;i++){
        int curr=a[i],prev=i-1;
        while(prev>=0 && a[prev]>curr){
            a[prev+1]=a[prev--];
        }
        a[prev+1]=curr;
    }
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    return 0;
}