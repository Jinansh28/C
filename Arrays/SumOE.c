#include<stdio.h>
int main(){
    int arr[6]={10,20,30,40,50,60};
    int s=0,t=0;
    for(int i=0;i<=5;i++){
        if(i%2==0){
            s=s+arr[i];
        }
        else{
            t=t+arr[i];
        }
    }
    printf("Difference is %d",t-s);
}