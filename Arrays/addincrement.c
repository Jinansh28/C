#include<stdio.h>
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,0};
    for(int i=0;i<=9;i++){
        if(i%2==1){
            arr[i]=2*arr[i];
        }
        else{
            arr[i]=arr[i]+10;
        }
    }
    printf("%d %d %d %d",arr[1],arr[2],arr[5],arr[6]);
}