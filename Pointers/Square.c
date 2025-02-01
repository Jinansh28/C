#include<stdio.h>
void square(int n);
void _square(int *n);
int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    square(n);
    printf("Number is %d\n",n);
    _square(&n);
    printf("Number is %d",n);
    return 0;
}
void square(int n){
    n=n*n;
    printf("%d\n",n);
}
void _square(int *n){
    *n=(*n)*(*n);
    printf("%d\n",*n);
}