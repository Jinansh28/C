#include<stdio.h>
int main(){
    int n;
    printf("Enter amount : ");
    scanf("%d",&n);
    int h,f,t;
    h=n/100;
    f=(n%100)/50;
    t=(n%50)/10;
    printf("100 Rs note: %d\n",h);
    printf("50 Rs note: %d\n",f);
    printf("10 Rs note: %d",t);   
}