#include<stdio.h>
int main(){
    int n,r=0,m;
    printf("Enter a 5 digit number");
    scanf("%d",&n);
    int p=n;
    for(int i=0;i<5;i++){
        m=n%10;
        n=n/10;
        r=(r*10)+m;
    }
    printf("Reversed is %d\n",r);
    if(r==p){
        printf("Original and reversed number are equal");
    }
    return 0;
}
