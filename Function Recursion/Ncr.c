#include<stdio.h>
int factorial(int n);
int Ncr(int n,int r);
int Npr(int n,int r);
int main(){
    int n=8,r=4;
    int F=factorial(n);
    printf("%d \n",F);
    Ncr(n,r);
    Npr(n,r);
    return 0;
}
int  factorial(int n){
    if(n==1){
    return 1;}
    int f=n*factorial(n-1);
    return f;
}
int Ncr(int n,int r){
    int NCR=(factorial(n))/((factorial(n-r))*(factorial(r)));
    printf("NCR is %d\n",NCR);
}
int Npr(int n,int r){
    int Npr=(factorial(n))/(factorial(n-r));
    printf("NPR is %d",Npr);
}