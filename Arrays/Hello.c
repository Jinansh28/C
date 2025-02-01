#include<stdio.h>
int main(){
    int arr[5]={2,4,6,8,10};
    arr[4]=100;
    printf("%d\n",arr[0]);
    float ar[5]={1.2,2.4,3.6,4.8,6.0};
    printf("%f\n",ar[4]);
    int brr[5];
    for(int i=0;i<=4;i++){
        printf("Enter a number");
        scanf("%d",&brr[i]);
    }
    printf("%d%d%d%d%d",brr[0],brr[1],brr[2],brr[3],brr[4]);
    return 0;
}