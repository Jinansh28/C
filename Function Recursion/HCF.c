#include<stdio.h>
int min(int a,int b){
    if(a>b){
        return b;
    }
    else{
        return a;
    }
}
int gcd(int a,int b){
    int d;
    for(int i=1;i<=min(a,b);i++){
        int g=a%i;
        int c=b%i;
        if(g==0 && c==0)
        d=i;
    }
    return d;
}


int main(){
    int a,b;
    printf("enter two numbers");
    scanf("%d %d",&a,&b);
    printf("A is %d\nB is %d",a,b);
    int hcf=gcd(a,b);
    printf("HCF is %d",hcf);
}
