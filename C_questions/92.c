#include<stdio.h>
#include<math.h>
int main(){
    int a,n,p,q,r;
    for(int i=1;i<=10;i++){
        printf("Value of p:");
        scanf("%d",&p);
        printf("Value of q:");
        scanf("%d",&q);
        printf("Value of n:");
        scanf("%d",&n);
        printf("Value of r:");
        scanf("%d",&r);
        int b=p*((1+r)/q);
        a=pow(b,n*q);
        printf("Value of a:%d\n",a);
    }
    return 0;
}