#include<stdio.h>
int f(int z){
    if(z==1 || z==0){
        return 1;
    }
    int k=z*f(z-1);
    return k;
}
int nCr(int i,int j){
    int a=f(i)/(f(j)*f(i-j));
    return a;
}
int main(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("%d ",nCr(i,j));
        }
        printf("\n");
    }
    return 0;
}