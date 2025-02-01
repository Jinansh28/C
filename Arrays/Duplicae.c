#include<stdio.h>
int main(){
    int a[5]={1,2,3,4,4};
    for(int i=0;i<=4;i++){
        for(int j=0;j<=4;j++){
            if(i==j){
                continue;
            }
            if(a[i]==a[j]){
                printf(" Duplicate, %d %d %d",i,j,a[i]);
            }
        }
    }
}