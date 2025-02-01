#include<stdio.h>
int main(){
    int a[100];
    for(int i=0;i<100;i++){
        a[i]=i+1;
    }
    for(int i=2;i<100;i++){
        for(int j=i+1;j<100;j++){
            if(a[j]%i==0){
                a[j]=0;
            }
        }
    }
    for(int i=0;i<100;i++){
        if(a[i]!=0){
            printf("%d ",a[i]);
        }
    }
    return 0;
}