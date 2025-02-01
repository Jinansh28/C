#include<stdio.h>
int factorial(int n);
int main(){
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    printf("Factorial is %d",factorial(a));
}
int factorial(int n){
    if(n==1){
        return 1;
    }
    int fm1=factorial(n-1);
    int Factorial=fm1*n;
    return Factorial;
}