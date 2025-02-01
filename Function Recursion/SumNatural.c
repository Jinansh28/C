#include<stdio.h>
int sum(int n);
void main(){
    int a;
    printf("Enter number of terms");
    scanf("%d",&a);
    printf("The sum is %d",sum(a));
}
int sum(int n){
    if(n==1){
        return 1;
    }
    int Snm1=sum(n-1);
    int Sum=Snm1+n;
    return Sum;
}