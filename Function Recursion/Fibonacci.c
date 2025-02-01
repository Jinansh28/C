#include<stdio.h>
int Fib(int n);
int main(){
    int n;
    printf("Enter number of terms");
    scanf("%d",&n);
    printf("Fibonacci series is %d",Fib(n));
}
int Fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int Fm1=Fib(n-1);
    int Fm2=Fib(n-2);
    int fib=Fm1+Fm2;
    printf("%d\n",fib);
    return fib;
}