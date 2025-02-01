#include<stdio.h>
#include<math.h>
int main(){
    int n,m; float r=0;
    printf("Enter a 5 digit number");
    scanf("%d",&n);
    for(int i=0;i<5;i++){
        m=n%10;
        n=n/10;
        m=(m+1)%10;
        r=r+m*pow(10,i);
    }
    printf("%f",r);
}