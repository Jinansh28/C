#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<=4;i++){
        for(int j=0;j<=4;j++){
            if(arr[i]+arr[j]==4){
                printf("%d %d\n",arr[i],arr[j]);
            }
        }
    }
}