#include<stdio.h>
#include<limits.h>
int main(){
    int a[9]={1,2,32,32,1,2,4,21,232};
    int max=a[0];
    int smax=INT_MIN;
    for(int i=0;i<=8;i++){
        if(max<a[i]){
            smax=max;
            max=a[i];
        }
        else if(smax<a[i]){
            smax=a[i];
        }
    }
    printf("%d",max);
}