#include<stdio.h>
int factorial(int n){
    if(n==0){
        return 1;
    }
    int F=n*factorial(n-1);
}
int Ncr(int n,int r){
    int N=factorial(n)/((factorial(n-r))*(factorial(r)));
    return N;
}
int main(){
    int n,r;
    printf("Enter no. of rows");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int j=n-i;j>=0;j--){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("%d ",Ncr(i,j));
        }
        printf("\n");
    }
    return 0;
}