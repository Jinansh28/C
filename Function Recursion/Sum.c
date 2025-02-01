#include<stdio.h>
int Sum(int a, int b);
void Table(int n);
int main(){
    int a,b,n;
    printf("Enter both numbers");
    scanf("%d %d %d",&a,&b,&n);
    int s=Sum(a,b);
    Table(n);
    printf("sum is:%d",s);
    return 0;
}
void Table(int n){
    for(int i=1;i<=10;i++){
        printf("%d\n",n*i);
    }
}
int Sum(int a,int b){
    return a+b;
}