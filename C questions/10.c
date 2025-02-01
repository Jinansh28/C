#include<stdio.h>
#include<math.h>
int main(){
    int n,m,r=0;
    printf("Enter a 5 digit number");
    scanf("%d",&n);
    for(int i=4;i>=0;i--){
        m=n%10;
        n=n/10;
        r=r*10+m;
    }
    printf("%d",r);
}