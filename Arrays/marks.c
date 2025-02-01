#include<stdio.h>
int main(){
    int arr[10]={30,40,50,60,70,80,25,20,90,100};
    for(int i=0;i<10;i++){
        if(arr[i]<35){
            printf("%d\n",i);
        }
    }
}