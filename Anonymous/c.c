#include<stdio.h>
void main(){
    int n,b;
    printf("Enter a number");
    scanf("%d",&n);
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            printf("Not a prime number \n");
            break;
        }
        b=i;
    }
    if(b==n-1){
        printf("Prime number \n");
    }
    int product =1;
    for(int i=1;i<=n;i++){
        product=product*i;
    }
    printf("Factorial is %d \n",product);
    for(int i=1;i<=n;i++){
        for(int j=n-i+1;j>=1;j--){
        printf("*");
        }
        for(int j=n+1-i+5;j<=5;j--){
            printf("*");

        }
        printf("\n");
    }
}

