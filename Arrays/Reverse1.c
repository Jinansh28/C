#include<stdio.h>
int main(){
    int a[5]={2,4,6,8,10};
    for(int i=0,j=4;i<j;i++,j--){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    printf("%d %d %d %d %d",a[0],a[1],a[2],a[3],a[4]);
}
