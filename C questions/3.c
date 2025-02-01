#include<stdio.h>
int main(){
    int bs,da,hra;
    printf("Basic salary :");
    scanf("%d",&bs);
    da=bs*40/100;
    hra=bs*20/100;
    printf("Gross salary is %d",bs+da+hra);
}