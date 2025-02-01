#include<stdio.h>
int main(){
    int arr[5]={1,3,5,7,9};
    int product =1;
    for(int i=1;i<=4;i++){
        product=product*arr[i];
    }
    printf("%d",product);
}