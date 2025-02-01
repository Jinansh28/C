#include<stdio.h>
int main(){
    int n,m;
    printf("Enter a 5digit number");
    scanf("%d",&n);
    int sum=0;
    for(int i=0;i<5;i++){
        m=n%10;
        n=n/10;
        sum=sum+m;
    }
    printf("%d",sum);
}