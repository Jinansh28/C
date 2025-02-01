#include<stdio.h>
int main(){
    int n;
    printf("Enter a 4 digit number: ");
    scanf("%d",&n);
    int p,q;
    p=n/1000;
    q=n%10;
    printf("Sum of first and last digit is: %d",p+q);
}