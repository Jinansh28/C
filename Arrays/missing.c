#include<stdio.h>
int main(){
    int a[100];
    int b;
    for(int i=0;i<=99;i++){
        a[i]=i+1;
    }
    for(int i=0;i<=99;i++){
        if(a[i]==001){
            b=0;
            break;
        }
        else{
            b=1;
        }
    }
    if(b==0){
        printf("Present");
    }
    if(b==1){
        printf("Not present");
    }
}