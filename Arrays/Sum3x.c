#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<=4;i++){
        for(int j=0;j<=4;j++){
            for(int k=0;k<=4;k++){
                if(arr[i]+arr[j]+arr[k]==10){
                    printf("%d %d %d\n",arr[i],arr[j],arr[k]);
                }
            }
        }
    }
}