#include<stdio.h>
int main(){
    int arr[5]={1,4,2,40,5};
    int a=arr[0];
    for(int i=1;i<=4;i++){
        if(a<arr[i]){
            a=arr[i];
        }
    }
    printf("%d",a);
}