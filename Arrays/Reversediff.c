#include<stdio.h>
int main(){
    int a[5]={1,3424,322,2992,38};
    int b[5];
    for(int i=0;i<=4;i++){
        b[i]=a[4-i];
    }
    printf("%d %d %d %d %d",b[0],b[1],b[2],b[3],b[4]);
}