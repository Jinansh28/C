#include<stdio.h>
int SPA(int a,int b,int *S,int *P,int *A);
int main(){
    int S,P,A;
    int a=5; int b=3;
    SPA(a,b,&S,&P,&A);
    printf("Sum is %d\n Product is %d\n Average is %d",S,P,A);
}
int SPA(int a,int b,int *S,int *P,int *A){
    *S=a+b;
    *P=a*b;
    *A=(a+b)/2;
}