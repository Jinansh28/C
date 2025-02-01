#include<stdio.h>
#include<math.h>
int main(){
    int a=0,n;
    printf("Enter a number");
    scanf("%d",&n);
    int b=n;
    while(n!=0){
        n=n/10;
        a++;
    }
    for(int i=a;i>=0;i--){
        int c=pow(8,i);
        int d=b/c;
        b=b-(d*c);
        printf("%d",d);
    }
    return 0;
}